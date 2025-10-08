long long uu_stty::print_flags(struct_0 *a0, char a1)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    char *v2;  // [bp-0x78], Other Possible Types: unsigned long long
    int v3;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x68]
    char *v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    struct_0 *v7;  // [bp-0x48]
    int v8;  // [bp-0x40]
    struct_0 *v10;  // rax
    void* v11;  // r13
    char v12;  // r15b
    char v13;  // al

    v10 = a0;
    v11 = 0;
    while (true)
    {
LABEL_459161:
        v11 += 32;
        do
        {
            *((int128_t *)&v8) = (int128_t)v11[5124000];
            if ((char)v11[5124020])
            {
                v7 = v10;
                v13 = (int)v11[5124016].is_in(v10->field_70, (int)v11[5123992], (int)v11[5123996]);
                if ((int)v11[5123992])
                {
                    if ((((char)v11[5124021] ^ 1 | a1) & v13))
                        goto LABEL_459230;
                    goto LABEL_4591e0;
                }
                else if (!(a1 & 1) && !((char)v11[5124021] ^ v13))
                {
LABEL_4591e0:
                    v10 = v7;
                    if (v11 == 384)
                        break;
                    goto LABEL_459161;
                }
                else
                {
                    if (!v13)
                    {
                        v0 = &g_4e3858;
                        v1 = 1;
                        v2 = 8;
                        *((uint128_t *)&v3) = 0;
                        std::io::stdio::_print(&v0);
                    }
LABEL_459230:
                    v5 = &v8;
                    v6 = <&T as core::fmt::Display>::fmt;
                    v0 = &g_4e3838;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v5;
                    v3 = 1;
                    std::io::stdio::_print(&v0);
                    v12 = 1;
                    v10 = v7;
                    if (v11 == 384)
                        break;
                    goto LABEL_459161;
                }
            }
            v11 += 32;
        } while (v11 != 416);
        if ((v12 & 1))
        {
            v0 = &g_4e2ac0;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            v10 = std::io::stdio::_print(&v0);
        }
        return v10;
    }
}
