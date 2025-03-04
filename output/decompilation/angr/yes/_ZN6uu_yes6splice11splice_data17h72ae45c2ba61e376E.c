long long uu_yes::splice::splice_data::h72ae45c2ba61e376(unsigned long a0, unsigned long a1, unsigned int *a2)
{
    unsigned int v0;  // [sp-0xe8]
    unsigned int v1;  // [sp-0xe4]
    unsigned long long v2;  // [sp-0xe0]
    char v3;  // [bp-0xd8]
    char v4;  // [bp-0xd4]
    char v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long
    char v7;  // [bp-0xc4]
    unsigned long long v8;  // [sp-0xc0]
    char v9;  // [bp-0xa8]
    unsigned long long v11;  // r15
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rdi
    unsigned long long v18;  // rax
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    unsigned long long v21;  // r14
    unsigned long long v22;  // rbp
    unsigned int v23;  // eax
    unsigned long long v25;  // rdi

    v11 = a0;
    nix::sys::stat::fstat::h5414de4d70a08ddb(&v6, *(a2));
    if (*((int *)&v6))
    {
        v12 = *((int *)&v7) * 0x100000000;
    }
    else if (!((short)*((int *)&v9) & 0x1000))
    {
        v13 = uucore::features::pipes::pipe::h14b45b9735c770a8();
        if ((unsigned int)v13 == -1)
        {
            v12 = v13 & 0xffffffff00000000;
        }
        else
        {
            v0 = v13;
            v1 = v13 >> 32;
            if (a1)
            {
                v2 = a0;
                while (true)
                {
                    v19 = v2;
                    v20 = a1;
                    do
                    {
                        v21 = v20;
                        v6 = v19;
                        v8 = v21;
                        nix::fcntl::vmsplice::hf0c74caef6c9626a(&v3, &v1, &v6, 1, 0);
                        if (*((int *)&v3))
                        {
                            v25 = *((int *)&v4);
                            goto LABEL_4a677a;
                        }
                        else
                        {
                            v22 = *((long long *)&v5);
                            v23 = uucore::features::pipes::splice_exact::hfc6bdd2da9251bd0(&v0, a2, v22);
                            if (v23 != 134)
                            {
                                v25 = v23;
LABEL_4a677a:
                                v18 = core::ops::function::FnOnce::call_once::h6e25e053844151e6(v25);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(v1);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hdc6e75f3ed259d90(v0);
                                return v18;
                            }
                        }
                        if (v21 < v22)
                            core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v22, v21, &g_509ae8); /* do not return */
                        v19 += v22;
                        v20 = v21 - v22;
                    } while (v21 != v22);
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
            v14 = a1;
            do
            {
                v15 = v14;
                v6 = v11;
                v8 = v15;
                nix::fcntl::vmsplice::hebd5ee864fb7652a(&v3, a2, &v6, 1, 0);
                if (*((int *)&v3))
                {
                    v18 = core::ops::function::FnOnce::call_once::h6e25e053844151e6(*((int *)&v4));
                    return v18;
                }
                v16 = *((long long *)&v5);
                if (v15 < v16)
                    core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(v16, v15, &g_509b00); /* do not return */
                v11 += v16;
                v14 = v15 - v16;
            } while (v15 != v16);
            v11 = v2;
        }
    }
    else
    {
        while (true)
        ;
    }
    v18 = v12 | 2;
    return v18;
}
