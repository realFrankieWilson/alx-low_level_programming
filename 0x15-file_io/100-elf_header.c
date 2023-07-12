#include "main.h"
/**
 * magic_num -> Prints the magic numbers of an ELF header.
 * @elf_i: A pointer to an array containing the ELF magic numbers.
 *
 * NOTE: magic numbers are separated by spaces.
 */

void magic_num(unsigned char *elf_i)
{
	int i = 0;

	printf(" Magic: ");

	for (; i < IND; i++)
	{
		printf("%02x", ptr_to_indx[i]);

		if (i == IND - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
* check_for_elf -> checks if a file is an ELF or not.
* @ptr_to_indx: A pointer to array containing the ELF magic file numbers.
*
*Return: 98 if the file is not an ELF file.
*/

void check_for_elf(unsigned char *ptr_to_indx)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ptr_to_indx[i] != 127 && ptr_to_indx[i] != 69
			&& ptr_to_indx[i] != 76 && ptr_to_indx[i] != 70)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}

	}
}


/**
* class_ -> Prints the classes of an ELF header.
* @ptr_to_indx: A pointer to an array containing the EFL classes
*/

void class_(unsigned char *ptr_to_indx)
{
	printf(" class:						");

	switch (ptr_to_indx[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr_to_indx[EI_CLASS]);
	}
}


/**
* data_ -> prints the data of an ELF header
* @ptr_to_indx: A pointer to an array containing the ELF class.
*/

void data_(unsigned char *ptr_to_indx)
{
	printf(" Data:								");

	switch (ptr_to_indx[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr_to_indx[EI_CLASS]);
	}
}


/**
* version_ -> Prints the version of an ELF header.
* ptr_to_indx: A pointer to an array containing the ELF version.
*/

void version_(unsigned char *ptr_to_indx)
{
	printf(" Version:						%d", ptr_to_indx[EI_VERSION]);

	switch (ptr_to_indx[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}


/**
* OS -> Prints the Operating system/ABI of an ELF header
* ptr_to_indx: A pointer to an array containing the ELF version.
*/

void OS(unsigned char *ptr_to_indx)
{
	printf(" OS/ABI:								");

	switch (ptr_to_indx[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr_to_indx[EI_OSABI]);
	}
}


/**
* abi_version -> prints the ABI version of an ELF header
* @ptr_to_indx: A pointer to an array containning ELF ABI version.
*/

void abi_version(unsigned char *ptr_to_indx)
{
	printf(" ABI Version:							%d\n",
		ptr_to_indx[EI_ABIVERSION]);
}


/**
* type_ -> Prints the type of an ELF header.
* @elf_type: The ELF type.
* @ptr_to_indx: A Pointer to an array containing the ELF class.
*/

void type_(unsigned int elf_type, unsigned char *ptr_to_indx)
{
	if (ptr_to_indx[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf(" Type:						");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
* entry_point -> Prints the entry point of an ELF header.
* @type_: The address of the ELF entry point.
* @ptr_to_indx: A pointer to an array containing the ELF class.
*/

void entry_point(unsigned long int type_, unsigned char *ptr_to_indx)
{
	printf(" Entyr point address:				");

	if (ptr_to_indx[EI_DATA] == ELFDATA2MSB)
	{
		type_ = ((type_ << 8) & 0xFF00FF00) | ((type_ >> 8)
			& 0xFF00FF);
		type_ = (type_ << 16) | (type_ >> 16);
	}

	if (ptr_to_indx[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)type_);
	else
		printf("%#lx\n", type_);
}

/**
* close_ -> Closes an ELF file
* @fd: The file descriptor of the ELF file.
*
* NOTE: exit 98 if unable to open file.
*/

void close_(int fd)
{
	if (close_(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n", fd);
		exit(98);
	}
}


/**
* main -> Displays the information contained in the ELF header file
* at the start of an ELF file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
* Descrip: the EFL returns the fail function on - exit 98.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	check_for_elf(header->ptr_to_indx);
	printf("ELF Header:\n");
	magic_num(header->ptr_to_indx);
	class_(header->ptr_to_indx);
	data_(header->ptr_to_indx);
	version_(header->ptr_to_indx);
	OS(header->ptr_to_indx);
	abi_version(header->ptr_to_indx);
	type_(header->ptr_to_indx);
	entry_point(header->ptr_to_indx);
	free(header);
	close_(o);
	return (0);
}
