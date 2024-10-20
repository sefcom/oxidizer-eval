long long uu_yes::exec::hf6b85bfc7646a62d(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x208]
    unsigned int v1;  // [sp-0xe8]
    unsigned int v2;  // [sp-0xe4]
    struct_0 *v3;  // [sp-0xd8]
    unsigned int v4;  // [sp-0xcc]
    unsigned long v5;  // [sp-0xc8], Other Possible Types: unsigned long long
    stat v6;  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0xb8]
    char v8;  // [bp-0xa8]
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdx
    struct_0 *v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // 4096
    unsigned long long v16;  // 4096
    unsigned long long v17;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // 4096
    unsigned long long v22;  // 4096
    unsigned long long v23;  // rax
    unsigned long long v24;  // r12
    unsigned long long v25;  // rax
    unsigned int v28;  // ecx
    unsigned long long v29;  // rcx
    void* v30;  // r15

    v5 = std::io::stdio::stdout::h077da66234850927();
    v12 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v5, v10, v11);
    v3 = v12;
    if (signal(13) == -1)
    {
        v13 = nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
        goto LABEL_47b8c4;
    }
    v4 = 1;
    if (fstat(1, &v6) == -1)
    {
LABEL_47b886:
        v14 = nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
        goto LABEL_47b894;
    }
    if (!((short)*((int *)&v8) & 0x1000))
    {
        if (pipe(&v6) == -1)
            goto LABEL_47b886;
        v14 = v1 >> 32;
        if (v1 == -1)
        {
LABEL_47b894:
            v20 = v14 * 0x100000000 | 2;
            if (!v20)
                goto LABEL_47b93f;
            else
                goto LABEL_47b8a5;
        }
        else
        {
            v1 = v6;
            v2 = v14;
            if (a1)
            {
                goto LABEL_47b7f7;
            }
            else
            {
                while (true)
                ;
            }
        }
    }
    else if (!a1)
    {
        while (true)
        ;
    }
    while (true)
    {
LABEL_47b8c4:
        do
        {
            *((unsigned long long *)&v6.st_mode) = v15;
            *((unsigned long long *)&v6.st_ino) = v16;
            v17 = vmsplice(1, &v6, 1, 0);
            if (v17 == -1)
            {
                v13 = nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
                if ((v13 & 255) > 38)
                {
                    v20 = v13 * 0x100000000 | 2;
                    v3->field_c = v3->field_c - 1;
                    if (vvar_525 != 1)
                        return v20;
                    goto LABEL_47b96d;
                }
                else
                {
                    v0 = 0x4000400200;
                    while (true)
                    {
LABEL_47b7f7:
                        do
                        {
                            *((unsigned long long *)&v6.st_mode) = v22;
                            *((unsigned long long *)&v6.st_ino) = v21;
                            v23 = vmsplice((unsigned int)_$LT$std..sys..pal..unix..fd..FileDesc$u20$as$u20$std..os..fd..owned..AsFd$GT$::as_fd::h40ef9e86c7e36c4b(&v2), &v6, 1, 0);
                            if (v23 == -1)
                            {
                                v25 = nix::errno::consts::from_i32::hb3bc9b2c0830196d(*(__errno_location()));
                                if (!((v25 & 255 & 255) <= 38))
                                    goto LABEL_47b9db;
                                v29 = v25 & 4294967295;
LABEL_47b9c6:
                                v0 = 0x4000400200;
                                if (((char)(*((char *)&v0 + ((v29 & 63) >> 3)) >> (char)(v29 & 63 & 7)) & 1))
                                {
                                    v30 = 0;
                                    goto LABEL_47b9e6;
                                }
LABEL_47b9db:
                                v30 = v25 * 0x100000000 | 2;
LABEL_47b9e6:
                                close(v2);
                                close(v1);
                                v20 = v30;
                                if (v20)
                                {
LABEL_47b8a5:
                                    v3->field_c = v3->field_c - 1;
                                    if (vvar_529 != 1)
                                        return v20;
                                    goto LABEL_47b96d;
                                }
                                else
                                {
LABEL_47b93f:
                                    do
                                    {
                                        v20 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v3, a0, a1);
                                    } while (!v20);
                                    v12 = v3;
                                    v12->field_c = vvar_531 - 1;
                                    if (vvar_531 != 1)
                                        return v20;
                                    goto LABEL_47b96d;
                                }
                            }
                            v24 = v23;
                            v25 = uucore::features::pipes::splice_exact::h8e9932d7331bf73e(&v1, &v4, v23);
                            if ((char)v25 != 134)
                            {
                                v28 = v25;
                                if (!(v28 <= 38))
                                    goto LABEL_47b9db;
                                v29 = v28;
                                goto LABEL_47b9c6;
                            }
                            if (v7 < v24)
                                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                        } while (v7 != v24);
                    }
                }
            }
            if (v7 < v17)
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
        } while (v7 != v17);
    }
LABEL_47b96d:
    v12->field_0 = 0;
    v12->field_8 = 0;
    if (CasCmpNE(v12->field_8, v12->field_8))
        goto LABEL_0x47b976;
    if (v12->field_8 == 2)
        goto LABEL_0x47b99c;
    goto LABEL_0x47b97e;
}
