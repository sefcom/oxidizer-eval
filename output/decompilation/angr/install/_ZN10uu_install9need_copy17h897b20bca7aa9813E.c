long long uu_install::need_copy(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_0 *a5)
{
    unsigned int v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0x104]
    unsigned long long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xd8]
    char v6;  // [bp-0xd0]
    unsigned int v7;  // [bp-0xa8]
    unsigned int v8;  // [bp-0xa4]
    char v9;  // [bp-0xa0]
    char v10;  // [bp-0x90]
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    std::fs::metadata(&v4, a1, a2);
    if (*((int *)&v4) != 2)
    {
        v1 = v7;
        v3 = *((long long *)&v10);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v4);
        std::fs::metadata(&v4, a3, a4);
        if (*((int *)&v4) == 2)
            goto LABEL_4699dc;
        v0 = *((int *)&v9);
        v2 = *((long long *)&v10);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v4);
        if (a5->field_48 == 1)
        {
            v12 = a5->field_4c;
            v13 = v12;
            if (!(((unsigned int)v13 | v1 | v7) & 0xe00))
                goto LABEL_469a61;
        }
        else
        {
            v12 = 493;
            v13 = 493;
            if (!(((unsigned short)v1 | (unsigned short)v7) & 0xe00))
            {
LABEL_469a61:
                v13 = v12;
                if ((unsigned int)v13 == (v7 & 4095))
                {
                    v13 = v12;
                    if (!(v7 & 0xf000 ^ 0x8000) && !(v1 & 0xf000 ^ 0x8000))
                    {
                        v13 = v2;
                        if (v3 == v13)
                        {
                            if (a5->field_50 == 1)
                            {
                                v13 = v2;
                                if (a5->field_54 == v8)
                                    goto LABEL_469ab5;
                            }
                            else
                            {
LABEL_469ab5:
                                if ((a5->field_58 & 1))
                                {
                                    v13 = v0;
                                    if (a5->field_5c == (unsigned int)v13)
                                        goto LABEL_469af3;
                                }
                                else
                                {
                                    v13 = uucore::features::process::geteuid();
                                    if (v8 == (unsigned int)v13)
                                    {
                                        v13 = uucore::features::process::getegid();
                                        if (v0 == (unsigned int)v13)
                                        {
LABEL_469af3:
                                            core::str::converts::from_utf8(&v4, a1, a2);
                                            if ((v4 & 1))
                                                core::option::unwrap_failed(&g_502598); /* do not return */
                                            core::str::converts::from_utf8(&v4, a3, a4);
                                            if (*((int *)&v4) == 1)
                                                core::option::unwrap_failed(&g_502580); /* do not return */
                                            v13 = file_diff::diff(v5, *((long long *)&v6), v5, *((long long *)&v6));
                                            if ((char)v13)
                                            {
                                                a0->field_8 = 0;
                                                a0->field_0 = 0;
                                                return v13;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
LABEL_4699dc:
        v13 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v4);
    }
    a0->field_8 = 1;
    a0->field_0 = 0;
    return v13;
}
