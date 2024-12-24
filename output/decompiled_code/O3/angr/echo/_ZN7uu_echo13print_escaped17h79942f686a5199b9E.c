long long uu_echo::print_escaped::h79942f686a5199b9(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [sp-0x5b]
    char v1;  // [sp-0x5a]
    char v2;  // [sp-0x59]
    void* v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned long v5;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x38]
    void* v8;  // rcx
    char *v9;  // rax
    char v10;  // al
    char *v11;  // rax
    char *v12;  // rax
    unsigned long long v13;  // 4099
    unsigned long long v14;  // rsi
    unsigned long long v15;  // 4096
    char v16;  // al
    unsigned long long v18;  // r13
    struct_0 *v19;  // rax
    unsigned long long v20;  // rsi
    char v21;  // dl
    struct_0 *v22;  // rax
    struct_0 *v23;  // rcx
    struct_0 *v24;  // rcx
    struct_0 *v25;  // rcx

    v5 = a1;
    v6 = a2 + a1;
    while (true)
    {
        v8 = 0;
        if (!0)
            v9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha6c306d05b4b422a(&v5);
        if (!v9)
        {
            v19 = a0;
            *((short *)&v19->field_0) = 0;
            return v19;
        }
        v10 = *(v9);
        if (v1 != 92)
        {
            v1 = v10;
LABEL_4a4cc4:
            v14 = &v1;
            goto LABEL_4a4ccf;
        }
        else
        {
            v11 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::h17ef566e7ef78bbd(&v3, &v5));
            if (!(v11 && *(v11) - 49 < 7))
            {
                v12 = *((long long *)&v4);
                v13 = v8;
                v8 = 0;
                if (v13)
                {
                    if (!v12)
                        goto LABEL_4a4d50;
                }
                else
                {
                    v12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha6c306d05b4b422a(&v5);
                    if (!v12)
                    {
LABEL_4a4d50:
                        v14 = "\\";
LABEL_4a4ccf:
                        v19 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(v15, v14, 1);
                        if (v19)
                        {
                            v24 = a0;
                            v24->field_8 = v19;
                            v24->field_0 = 1;
                            return v19;
                        }
                        goto LABEL_4a4c51;
                    }
                }
                v16 = *(v12);
                switch (v2)
                {
                case 48:
                    if (!((char)uu_echo::parse_backslash_number::h8778193964a4072e(&v3, 1) & 1))
                    {
                        v20 = &g_41b50e;
                        break;
                    }
                    else
                    {
                        v0 = v21;
                        v20 = &v0;
                        break;
                    }
                case 92:
                    v20 = "\\";
                    break;
                case 97:
                    v20 = &g_41b504;
                    break;
                case 98:
                    v20 = &g_41b505;
                    break;
                case 99:
                    v25 = a0;
                    v25->padding_1[0] = 1;
                    v25->field_0 = 0;
                    return 0;
                case 101:
                    v20 = &g_41b506;
                    break;
                case 102:
                    v20 = &g_41b507;
                    break;
                case 110:
                    v20 = "\n";
                    break;
                case 114:
                    v20 = "\r";
                    break;
                case 116:
                    v20 = "\t";
                    break;
                case 118:
                    v20 = &g_41b50b;
                    break;
                case 120:
                    v18 = 2;
                    v20 = "\\x";
                    if (((char)uu_echo::parse_backslash_number::h8778193964a4072e(&v3, 2) & 1))
                    {
                        v0 = v21;
                        v20 = &v0;
                        v18 = 1;
                        break;
                    }
                default:
                    v1 = 92;
                    v2 = v16;
                    v18 = 2;
                    v20 = &v1;
                    break;
                }
                v22 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, v20, v18);
                if (v22)
                {
                    v23 = a0;
                    v23->field_8 = v22;
                    v19 = v22 | -0x100 | 1;
                    v23->field_0 = 1;
                    return v19;
                }
LABEL_4a4c51:
                v9 = *((long long *)&v4);
            }
            else if (((char)uu_echo::parse_backslash_number::h8778193964a4072e(&v3, 0) & 1))
            {
                v1 = v21;
                goto LABEL_4a4cc4;
            }
            else
            {
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            }
        }
    }
}
