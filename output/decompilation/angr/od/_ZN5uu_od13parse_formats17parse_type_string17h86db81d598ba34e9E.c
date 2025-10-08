long long uu_od::parse_formats::parse_type_string(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x135]
    char v2;  // [bp-0x134]
    void* v3;  // [bp-0x130]
    void* v4;  // [bp-0x118], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x111]
    unsigned long long v6;  // [bp-0x110]
    void* v7;  // [bp-0x108]
    void* v8;  // [bp-0x100]
    unsigned long long v9;  // [bp-0xf8]
    void* v10;  // [bp-0xf0]
    unsigned long long v11;  // [bp-0xe8]
    int v13;  // [bp-0xe0], Other Possible Types: char
    int v14;  // [bp-0xdf]
    void* v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    char v17;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    char *v20;  // [bp-0xb0]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98], Other Possible Types: char
    void* v24;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x78]
    void* v26;  // [bp-0x71]
    char *v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x50]
    unsigned long long v30;  // [bp-0x48]
    unsigned long long v31;  // [bp-0x40]
    char *v32;  // [bp-0x38]
    unsigned int v34;  // edx
    unsigned int v35;  // ebp
    char *v36;  // rdi
    char v37;  // al
    char v38;  // al
    char v39;  // r14b
    char v40;  // r15b
    char v42;  // dl
    char v43;  // r15b
    unsigned long long v44;  // rcx
    unsigned long long v45;  // rdx

    v8 = 0;
    v9 = 8;
    v10 = 0;
    v21 = a1;
    v22 = a1 + a2;
    if ((v34 != 0x110000 & (char)core::str::validations::next_code_point(&v21)) == 1)
    {
        v35 = v34;
        v36 = &(char)v11;
        do
        {
            switch (v35)
            {
            case 97:
                break;
            case 99:
                v37 = 1;
                break;
            case 100:
                v37 = 2;
                break;
            case 102:
                v37 = 6;
                break;
            case 111:
                v37 = 3;
                break;
            case 117:
                v37 = 4;
                break;
            case 120:
                v37 = 5;
                break;
            default:
                v18 = a1;
                v19 = a2;
                v20 = &v2;
                uu_od::parse_formats::parse_type_string::{{closure}}(v36, &v18);
                v38 = v13;
                v4 = (long long)v14;
                v5 = v15;
                if (v11 != 0x8000000000000000)
                {
                    v45 = v4;
                    *((void* *)&v3[24]) = v5;
                    *((unsigned long long *)&v3[17]) = v45;
                    *((unsigned long long *)&v3[8]) = v11;
                    *((char *)&v3[16]) = v38;
                    *((unsigned long long *)v3) = 1;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v8, 8);
                }
                goto LABEL_46a064;
            }
            v18 = a1;
            v19 = a2;
            v20 = &v2;
LABEL_46a064:
            v39 = v37;
            v40 = ((v39 * 8 & 63) ? (unsigned int)(0x2010101010000 >> (v39 * 8 & 63)) : (unsigned int)(0x2010101010000 >> (v39 * 8 & 63)));
            v35 = (!((char)core::str::validations::next_code_point(&v21) & 1) ? 0x110000 : v34);
            v0 = 0;
            if (!(char)uu_od::parse_formats::is_format_size_char(v35, v40, &v0))
            {
                v4 = 0;
                v6 = 1;
                for (v7 = 0; (char)uu_od::parse_formats::is_format_size_decimal(v35, v40, &(char)v4); v35 = (!((char)core::str::validations::next_code_point(&v21) & 1) ? 0x110000 : v34));
                if (v7)
                {
                    v27 = &(char)v4;
                    v28 = a1;
                    v29 = a2;
                    if (((char)core::num::<impl u8>::from_ascii_radix(1, v7) & 1))
                    {
                        uu_od::parse_formats::parse_type_string::{{closure}}(&(char)v11, &v27);
                        v42 = v13;
                        v25 = (long long)v14;
                        v26 = v15;
                        if (v11 != 0x8000000000000000)
                        {
                            v44 = v25;
                            *((void* *)&v3[24]) = v26;
                            *((unsigned long long *)&v3[17]) = v44;
                            *((unsigned long long *)&v3[8]) = v11;
                            *((char *)&v3[16]) = v42;
                            *((unsigned long long *)v3) = 1;
                            core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v8, 8);
                        }
                    }
                    v0 = v42;
                }
                core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                if (v35 != 122)
                    goto LABEL_46a1d5;
LABEL_46a1b6:
                v35 = (!((char)core::str::validations::next_code_point(&v21) & 1) ? 0x110000 : v34);
                v43 = 1;
                continue;
            }
            else if (((char)core::str::validations::next_code_point(&v21) & 1))
            {
                v35 = v34;
                if (v34 != 122)
                    goto LABEL_46a1d5;
                goto LABEL_46a1b6;
            }
            else
            {
                v35 = 0x110000;
LABEL_46a1d5:
            }
            uu_od::parse_formats::od_format_type(&(char)v11, v39);
            if (v11 == 3)
            {
                v31 = a2;
                v32 = &v0;
                v30 = a1;
                uu_od::parse_formats::parse_type_string::{{closure}}(&(char)v4, &v30);
                memcpy(&v23, &v4, 16);
                v24 = v7;
                *((void* *)&v3[24]) = v7;
                v3[8] = v23;
                *((unsigned long long *)v3) = 1;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v8, 8);
            }
            memcpy(&v23, &v13, 16);
            v24 = v16;
            v16 = v24;
            *((int128_t *)&v13) = *((int128_t *)&v13);
            v17 = v43;
            v8.push(&v11, &g_502608);
            v36 = &v11;
        } while (v35 != 0x110000);
    }
    *((unsigned long long *)&v3[24]) = 0;
    *((int128_t *)&v3[8]) = *((int128_t *)&v8);
    *((unsigned long long *)v3) = 0;
    return 0;
}
