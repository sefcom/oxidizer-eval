long long fish::env::environment_impl::EnvScopedImpl::create_export_array(unsigned long long a0[3])
{
    char v0;  // [bp-0x179]
    void* v1;  // [bp-0x178]
    int v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    void* v4;  // [bp-0x168]
    int v5;  // [bp-0x168]
    unsigned long long v6;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x158]
    void* v8;  // [bp-0x150]
    int v9;  // [bp-0x148], Other Possible Types: unsigned long long
    int v10;  // [bp-0x148], Other Possible Types: char, unsigned long
    int v11;  // [bp-0x148]
    char v12;  // [bp-0x140]
    int v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    unsigned long long v15;  // [bp-0x128]
    unsigned long long v16;  // [bp-0x120]
    int v17;  // [bp-0x118], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0x118]
    unsigned long long v19;  // [bp-0x110]
    char v20;  // [bp-0x108]
    char v21;  // [bp-0x108]
    char v22;  // [bp-0xf8]
    int v23;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v24;  // [bp-0xd0]
    unsigned long long v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xc0]
    int v27;  // [bp-0xb8]
    unsigned long long v28;  // [bp-0xb0]
    char v29;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long v30;  // [bp-0xa8]
    unsigned long long v31;  // [bp-0x98]
    unsigned long long v32;  // [bp-0x88]
    void* v33;  // [bp-0x80]
    void* v34;  // [bp-0x78]
    char v35;  // [bp-0x68]
    unsigned long long v36;  // [bp-0x58]
    char v37;  // [bp-0x48]
    unsigned long long v39;  // rax
    void* v40;  // rdx
    int v41;  // ymm0
    uint256_t v42;  // ymm0
    unsigned long long v43[3];  // rax
    void* v44;  // rbp
    uint256_t v45;  // ymm0
    uint256_t v46;  // ymm0
    int v47;  // xmm0
    char v48;  // al
    int v49;  // xmm0
    int v51;  // [bp-0x138], Other Possible Types: void*, unsigned long long

    if ((char)core::sync::atomic::atomic_load(&g_15a9740, 0))
    {
        v1 = 0;
        v3 = 1;
        v4 = 0;
        v10.to_flog_str(&g_15a9730);
        v17.into_iter(&v10);
        v1.spec_extend(&v17);
        v1.push(58, &g_14d6b60);
        v1.push(32, &g_14d6b60);
        v37.to_vec("create_export_array() recalcassertion failed: !is_forked_child()Locals should not be globalsUnknown scopeAttempt to pop last local scopeShould have exactly one element in PWDNode should contain key", 28);
        v17.into_iter(&v37);
        v1.spec_extend(&v17);
        v1.push(10, &g_14d6b60);
        fish::flog::flog_impl(v3, v4);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v3);
    }
    v39 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v2) = g_14bd810;
    *((uint128_t *)&v5) = g_14bd820;
    v7 = v39;
    v8 = v40;
    a0[3 + 2].get_exported(&(unsigned long long)v2);
    a0[3 + 1].get_exported(&(unsigned long long)v2);
    v0 = (char)v40 & 1;
    v26 = fish::env::environment_impl::uvars();
    v18.iter(v26 + 48);
    v31 = *((long long *)&v22);
    v42 = ((v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_14bd810) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | g_14bd820) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v17);
    memcpy(&v29, &v20, 16);
    *((int128_t *)&v27) = *((int128_t *)&v18);
    if ((char)v27.next())
    {
        v44 = v40;
        do
        {
            if (((char)v44[16] & 1))
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v18, v43[1], v43[2]);
                v25 = *((long long *)&v21);
                v45 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v18);
                memcpy(&v23, &v18, 16);
                v18.rustc_entry(&(unsigned long long)v2, &v23);
                if (v18 == 0x8000000000000000)
                {
                    v46 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v19);
                    memcpy(&v12, &v19, 16);
                    v9 = 0x8000000000000000;
                    v9 = v10;
                }
                else
                {
                    v15 = *((long long *)&v22);
                    v47 = *((int128_t *)&v18);
                    v46 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
                    *((int128_t *)&v13) = *((int128_t *)&v21);
                    v9 = v47;
                }
                v11 = v9;
                if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*((long long *)v44)) + 1, 0, (unsigned long long)(char)(v18 < 0x8000000000000000)))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20547353()
                v42 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)v44);
                v48 = (char)v44[16];
                *((int128_t *)&v17) = *((int128_t *)v44);
                v21 = v48;
                v11.or_insert(&v18);
            }
            v43 = (char)v27.next();
            v44 = v40;
        } while (v43);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v26, v0);
    v18.to_vec("P", 3);
    v29 = *((long long *)&v21);
    *((int128_t *)&v27) = *((int128_t *)&v18);
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v18, a0[1], a0[2]);
    v51 = *((long long *)&v21);
    memcpy(&v10, &v18, 16);
    v18.new_from_name("P", 3, &v10);
    v10.insert(&(unsigned long long)v2, &(char)v27, &v18);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v10);
    v32 = v6.with_capacity_in(8, 16, &g_14d6b78);
    v33 = v40;
    v34 = 0;
    v49 = (int128_t)v2;
    memcpy(&v15, &v7, 16);
    *((int128_t *)&v51) = (int128_t)v5;
    v9 = v49;
    v18.into_iter(&v9);
    v9.next(&v18);
    if (v10 != 0x8000000000000000)
    {
        do
        {
            v25 = v51;
            v23 = v9;
            v36 = v16;
            memcpy(&v35, &v14, 16);
            (char)v23.push(61);
            (char)v27.as_string(&v14);
            (char)v23.spec_extend(v28, v28 + v30 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v27);
            v32.push(fish::common::wcs2zstring(v24, v25), v40);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v23);
            core::ptr::drop_in_place<fish::env::var::EnvVar>(&v35);
            v9.next(&v18);
        } while (v10 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<std::collections::hash::map::IntoIter<widestring::utfstring::Utf32String,fish::env::var::EnvVar>>(&v18);
    v51 = 0;
    memcpy(&v9, &v32, 16);
    v21.new(&v9);
    v17 = 1;
    v19 = 1;
    return v17.new();
}
