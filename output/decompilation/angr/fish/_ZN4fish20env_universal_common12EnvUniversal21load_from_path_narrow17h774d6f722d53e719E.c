long long fish::env_universal_common::EnvUniversal::load_from_path_narrow(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x168], Other Possible Types: void*
    void* v1;  // [bp-0x168]
    unsigned long long v2;  // [bp-0x160]
    void* v3;  // [bp-0x158], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    void* v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    int v8;  // [bp-0x128], Other Possible Types: char
    char v9;  // [bp-0x118]
    int v10;  // [bp-0x108], Other Possible Types: char
    int v11;  // [bp-0xf8]
    int v12;  // [bp-0xe8]
    unsigned long v13;  // [bp-0xd8]
    int v14;  // [bp-0xd0], Other Possible Types: char
    unsigned long v15;  // [bp-0xc0]
    int v16;  // [bp-0xb8]
    int v17;  // [bp-0xa8]
    int v18;  // [bp-0x98]
    unsigned long v19;  // [bp-0x88]
    char v20;  // [bp-0x80]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x60]
    char v23;  // [bp-0x48]
    unsigned long v25;  // r14
    char v26;  // bpl

    v25 = &a1->field_88;
    if (!v25.eq(&g_9f9ad0))
    {
        fish::wutil::fileid::file_id_for_path_narrow(&v10, a1->field_18, *((long long *)&a1->field_20));
        if (!v10.eq(v25))
            goto LABEL_139fd39;
        if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
        {
            v0 = 0;
            v2 = 1;
            v3 = 0;
            v8.to_flog_str(&g_15a9790);
            v10.into_iter(&v8);
            v0.spec_extend(&v10);
            v0.push(58, &g_14d73f0);
            v0.push(32, &g_14d73f0);
            v21.to_vec("universal log sync elided based on fast stat()universal log sync elided based on fstat()", 46);
            v10.into_iter(&v21);
            v0.spec_extend(&v10);
            v0.push(10, &g_14d73f0);
            fish::flog::flog_impl(v2, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v2);
        }
    }
    else
    {
LABEL_139fd39:
        if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
        {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v8.to_flog_str(&g_15a9790);
            v10.into_iter(&v8);
            v1.spec_extend(&v10);
            v1.push(58, &g_14d73a8);
            v1.push(32, &g_14d73a8);
            v22.to_vec("universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", 31);
            v10.into_iter(&v22);
            v1.spec_extend(&v10);
            v1.push(10, &g_14d73a8);
            fish::flog::flog_impl(v2, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
        }
        fish::fs::lock_and_load(&v10, a1->field_8, a1->field_10);
        if (!((char)(((0 ^ *((long long *)&v14)) & (0 ^ -(*((long long *)&v14)))) >> 63)))
        {
            if (*((long long *)&v14) == 9223372036854775809)
            {
                v7 = (long long)v10;
                if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
                {
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    v1.to_flog_str(&g_15a9790);
                    v8.into_iter(&v1);
                    v4.spec_extend(&v8);
                    v4.push(58, &g_14d73d8);
                    v4.push(32, &g_14d73d8);
                    v23.to_vec("Failed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", 44);
                    v8.into_iter(&v23);
                    v4.spec_extend(&v8);
                    v4.push(32, &g_14d73d8);
                    v8.spec_to_string(&v7);
                    v3 = *((long long *)&v9);
                    v0 = v8;
                    v8.into_iter(&v1);
                    v4.spec_extend(&v8);
                    v4.push(10, &g_14d73d8);
                    fish::flog::flog_impl(v5, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
                }
                *((unsigned long long *)a0) = 0x8000000000000000;
                return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v7);
            }
            else if (!((char)__CFADD__(*((long long *)&a1->padding_58[40]), v19)))
            {
                v26 = v20;
                *((unsigned long *)&a1->padding_58[40]) = *((long long *)&a1->padding_58[40]) + v19;
                core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,fish::env::var::EnvVar>>(&(&a1->padding_24)[1]);
                *((void*)((char *)&a1->field_38 + 8)) = v18;
                *((void*)((char *)&a1->field_28 + 8)) = v17;
                *((void*)&(&a1->padding_24)[1]) = v16;
                *((char *)&a1->field_b0 + 8) = v26;
                *((unsigned long *)(v25 + 48)) = v13;
                *((void*)(v25 + 32)) = v12;
                *((void*)(v25 + 16)) = v11;
                *((void*)v25) = v10;
                *((unsigned long *)&a0[16]) = v15;
                *(a0) = v14;
                return v15;
            }
            else
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14d73c0); /* do not return */
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
