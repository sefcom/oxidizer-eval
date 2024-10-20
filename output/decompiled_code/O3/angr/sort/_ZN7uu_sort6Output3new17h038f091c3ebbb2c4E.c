long long uu_sort::Output::new::h038f091c3ebbb2c4(struct_0 *a0, void* a1, unsigned long a2)
{
    void* v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    unsigned int v2;  // [bp-0x80]
    char v3;  // [sp-0x7f]
    char v4;  // [bp-0x7c], Other Possible Types: unsigned short
    unsigned long long v5;  // [sp-0x78]
    char v6;  // [bp-0x70]
    char v7;  // [bp-0x6c]
    unsigned long v8;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0x60], Other Possible Types: unsigned long long
    void* v10;  // [sp-0x58]
    unsigned long v11;  // [sp-0x50], Other Possible Types: unsigned long long
    char v12;  // [bp-0x40]
    unsigned long long v15;  // r13
    unsigned int v16;  // ebp
    unsigned long long v17;  // r12
    unsigned long long v18;  // r12
    uint128_t v19[4];  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2

    if (a1)
    {
        v1 = 0x1b600000000;
        v2 = 0;
        v4 = 0;
        v3 = 1;
        v4 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v6, &v1, a1, a2);
        if (*((int *)&v6))
        {
            v5 = v8;
            if (!a2)
            {
                v17 = 1;
                goto LABEL_4bfb01;
            }
            else
            {
                if (a2 < 0)
                {
                    v0 = 0;
                }
                else
                {
                    v0 = 1;
                    v17 = __rust_alloc(a2, 1);
                    if (v17)
                    {
LABEL_4bfb01:
                        memcpy(v10, a1, a2);
                        v6 = 1;
                        v8 = v5;
                        v9 = a2;
                        v10 = v17;
                        v11 = a2;
                        v19 = __rust_alloc(64, 8);
                        if (v19)
                        {
                            v20 = *((int128_t *)&v6);
                            v21 = *((int128_t *)&v9);
                            v22 = *((int128_t *)&v11);
                            v19[3] = *((int128_t *)&v12);
                            *((void*)&v19[2]) = v22;
                            *((void*)&v19[1]) = v21;
                            *((void*)&v19[0]) = v20;
                            a0->field_8 = v19;
                            a0->field_10 = &anon.d7f70ae2e91d4deb3ee5c65537f9ec21.36.llvm.14646808445695166917;
                            a0->field_0 = 9223372036854775809;
                            return a0;
                        }
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    }
                }
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
        }
        else
        {
            v16 = *((int *)&v7);
            if (!a2)
            {
                v18 = 1;
            }
            else if (a2 < 0)
            {
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            else
            {
                v18 = __rust_alloc(a2, 1);
                if (!v18)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            }
            memcpy(v18, a1, a2);
        }
    }
    a0->field_0 = v15;
    a0->field_8 = v18;
    a0->field_10 = a2;
    a0->field_18 = v16;
    return a0;
}
