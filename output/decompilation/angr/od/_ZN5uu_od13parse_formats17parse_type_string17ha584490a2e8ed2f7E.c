long long uu_od::parse_formats::parse_type_string(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x135]
    char v2;  // [bp-0x134]
    struct_0 *v3;  // [bp-0x130]
    void* v4;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x111]
    unsigned long long v6;  // [bp-0x110]
    void* v7;  // [bp-0x108]
    unsigned long long v8;  // [bp-0x100]
    int v10;  // [bp-0xf8], Other Possible Types: char
    int v11;  // [bp-0xf7]
    unsigned long long v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    char v14;  // [bp-0xe0]
    void* v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    void* v17;  // [bp-0xc8]
    char *v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xb0]
    unsigned long long v21;  // [bp-0xa8]
    unsigned long long v22;  // [bp-0xa0]
    int v23;  // [bp-0x98], Other Possible Types: char
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x78]
    unsigned long long v26;  // [bp-0x71]
    char *v27;  // [bp-0x60]
    unsigned long long v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x50]
    char *v30;  // [bp-0x48]
    unsigned long long v31;  // [bp-0x40]
    unsigned long long v32;  // [bp-0x38]
    unsigned int v34;  // eax
    char v35;  // al
    unsigned int v36;  // edx
    unsigned int v37;  // ebp
    char v38;  // al
    char v39;  // r12b
    char v40;  // r14b
    char v42;  // dl
    char v43;  // r14b
    unsigned long long v44;  // rcx
    unsigned long long v45;  // rdx

    v15 = 0;
    v16 = 8;
    v17 = 0;
    v21 = a1;
    v22 = a1 + a2;
    v34 = ::0x4ae7b0::core::str::validations::next_code_point(&v21);
    v35 = !v34;
    if (!v36 == 0x110000 && !!v34)
    {
        v37 = v36;
        do
        {
            switch (v37)
            {
            case 97:
                break;
            case 99:
                v35 = 1;
                break;
            case 100:
                v35 = 2;
                break;
            case 102:
                v35 = 6;
                break;
            case 111:
                v35 = 3;
                break;
            case 117:
                v35 = 4;
                break;
            case 120:
                v35 = 5;
                break;
            default:
                v18 = &v2;
                v19 = a1;
                v20 = a2;
                uu_od::parse_formats::parse_type_string::{{closure}}(&v8, &v18);
                v38 = v10;
                v4 = (long long)v11;
                v5 = v12;
                if (v8 != 0x8000000000000000)
                {
                    v45 = v4;
                    v3->field_11 = v5;
                    *((unsigned long long *)&(&v3->padding_9)[1]) = v45;
                    *((unsigned long long *)&v3->field_8) = v8;
                    v3->padding_9[7] = v38;
                    v3->field_0 = 1;
                    return (unsigned long long)::0x4ae730::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v15);
                }
                goto LABEL_4afcf4;
            }
            v18 = &v2;
            v19 = a1;
            v20 = a2;
LABEL_4afcf4:
            v39 = v35;
            v40 = ((v39 * 8 & 63) ? (unsigned int)(0x2010101010000 >> (v39 * 8 & 63)) : (unsigned int)(0x2010101010000 >> (v39 * 8 & 63)));
            v37 = (!(int)::0x4ae7b0::core::str::validations::next_code_point(&v21) ? 0x110000 : v36);
            v0 = 0;
            if (!(char)uu_od::parse_formats::is_format_size_char(v37, v40, &v0))
            {
                v4 = 0;
                v6 = 1;
                for (v7 = 0; (char)uu_od::parse_formats::is_format_size_decimal(v37, v40, &(char)v4); v37 = (!(int)::0x4ae7b0::core::str::validations::next_code_point(&v21) ? 0x110000 : v36));
                if (v7)
                {
                    v27 = &(char)v4;
                    v28 = a1;
                    v29 = a2;
                    if (((char)core::num::<impl u8>::from_str_radix(1, v7) & 1))
                    {
                        uu_od::parse_formats::parse_type_string::{{closure}}(&v8, &v27);
                        v42 = v10;
                        v25 = (long long)v11;
                        v26 = v12;
                        if (v8 != 0x8000000000000000)
                        {
                            v44 = v25;
                            v3->field_11 = v26;
                            *((unsigned long long *)&(&v3->padding_9)[1]) = v44;
                            *((unsigned long long *)&v3->field_8) = v8;
                            v3->padding_9[7] = v42;
                            v3->field_0 = 1;
                            ::0x4ae680::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
                            return (unsigned long long)::0x4ae730::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v15);
                        }
                    }
                    v0 = v42;
                }
                ::0x4ae680::core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
            }
            else if ((int)::0x4ae7b0::core::str::validations::next_code_point(&v21))
            {
                v37 = v36;
            }
            else
            {
                v37 = 0x110000;
                continue;
            }
            if (v37 == 122)
            {
                v37 = (!(int)::0x4ae7b0::core::str::validations::next_code_point(&v21) ? 0x110000 : v36);
                v43 = 1;
            }
            uu_od::parse_formats::od_format_type(&v8, v39);
            if (v8 == 3)
            {
                v31 = a1;
                v32 = a2;
                v30 = &v0;
                uu_od::parse_formats::parse_type_string::{{closure}}(&(char)v4, &v30);
                memcpy(&v23, &v4, 16);
                v24 = v7;
                v3->field_11 = v7;
                *((void*)&v3->field_8) = v23;
                v3->field_0 = 1;
                return (unsigned long long)::0x4ae730::core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(&v15);
            }
            memcpy(&v23, &v10, 16);
            v24 = v13;
            v13 = v24;
            *((int128_t *)&v10) = *((int128_t *)&v10);
            v14 = v43;
            v15.push(&v8, &g_5959a8);
        } while (v37 != 0x110000);
    }
    v3->field_11 = 0;
    *((int128_t *)&v3->field_8) = *((int128_t *)&v15);
    v3->field_0 = 0;
    return 0;
}
