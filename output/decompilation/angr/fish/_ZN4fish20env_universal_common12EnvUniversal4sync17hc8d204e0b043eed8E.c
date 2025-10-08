long long fish::env_universal_common::EnvUniversal::sync(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x1f9]
    void* v1;  // [bp-0x1f8]
    int v2;  // [bp-0x1f8]
    unsigned long long v3;  // [sp-0x1f0]
    void* v4;  // [bp-0x1e8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x1c8]
    unsigned long long v6;  // [bp-0x1c0]
    void* v7;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0x1b0]
    int v9;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v10;  // [bp-0x1a0]
    unsigned long long v11;  // [bp-0x198]
    int v12;  // [bp-0x188], Other Possible Types: char
    char v13;  // [bp-0x178]
    char v14;  // [bp-0x168]
    char v15;  // [bp-0x158]
    char v16;  // [bp-0x148]
    unsigned long v17;  // [bp-0x140]
    int v18;  // [bp-0x138]
    int v19;  // [bp-0x128], Other Possible Types: char
    int v20;  // [bp-0x118], Other Possible Types: char
    int v21;  // [bp-0x108]
    unsigned long v22;  // [bp-0xf8]
    int v23;  // [bp-0xf0], Other Possible Types: char
    char v24;  // [bp-0xe0], Other Possible Types: unsigned long
    char v25;  // [bp-0xd8]
    char v26;  // [bp-0xd0]
    char v27;  // [bp-0xc8]
    char v28;  // [bp-0xc0]
    char v29;  // [bp-0xb8]
    char v30;  // [bp-0xb0]
    int v31;  // [bp-0xa0]
    char v32;  // [bp-0x90]
    char v33;  // [bp-0x78]
    char v34;  // [bp-0x60]
    char v35;  // [bp-0x48]
    char v37;  // bpl
    int v38;  // xmm0
    int v39;  // xmm1

    if (!a1->field_10)
    {
        *((char *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 0x8000000000000000;
        return a0;
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
    {
        v1 = 0;
        v3 = 1;
        v4 = 0;
        v12.to_flog_str(&g_15a9790);
        v19.into_iter(&v12);
        v1.spec_extend(&v19);
        v1.push(58, &g_14d72e8);
        v1.push(32, &g_14d72e8);
        v32.to_vec("universal log syncuniversal log no modificationsuniversal log performing full syncuniversal log sync failed:3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:u", 18);
        v19.into_iter(&v32);
        v1.spec_extend(&v19);
        v1.push(10, &g_14d72e8);
        fish::flog::flog_impl(v3, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
    }
    if (*((long long *)&a1->padding_58[16]))
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v12.to_flog_str(&g_15a9790);
            v19.into_iter(&v12);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d7318);
            v1.push(32, &g_14d7318);
            v34.to_vec("universal log performing full syncuniversal log sync failed:3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", 34);
            v19.into_iter(&v34);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d7318);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
        fish::wutil::wrealpath(&v19, a1->field_8, a1->field_10);
        if ((char)(((0 ^ (long long)v19) & (0 ^ -((long long)v19))) >> 63))
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v9, a1->field_8, a1->field_10);
        }
        else
        {
            v11 = *((long long *)&v20);
            v9 = v19;
        }
        fish::fs::rewrite_via_temporary_file(&v19, v10, v11, a1);
        if (*((long long *)&v23) == 9223372036854775809)
        {
            v8 = (long long)v19;
            if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
            {
                v5 = 0;
                v6 = 1;
                v7 = 0;
                v1.to_flog_str(&g_15a9790);
                v12.into_iter(&v1);
                v5.spec_extend(&v12);
                v5.push(58, &g_14d7360);
                v5.push(32, &g_14d7360);
                v35.to_vec("universal log sync failed:3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync elided based on fast stat()universal log sync elided based on fstat()", 26);
                v12.into_iter(&v35);
                v5.spec_extend(&v12);
                v5.push(32, &g_14d7360);
                v12.spec_to_string(&v8);
                v4 = *((long long *)&v13);
                v2 = v12;
                v12.into_iter(&v1);
                v5.spec_extend(&v12);
                v5.push(10, &g_14d7360);
                fish::flog::flog_impl(v6, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v6);
            }
            *((char *)a0) = 0;
            *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            core::ptr::drop_in_place<std::io::error::Error>(&v8);
        }
        else
        {
            v18 = v31;
            memcpy(&v16, &v30, 16);
            memcpy(&v15, &v28, 16);
            memcpy(&v14, &v26, 16);
            memcpy(&v13, &v24, 16);
            v12 = v23;
            *((unsigned long *)&a1->field_b0) = v22;
            *((void*)&a1->field_a0) = v21;
            *((void*)&a1->field_90) = v20;
            *((void*)&a1->field_88) = v19;
            v37 = (char)(&v18)[8];
            *((char *)&a1->field_b0 + 8) = v37;
            (char *)&a1->field_48 + 8.clear();
            if ((long long)v12 == 0x8000000000000000)
            {
                *((char *)a0) = 1;
                *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            }
            else
            {
                v0 = (char)v18;
                if (v37 != (char)v18)
                {
                    v1 = 0;
                    core::panicking::assert_failed(0, &(char)v18, &v0, &v1, &g_14d7330); /* do not return */
                }
                else if (!((char)__CFADD__(v17, *((long long *)&a1->padding_78[8]))))
                {
                    *((unsigned long *)&a1->padding_78[8]) = v17 + *((long long *)&a1->padding_78[8]);
                    core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,fish::env::var::EnvVar>>(&(&a1->padding_18)[1]);
                    v38 = *((int128_t *)&v25);
                    v39 = *((int128_t *)&v27);
                    *((int128_t *)((char *)&a1->field_38 + 8)) = *((int128_t *)&v29);
                    *((void*)((char *)&a1->field_28 + 8)) = v39;
                    *((void*)&(&a1->padding_18)[1]) = v38;
                    *((unsigned long *)&a0[24]) = v24;
                    a0[8] = v23;
                    *((char *)a0) = 1;
                }
                else
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d7348); /* do not return */
                }
            }
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
        return a0;
    }
    else
    {
        (char)v5.load_from_path_narrow(a1);
        if ((char)core::sync::atomic::atomic_load(&g_15a97a0, 0))
        {
            v1 = 0;
            v3 = 1;
            v4 = 0;
            v12.to_flog_str(&g_15a9790);
            v19.into_iter(&v12);
            v1.spec_extend(&v19);
            v1.push(58, &g_14d7300);
            v1.push(32, &g_14d7300);
            v33.to_vec("universal log no modificationsuniversal log performing full syncuniversal log sync failed:3.0# This file contains fish universal variable definitions.\n# VERSION: universal log reading from fileFailed to load from universal variable file:universal log sync ", 30);
            v19.into_iter(&v33);
            v1.spec_extend(&v19);
            v1.push(10, &g_14d7300);
            fish::flog::flog_impl(v3, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
        }
        *((unsigned long *)&a0[24]) = v7;
        *((int128_t *)&a0[8]) = *((int128_t *)&v5);
        *((char *)a0) = 0;
        return a0;
    }
}
