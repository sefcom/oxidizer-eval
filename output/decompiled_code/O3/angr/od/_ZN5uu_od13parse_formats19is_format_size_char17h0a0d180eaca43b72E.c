long long uu_od::parse_formats::is_format_size_char::h0a0d180eaca43b72(unsigned int a0, unsigned long a1, char *a2)
{
    void* v1;  // rax
    unsigned long long v2;  // rax

    if (!(char)a1)
        return 0;
    v1 = a1 & 4294967295;
    if ((unsigned int)v1 != 1)
    {
        if (a0 == 68)
            goto LABEL_4caefb;
        v2 = v1 | -0x100 | 4;
        if (a0 != 70)
            return 0;
    }
    else
    {
        v1 = 0;
        switch (a0)
        {
        case 67:
            v2 = -255;
            break;
        case 73:
            v2 = -252;
            break;
        case 76:
LABEL_4caefb:
            v2 = v1 | -0x100 | 8;
            break;
        case 83:
            v2 = -254;
            break;
        default:
LABEL_4caf09:
            return v1;
        }
    }
    *(a2) = 4;
    v1 = v2 | -0x100 | 1;
    goto LABEL_4caf09;
}
