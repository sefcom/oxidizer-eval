long long uu_cat::get_input_type(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xe4]
    char *v1;  // [bp-0xe0], Other Possible Types: char
    unsigned int v2;  // [bp-0xdc]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    char v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc0]
    char *v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    char v10;  // [bp-0x90]
    unsigned long long v12;  // rax

    if ((char)a1.equal(a2))
    {
        *((char *)&a0[8]) = 2;
    }
    else
    {
        std::fs::metadata(&v5, a1, a2);
        if (*((int *)&v5) == 2)
        {
            v4 = v6;
            v12 = std::io::error::repr_bitpacked::decode_repr(&v1, v4);
            if (!v1 && v2 == 40)
            {
                *((unsigned long long *)a0) = 9223372036854775813;
                return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v4);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            *((unsigned long long *)&a0[8]) = v4;
            return v12;
        }
        v0 = *((int *)&v10);
        switch ((v0 & 0xf000) - 0x1000 >> 12)
        {
        case 0:
            *((char *)&a0[8]) = 6;
            break;
        case 1:
            *((char *)&a0[8]) = 5;
            break;
        case 3:
            *((char *)&a0[8]) = 0;
            break;
        case 5:
            *((char *)&a0[8]) = 4;
            break;
        case 7:
            *((char *)&a0[8]) = 1;
            break;
        case 9:
            *((char *)&a0[8]) = 3;
            break;
        case 11:
            *((char *)&a0[8]) = 7;
            break;
        default:
            v1 = &v0;
            v3 = <std::fs::FileType as core::fmt::Debug>::fmt;
            v5 = &g_419be0;
            v6 = 1;
            v9 = 0;
            v7 = &(char)v1;
            v8 = 1;
            return a0.map_or_else(&v5);
        }
    }
    *((unsigned long long *)a0) = 9223372036854775814;
    return 9223372036854775814;
}
