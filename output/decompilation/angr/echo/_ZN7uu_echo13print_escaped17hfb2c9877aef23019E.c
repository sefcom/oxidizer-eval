long long uu_echo::print_escaped::hfb2c9877aef23019(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [sp-0x5b]
    char v1;  // [sp-0x5a]
    char v2;  // [sp-0x5a]
    char v3;  // [sp-0x59]
    void* v4;  // [sp-0x50]
    char v5;  // [bp-0x48]
    unsigned long v6;  // [sp-0x40]
    unsigned long long v7;  // [sp-0x38]
    void* v9;  // rcx
    char *v10;  // rax
    char v11;  // al
    char *v12;  // rax
    unsigned long long v13;  // rax
    char *v14;  // rax
    unsigned long long v15;  // 4099
    unsigned long long v16;  // rdi
    char *v17;  // rsi
    char v18;  // al
    unsigned long long v19;  // r13
    struct_0 *v20;  // rax
    char *v21;  // rsi
    char v22;  // dl
    unsigned long long v23;  // rax
    struct_0 *v24;  // rcx
    struct_0 *v25;  // rcx
    struct_0 *v26;  // rcx

    v6 = a1;
    v7 = a2 + a1;
    v9 = 0;
    while (true)
    {
        v4 = 0;
        if (!v9)
            v10 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&v6);
        if (!v10)
        {
            v20 = a0;
            *((unsigned short *)&v20->field_0) = 0;
            return v20;
        }
        v11 = *(v10);
        if (v1 != 92)
        {
            v1 = v11;
LABEL_4a4764:
            v16 = a3;
            v17 = &v1;
            goto LABEL_4a476f;
        }
        else
        {
            v12 = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(&v4, &v6));
            if (!(v12 && (v13 = (unsigned long long)*(v12), (v13 - 49 & 255) < 7)))
            {
                v14 = *((long long *)&v5);
                v15 = v4;
                v4 = 0;
                if (v15)
                {
                    if (!v14)
                        goto LABEL_4a47f0;
                }
                else
                {
                    v14 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&v6);
                    if (!v14)
                    {
LABEL_4a47f0:
                        v16 = a3;
                        v17 = "\\";
LABEL_4a476f:
                        v20 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(v16, v17, 1);
                        if (v20)
                        {
                            v25 = a0;
                            v25->field_8 = v20;
                            v25->field_0 = 1;
                            return v20;
                        }
                        goto LABEL_4a46f1;
                    }
                }
                v18 = *(v14);
                switch (v3)
                {
                case 48:
                    if (!((char)uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&v4, 1, 4305632) & 1))
                    {
                        v21 = &g_41b426;
                        break;
                    }
                    else
                    {
                        v0 = v22;
                        v21 = &v0;
                        break;
                    }
                case 92:
                    v21 = "\\";
                    break;
                case 97:
                    v21 = &g_41b41c;
                    break;
                case 98:
                    v21 = &g_41b41d;
                    break;
                case 99:
                    v26 = a0;
                    v26->padding_1[0] = 1;
                    v26->field_0 = 0;
                    return 0;
                case 101:
                    v21 = &g_41b41e;
                    break;
                case 102:
                    v21 = &g_41b41f;
                    break;
                case 110:
                    v21 = "\n";
                    break;
                case 114:
                    v21 = "\r";
                    break;
                case 116:
                    v21 = "\t";
                    break;
                case 118:
                    v21 = &g_41b423;
                    break;
                case 120:
                    v19 = 2;
                    v21 = "\\x";
                    if (((char)uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&v4, 2, 4305632) & 1))
                    {
                        v0 = v22;
                        v21 = &v0;
                        v19 = 1;
                        break;
                    }
                default:
                    v2 = 92;
                    v3 = v18;
                    v19 = 2;
                    v21 = &v1;
                    break;
                }
                v23 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(a3, v21, v19);
                if (v23)
                {
                    v24 = a0;
                    v24->field_8 = v23;
                    v20 = v23 & 0xffffffffffffff00 | 1;
                    v24->field_0 = 1;
                    return v20;
                }
LABEL_4a46f1:
                v9 = v4;
                v10 = *((long long *)&v5);
            }
            else if (((char)uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&v4, 0, v13 & 4294967295) & 1))
            {
                v1 = v22;
                goto LABEL_4a4764;
            }
            else
            {
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5060f0); /* do not return */
            }
        }
    }
}
