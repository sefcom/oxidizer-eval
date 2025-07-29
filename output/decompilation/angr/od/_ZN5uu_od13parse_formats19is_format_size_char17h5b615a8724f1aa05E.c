long long uu_od::parse_formats::is_format_size_char(unsigned int a0, char a1, char *a2)
{
    unsigned long long v1;  // rax
    char v2;  // al
    unsigned long long v3;  // rax

    if (!a1)
        return 0;
    v1 = a1;
    if ((unsigned int)v1 == 1)
    {
        v1 = 0;
        switch (a0)
        {
        case 67:
            v2 = 1;
            v3 = 1;
            break;
        case 73:
            v2 = 4;
            v3 = 4;
            break;
        case 76:
            v2 = 8;
            v3 = v1 & 0xffffffffffffff00 | 8;
            break;
        case 83:
            v2 = 2;
            v3 = 2;
            break;
        default:
            return v1;
        }
    }
}
