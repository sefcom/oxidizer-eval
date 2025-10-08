long long uu_sort::FieldSelector::parse_with_options::parse_key_settings(unsigned long long a0, unsigned long long a1, unsigned long a2, char a3[5])
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char v2;  // [bp-0x80], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x54]
    unsigned long long v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v12;  // rdx
    char v13;  // bpl
    char *v14;  // rdi
    char v15[5];  // rsi
    unsigned int v16;  // edx
    unsigned long long v17;  // rax

    v7 = a1;
    v8 = a2 + a1;
    if (((char)core::str::validations::next_code_point(&v7) & 1))
    {
        while (true)
        {
            switch ((unsigned int)v12)
            {
            case 77:
                v1.set_sort_mode(a3, 3);
                if (v1 != 0x8000000000000000)
                    goto LABEL_4d3889;
                break;
            case 82:
                v14 = &v1;
                v15 = a3;
                v16 = 5;
                goto LABEL_4d3815;
            case 86:
                v14 = &v1;
                v15 = a3;
                v16 = 4;
                goto LABEL_4d3815;
            case 98:
                v13 = 1;
                break;
            case 100:
                v1.set_dictionary_order(a3);
                if (v1 != 0x8000000000000000)
                    goto LABEL_4d3889;
                break;
            case 102:
                a3[1] = 1;
                break;
            case 103:
                v1.set_sort_mode(a3, 2);
                if (v1 != 0x8000000000000000)
                    goto LABEL_4d3889;
                break;
            case 104:
                v1.set_sort_mode(a3, 1);
                if (v1 != 0x8000000000000000)
                {
LABEL_4d3889:
                    *((unsigned long *)&v0[16]) = v3;
                    *((int128_t *)v0) = *((int128_t *)&v1);
                    return v3;
                }
                break;
            case 105:
                v1.set_ignore_non_printing(a3);
                v17 = v1;
                if (v1 != 0x8000000000000000)
                    goto LABEL_4d3876;
                break;
            case 110:
                v14 = &v1;
                v15 = a3;
                v16 = 0;
LABEL_4d3815:
                v14.set_sort_mode(v15, v16);
                v17 = v1;
                if (v1 != 0x8000000000000000)
                {
LABEL_4d3876:
                    *((int128_t *)&v0[8]) = *((int128_t *)&v2);
                    *((unsigned long long *)v0) = v17;
                    return v17;
                }
                break;
            case 114:
                a3[4] = 1;
                break;
            default:
                v6 = v12;
                v9 = &v6;
                v10 = <char as core::fmt::Display>::fmt;
                v1 = &g_58d098;
                v2 = 2;
                v5 = 0;
                v3 = &v9;
                v4 = 1;
                return a0.map_or_else(&v1);
            }
            if (!((char)core::str::validations::next_code_point(&v7) & 1))
                break;
        }
    }
    *((char *)&v0[8]) = v13;
    *((long long *)v0) = 0x8000000000000000;
    return a0;
}
