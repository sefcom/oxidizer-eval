void flealib::commandprocessor::CommandProcessor::set_email_params(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x140]
    unsigned long long v1[10];  // [bp-0x138]
    unsigned long long v2;  // [bp-0x130]
    int v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x118]
    int v5;  // [bp-0x108]
    int v6;  // [bp-0xf8]
    int v7;  // [bp-0xe8]
    char v8;  // [bp-0xd8]
    int v9;  // [bp-0xc8], Other Possible Types: char
    char v10;  // [bp-0xb8]
    int v11;  // [bp-0xa8]
    int v12;  // [bp-0x98]
    int v13;  // [bp-0x88]
    char v14;  // [bp-0x78]
    void* v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    char v17;  // [bp-0x50]
    unsigned short v18;  // [bp-0x20]
    unsigned long v20;  // r15
    unsigned long long v21;  // rsi
    unsigned long v22;  // r15
    unsigned long v23;  // r15
    unsigned long v24;  // r15
    unsigned long v25;  // r15
    unsigned long long v26;  // r8
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi

    v17.into_searcher(a2, a3);
    v15 = 0;
    v16 = a3;
    v18 = 1;
    v0.from_iter(&v15, &g_b08700);
    if (v2 == 5)
    {
        v9.to_vec(v1[0], v1[1]);
        v4 = *((long long *)&v10);
        v3 = v9;
        v20 = &a1->field_a8;
        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v20);
        *((unsigned long long *)(v20 + 16)) = v4;
        *((void*)v20) = v3;
        v21 = v2;
        if (v2 >= 2)
        {
            v9.to_vec(v1[2], v1[3]);
            v4 = *((long long *)&v10);
            v3 = v9;
            v22 = &(&a1->field_b8)[1];
            ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v22);
            *((unsigned long long *)(v22 + 16)) = v4;
            *((void*)v22) = v3;
            v21 = v2;
            if (v2 >= 3)
            {
                v9.to_vec(v1[4], v1[5]);
                v4 = *((long long *)&v10);
                v3 = v9;
                v23 = &(&a1->padding_0)[1];
                ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v23);
                *((unsigned long long *)(v23 + 16)) = v4;
                *((void*)v23) = v3;
                v21 = v2;
                if (v2 >= 4)
                {
                    v9.to_vec(v1[6], v1[7]);
                    v4 = *((long long *)&v10);
                    v3 = v9;
                    v24 = &a1->field_88;
                    ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v24);
                    *((unsigned long long *)(v24 + 16)) = v4;
                    *((void*)v24) = v3;
                    v21 = v2;
                    if (v2 >= 5)
                    {
                        v9.to_vec(v1[8], v1[9]);
                        v4 = *((long long *)&v10);
                        v3 = v9;
                        v25 = (char *)&a1->field_90 + 8;
                        ::0x76bb40::core::ptr::drop_in_place<alloc::string::String>(v25);
                        *((unsigned long long *)(v25 + 16)) = v4;
                        *((void*)v25) = v3;
                        confy::store(&v3, "flea_confCurrent directory: /root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rsFrame captured0.jpgCouldn't remove a file: Captured frame removedError (video couldn't be read or camera is not available): frame-Creating FleaCommand..Configuration error ", 9, 0, v26, &a1->padding_0[24]);
                        if ((int)v3 == 10)
                        {
                            v9.to_vec("Ok/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2);
LABEL_76da96:
                            a0->field_10 = *((long long *)&v10);
                            *((void*)&a0->field_0) = v9;
                        }
                        else
                        {
                            memcpy(&v14, &v8, 16);
                            v13 = v7;
                            v12 = v6;
                            v11 = v5;
                            memcpy(&v10, &v4, 16);
                            v9 = v3;
                            a0.spec_to_string(&v9);
                            core::ptr::drop_in_place<confy::ConfyError>(&v9);
                        }
                        ::0x76bda0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
                        return;
                    }
                    v27 = &g_b08760;
                    v28 = 4;
                }
                else
                {
                    v27 = &g_b08748;
                    v28 = 3;
                }
            }
            else
            {
                v27 = &g_b08730;
                v28 = 2;
            }
        }
        else
        {
            v27 = &g_b08718;
            v28 = 1;
        }
        core::panicking::panic_bounds_check(v28, v21, v27); /* do not return */
    }
    v9.to_vec("Wrong number of parametersOk/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 26);
    goto LABEL_76da96;
}
