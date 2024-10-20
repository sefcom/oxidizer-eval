long long uu_cp::parse_path_args::h73abca936abe63e5(unsigned long long a0[7], struct_0 *a1, struct_3 *a2)
{
    unsigned long long v0;  // [sp-0xd0]
    void* v1;  // [sp-0xc8]
    unsigned long long v2;  // [sp-0xc0]
    unsigned long long *v3;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xb0]
    unsigned long v6;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x98]
    struct struct_1 **v8;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x88]
    void* v10;  // [sp-0x80]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x48]
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rcx
    struct_2 *v16;  // rax
    unsigned long long *v17;  // r15
    struct_4 *v18;  // r12
    struct_5 *v19;  // rbx
    unsigned long long *v20;  // rcx
    unsigned long long *v21;  // rsi
    unsigned long v23;  // r15
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rax
    unsigned long long *v27;  // r13
    void* v28;  // rbx
    unsigned long long v30;  // rdx
    unsigned long long v31[3];  // r12

    v14 = a1->field_10;
    if (!v14)
    {
        v16 = __rust_alloc(20, 1);
        if (!v16)
            goto LABEL_4b6e85;
        v16->field_0 = 134835818736588657362413574869681924461;
        v16->field_10 = 1684955506;
        a0[0] = 4;
        a0[1] = 20;
        a0[2] = v16;
        a0[3] = 20;
        v17 = a1->padding_8;
    }
    else
    {
        v15 = a2->field_18;
        if (v14 == 1 && v15 == 0x8000000000000000)
        {
            v17 = a1->padding_8;
            v3 = v17;
            v4 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
            v6 = &g_5552e0;
            v7 = 1;
            v10 = 0;
            v8 = &v3;
            v9 = 1;
            v18 = &v11;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v11, &v6);
            goto LABEL_4b6c83;
        }
        if (v14 >= 3 && a2->field_42 && v15 == 0x8000000000000000)
        {
            v17 = a1->padding_8;
            v3 = v17 + 6;
            v4 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
            v6 = &g_555308;
            v7 = 1;
            v10 = 0;
            v8 = &v3;
            v9 = 1;
            v18 = &v12;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v12, &v6);
LABEL_4b6c83:
            a0[3] = v18->field_10;
            *((uint128_t *)&a0[1]) = v18->field_0;
            a0[0] = 4;
            v19 = v17 + 1;
            do
            {
                v24 = v14;
                if (v19->field_0)
                    __rust_dealloc(v19->field_-8);
            } while ((v19 += 24, v25 = v24 - 1, v24 != 1));
        }
        else
        {
            if (v15 == 0x8000000000000000)
            {
                v14 -= 1;
                a1->field_10 = v14;
                v20 = a1->padding_8;
                v21 = 3 * v14;
                v0 = *((long long *)((char *)v20 + 0x8 * v21));
                if (v0 == 0x8000000000000000)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                v1 = *((long long *)(8 + (char *)v20 + 0x8 * v21));
                v2 = *((long long *)(16 + (char *)v20 + 0x8 * v21));
                if (a2->field_45)
                {
LABEL_4b6d94:
                    if (v14)
                    {
                        v27 = a1->padding_8;
                        v28 = 0;
                        do
                        {
                            std::path::Path::components::h4f3217acf0fc8653(&v6, *((long long *)(v27 + v28 + 8)), *((long long *)(v27 + v28 + 16)));
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v3, std::path::Components::as_path::h22183dd583c1f97a(&v6), v30);
                            v31 = v28 + v27;
                            if (v31[0])
                                __rust_dealloc(v31[1]);
                        } while ((v19 += 24, v25 = v24 - 1, v24 != 1));
                    }
                }
            }
            else
            {
                v23 = a2->field_28;
                if (!v23)
                {
                    v26 = 1;
                    goto LABEL_4b6d69;
                }
                if (v23 < 0)
                {
                    goto LABEL_4b6e85;
                }
                else
                {
                    v26 = __rust_alloc(v23, 1);
                    if (!v26)
                    {
LABEL_4b6e85:
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
LABEL_4b6d69:
                    v1 = v26;
                    memcpy(v1, a2->field_20, v23);
                    v2 = v23;
                    v0 = v23;
                    if (!(!a2->field_45))
                        goto LABEL_4b6d94;
                }
            }
            a0[3] = a1->field_10;
            *((int128_t *)&a0[1]) = *((int128_t *)&a1->field_0);
            a0[4] = v0;
            a0[5] = v1;
            a0[6] = v2;
            a0[0] = 13;
            return a0;
        }
    }
    if (a1->field_0)
    {
        __rust_dealloc(v17);
        return a0;
    }
    return a0;
}
