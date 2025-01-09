long long uu_yes::splice::splice_data::h72ae45c2ba61e376(unsigned long a0, unsigned long a1, unsigned int *a2)
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
    unsigned long long v12;  // rax
    unsigned long long v13;  // 4096
    unsigned long long v15;  // 4096
    unsigned long long v16;  // rdi
    unsigned long long v18;  // rax
    unsigned long long v19;  // 4096
    unsigned long long v20;  // rbp
    unsigned int v21;  // eax
    unsigned long long v24;  // rdi

    nix::sys::stat::fstat::h5414de4d70a08ddb(&v6, *(a2));
    if (*((int *)&v6))
    {
        v11 = *((int *)&v7) * 0x100000000;
    }
    else if (!((short)*((int *)&v9) & 0x1000))
    {
        v12 = uucore::features::pipes::pipe::h14b45b9735c770a8();
        if ((unsigned int)v12 == -1)
        {
            v11 = v12 & 0xffffffff00000000;
        }
        else
        {
            v0 = v12;
            v1 = v12 >> 32;
            if (a1)
            {
                v2 = a0;
                while (true)
                {
                    v2 = v2;
                    do
                    {
                        v6 = v2;
                        v8 = v19;
                        nix::fcntl::vmsplice::hf0c74caef6c9626a(&v3, &v1, &v6, 1, 0);
                        if (*((int *)&v3))
                        {
                            v24 = *((int *)&v4);
                            goto LABEL_4a677a;
                        }
                        else
                        {
                            v20 = *((long long *)&v5);
                            v21 = uucore::features::pipes::splice_exact::hfc6bdd2da9251bd0(&v0, a2, v20);
                            if (v21 != 134)
                            {
                                v24 = v21;
LABEL_4a677a:
                                v18 = core::ops::function::FnOnce::call_once::h6e25e053844151e6(v24);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90();
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90();
                                return v18;
                            }
                        }
                        if (v8 < v20)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v20, v8, &g_509ae8); /* do not return */
                        v2 = v6 + v20;
                        v19 = v8 - v20;
                    } while (v8 != v20);
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
                v6 += v16;
                v8 = v15;
                nix::fcntl::vmsplice::hebd5ee864fb7652a(&v3, a2, &v6, 1, 0);
                if (*((int *)&v3))
                {
                    v18 = core::ops::function::FnOnce::call_once::h6e25e053844151e6(*((int *)&v4));
                    return v18;
                }
                v16 = *((long long *)&v5);
                if (v8 < v16)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v16, v8, &g_509b00); /* do not return */
                v15 = v8 - v16;
            } while (v8 != v16);
            v13 = v2;
        }
    }
    else
    {
        while (true)
        ;
    }
    v18 = v11 | 2;
    return v18;
}
