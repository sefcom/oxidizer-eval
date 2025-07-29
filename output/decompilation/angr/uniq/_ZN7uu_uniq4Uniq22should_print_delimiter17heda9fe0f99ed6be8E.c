long long uu_uniq::Uniq::should_print_delimiter(char a0, unsigned long a1, char a2)
{
    unsigned long v1;  // rax

    if (!(!a1 != 1 && !a0 == 4))
        return 0;
    return (v1 & 0xffffffffffffff00 | a0 == 4) & 0xffffffffffffff00 | (a0 & 253) == 1 | a2;
}
