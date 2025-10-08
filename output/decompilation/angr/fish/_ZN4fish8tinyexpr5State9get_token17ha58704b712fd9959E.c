long long fish::tinyexpr::State::get_token()
{
    void* v0;  // [bp-0x58]
    unsigned int v1[2];  // [bp-0x50], Other Possible Types: char
    char v2;  // [bp-0x4f]
    unsigned long v3;  // [bp-0x48], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x40], Other Possible Types: unsigned long
    void* v5;  // [bp-0x38]
    void* v7;  // rsi
    unsigned long v8;  // r12
    unsigned long v9;  // rbx
    unsigned long long v10;  // rbx
    unsigned long v11;  // r13
    unsigned int v12[2];  // r14
    unsigned int v13;  // ecx
    unsigned int v14;  // ecx
    void* v15;  // rcx
    unsigned long v16;  // r12
    char v17;  // dl
    unsigned long long v18;  // rsi
    unsigned long v19;  // r12
    unsigned long long v21[3];  // rdi
    unsigned int v22;  // eax
    void* v23;  // rdi
    char v24;  // al
    void* v25;  // rsi
    void* v26;  // rdi
    unsigned int v27;  // eax
    void* v28;  // rbp
    unsigned long long v29;  // r15
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    char v33;  // cl
    struct_0 *v34;  // rdi
    unsigned long v35;  // rax

    v8 = (long long)v7[56];
    v9 = (long long)v7[48];
    v10 = v9 - v8;
    if (v9 >= v8 && v9 != v8)
    {
        v11 = (long long)v7[40];
        v12 = v8 * 4 + v11;
        v13 = v12[0];
        if (!(10 <= v13 - 48 & v13 != 46))
        {
            v0 = 0;
            fish::wutil::wcstod::wcstod_underscores(&v1, v12, v10, &v0);
            if (v1 != 1)
            {
                v21[0] = v0;
                v21[1] = 9;
                v21[2] = v3;
                return v0;
            }
            v14 = v2;
            switch (v14)
            {
            case 0:
                v17 = 8;
                v15 = v0;
                v19 = v8;
                v18 = v15;
                break;
            case 2:
                v15 = v0;
                v16 = v8 + v15;
                if ((char)__CFADD__(v8, v15))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e38a8); /* do not return */
                v17 = 9;
                v18 = 1;
                v19 = v16;
                break;
            default:
                core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14e3890); /* do not return */
            }
            *((unsigned long long *)v7) = 4;
            *((unsigned long *)&v7[16]) = v19;
            *((unsigned long long *)&v7[24]) = v18;
            *((char *)&v7[32]) = v17;
            v21[0] = v15;
            v21[1] = 4;
            return v21;
        }
        else
        {
            v22 = v12[0];
            if ((v22 & 4294967263) - 65 < 26)
            {
LABEL_141b196:
                if ((v10 != 1 & v13 == 120))
                {
                    v27 = v12[1];
                    if (v27 - 9 < 5 || v27 == 32)
                        goto LABEL_141b1bb;
                    if (v27 >= 128)
                    {
                        v4 = v26;
                        v26 = v4;
                        if (!(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v27))
                            goto LABEL_141b2b9;
                        else
                            goto LABEL_141b1bb;
                    }
                }
LABEL_141b2b9:
                v5 = v25;
                v28 = v26;
                *((unsigned int *[2])&v1[0]) = v12;
                v3 = v9 * 4 + v11;
                if (!((char)(char)v1.position() & 1))
                    v29 = v10;
                v31 = fish::tinyexpr::find_builtin(&(char)v1, 0.index(v29, v12, v10, &g_14e38c0), v30);
                if ((int)v1 != 4)
                {
                    *((int128_t *)&v28[8]) = *((int128_t *)&v1);
                    *((unsigned long long *)v28) = v29;
                    return v31;
                }
                if (*((int *)v5) != 4 || (char)v5[32] == 9)
                {
                    *((unsigned long long *)v5) = 4;
                    *((unsigned long *)&v5[16]) = v8;
                    *((unsigned long long *)&v5[24]) = v29;
                    *((char *)&v5[32]) = 0;
                }
                *((unsigned long long *)v28) = v29;
                *((unsigned long long *)&v28[8]) = 4;
                return v5;
            }
            else
            {
                if (v22 >= 128)
                {
                    v4 = v23;
                    v24 = core::unicode::unicode_data::alphabetic::lookup(v22);
                    v26 = v4;
                    v13 = v12[0];
                    if (v24)
                        goto LABEL_141b196;
                }
                switch (v13)
                {
                case 9: case 10: case 13: case 32:
                    *((unsigned long long *)v26) = 1;
                    *((unsigned long long *)&v26[8]) = 12;
                    return 11;
                case 33: case 38: case 60: case 61: case 62: case 124:
                    *((unsigned long long *)v25) = 4;
                    *((unsigned long *)&v25[16]) = v8;
                    *((unsigned long long *)&v25[24]) = 0;
                    *((char *)&v25[32]) = 6;
                    goto LABEL_141b246;
                case 37:
                    v33 = 5;
                    break;
                case 40:
                    v32 = 7;
                    break;
                case 41:
                    v32 = 8;
                    break;
                case 42: case 120:
LABEL_141b1bb:
                    v33 = 2;
                    v32 = 11;
                    break;
                case 43:
                    break;
                case 44:
                    v32 = 6;
                    break;
                case 45:
                    v33 = 1;
                    break;
                case 47:
                    v33 = 3;
                    break;
                case 94:
                    v33 = 4;
                    break;
                default:
                    *((unsigned long long *)v25) = 4;
                    *((unsigned long *)&v25[16]) = v8;
                    *((unsigned long long *)&v25[24]) = 0;
                    *((char *)&v25[32]) = 4;
LABEL_141b246:
                    v32 = 4;
                    break;
                }
                *((unsigned long long *)v26) = 1;
                *((unsigned long long *)&v26[8]) = v32;
                *((char *)&v26[16]) = v33;
                return v32;
            }
        }
    }
    v34->field_8 = 13;
    return v35;
}
