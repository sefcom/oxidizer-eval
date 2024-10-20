long long uu_env::EnvAppData::process_all_string_arguments::hc7a625da8685ef99(unsigned long long a0[3], struct_1 *a1, unsigned long long a2[3])
{
    unsigned long long v0[3];  // [sp-0x88], Other Possible Types: void*
    char v1;  // [bp-0x80]
    char v2;  // [bp-0x78]
    unsigned long long v3;  // [sp-0x70]
    void* v4;  // [sp-0x68]
    unsigned long long *v5;  // [sp-0x60]
    unsigned long long *v6;  // [sp-0x58]
    void* v7;  // [sp-0x50], Other Possible Types: unsigned long long *, unsigned long long
    void* v8;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // rax
    unsigned long long v11;  // r14
    void* v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long v17;  // rcx
    unsigned long long *v18;  // rax
    unsigned long long *v19;  // rdi
    unsigned long long *v20;  // rcx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx
    unsigned long long v23[3];  // r12
    unsigned long long *v24;  // rbx
    struct_0 *v25;  // r14
    unsigned long long *v26;  // rbx

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v10 = a2[2];
    if (v10)
    {
        v11 = a2[1];
        v12 = 0;
        do
        {
            v0 = 0;
            uu_env::check_and_handle_string_args::h70812104130fb4bc(&v1, *((long long *)(8 + v11 + (char *)v12)), *((long long *)(16 + v11 + (char *)v12)), "--split-string", 14, &v4);
            v13 = *((long long *)&v1);
            if (v13)
            {
LABEL_49ba5b:
                v22 = *((long long *)&v2);
                v23 = a0;
                v23[1] = v13;
                v23[2] = v22;
                v23[0] = 0x8000000000000000;
                v24 = v6;
                if (v24)
                {
                    v25 = v5 + 1;
                    do
                    {
                        v26 = v24;
                        if (v25->field_0)
                            __rust_dealloc(v25->field_-8);
                    } while ((v12 += 24, (v10 << 3) + (v10 << 4) != v12));
                }
                if (!v4)
                    return v23;
                __rust_dealloc(v5);
            }
            if (v2)
            {
LABEL_49b8ce:
                *((char *)&a1->field_0 + 1) = 1;
            }
            else
            {
                v0 = 0;
                uu_env::check_and_handle_string_args::h70812104130fb4bc(&v1, *((long long *)(8 + v11 + (char *)v12)), *((long long *)(16 + v11 + (char *)v12)), "-S", 2, &v4);
                v13 = *((long long *)&v1);
                if (!(!v13))
                    goto LABEL_49ba5b;
                if (!(!v2))
                    goto LABEL_49b8ce;
                v0 = 0;
                uu_env::check_and_handle_string_args::h70812104130fb4bc(&v1, *((long long *)(8 + v11 + (char *)v12)), *((long long *)(16 + v11 + (char *)v12)), "-vSargv0:     executing: ", 3, &v4);
                v13 = *((long long *)&v1);
                if (!(!v13))
                    goto LABEL_49ba5b;
                if (v2)
                {
                    a1->field_0 = 257;
                    continue;
                }
                v0[0] = a2;
                uu_env::check_and_handle_string_args::h70812104130fb4bc(&v1, *((long long *)(8 + v11 + (char *)v12)), *((long long *)(16 + v11 + (char *)v12)), "-vvSAuto", 4, &v4);
                v13 = *((long long *)&v1);
                if (!(!v13))
                    goto LABEL_49ba5b;
                if (v2)
                {
                    a1->field_0 = 257;
                    a1->field_2 = 0;
                    continue;
                }
                v14 = *((long long *)(8 + v11 + (char *)v12));
                v15 = *((long long *)(16 + v11 + (char *)v12));
                v3 = v15;
                if (!v15)
                {
                    v16 = 1;
                    v8 = v8;
LABEL_49b9d7:
                    v8 = v16;
                    memcpy(v8, v8, v17);
                    v7 = v6;
                    if (v7 == v4)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::haafb8c0485191e0e(&v4);
                    v18 = v5;
                    v19 = v7;
                    v20 = v19 * 3;
                    v21 = v3;
                    *((unsigned long long *)((char *)v18 + 0x8 * v20)) = v21;
                    *((void* *)(8 + (char *)v18 + 0x8 * v20)) = v8;
                    *((unsigned long long *)(16 + (char *)v18 + 0x8 * v20)) = v21;
                    v6 = (char *)v19 + 1;
                }
                else
                {
                    v8 = v14;
                    if (v15 < 0)
                    {
                        v7 = 0;
                    }
                    else
                    {
                        v7 = 1;
                        v16 = __rust_alloc(v15, 1);
                        if (v16)
                        {
                            v8 = v8;
                            v17 = v3;
                            goto LABEL_49b9d7;
                        }
                    }
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                }
            }
        } while ((v12 += 24, (v10 << 3) + (v10 << 4) != v12));
    }
    v23 = a0;
    v23[2] = v6;
    v23[0] = v4;
    v23[1] = v5;
    return v23;
}
