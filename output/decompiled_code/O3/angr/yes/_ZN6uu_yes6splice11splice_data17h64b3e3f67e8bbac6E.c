long long uu_yes::splice::splice_data::h64b3e3f67e8bbac6(unsigned long a0, unsigned long a1, unsigned int *a2)
{
    unsigned int v0;  // [sp-0xe8]
    unsigned int v1;  // [sp-0xe4]
    unsigned long long v2;  // [sp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xd4]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v7;  // [bp-0xc4]
    unsigned long long v8;  // [sp-0xc0]
    char v9;  // [bp-0xa8]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // 4096
    unsigned long long v18;  // 4096
    unsigned long long v19;  // rdi
    unsigned long long v21;  // rax
    unsigned long long v22;  // 4096
    unsigned long long v23;  // rbp
    unsigned int v24;  // eax
    unsigned long long v27;  // rdi

    nix::sys::stat::fstat::h261da0a4c5066a36(&v6, *(a2), a2);
    if (*((int *)&v6))
    {
        v11 = *((int *)&v7) * 0x100000000;
    }
    else if (!((short)*((int *)&v9) & 0x1000))
    {
        v15 = uucore::features::pipes::pipe::h945b5abbeef9d337(v12, v13, v14);
        if ((unsigned int)v15 == -1)
        {
            v11 = v15 & -0x100000000;
        }
        else
        {
            v0 = v15;
            v1 = v15 >> 32;
            if (a1)
            {
                v2 = a0;
                while (true)
                {
                    v2 = v2;
                    do
                    {
                        v6 = v2;
                        v8 = v22;
                        nix::fcntl::vmsplice::he32af0321251cce0(&v3, &v1, &v6, 1, 0);
                        if (*((int *)&v3))
                        {
                            v27 = *((int *)&v4);
                            goto LABEL_4a674a;
                        }
                        else
                        {
                            v23 = *((long long *)&v5);
                            v24 = uucore::features::pipes::splice_exact::h4a0363d3b870ed9a(&v0, a2, v23);
                            if (v24 != 134)
                            {
                                v27 = v24;
LABEL_4a674a:
                                v21 = core::ops::function::FnOnce::call_once::h1ddb13233e957593(v27);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::h6f32078f76624516(v1);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::h6f32078f76624516(v0);
                                return v21;
                            }
                        }
                        if (v8 < v23)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
                    } while (v8 != v23);
                }
            }
            else
            {
                while (true)
                ;
            }
        }
    }
    else if (a1)
    {
        v2 = a0;
        while (true)
        {
            do
            {
                v6 += v19;
                v8 = v18;
                nix::fcntl::vmsplice::h5549e771ed4850f9(&v3, a2, &v6, 1, 0);
                if (*((int *)&v3))
                {
                    v21 = core::ops::function::FnOnce::call_once::h1ddb13233e957593(*((int *)&v4));
                    return v21;
                }
                v19 = *((long long *)&v5);
                if (v8 < v19)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(); /* do not return */
            } while (v8 != v19);
            v16 = v2;
        }
    }
    else
    {
        while (true)
        ;
    }
    v21 = v11 | 2;
    return v21;
}
