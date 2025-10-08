long long fish::input::<impl fish::reader::Reader>::mapping_execute_matching_or_generic(unsigned long long a0[2])
{
    void* v0;  // [bp-0x1f0]
    unsigned long long v1;  // [bp-0x1e8]
    void* v2;  // [bp-0x1e0]
    void* v3;  // [bp-0x1d8], Other Possible Types: unsigned long long
    int v4;  // [bp-0x1d8]
    unsigned long long v5;  // [bp-0x1d0]
    int v6;  // [bp-0x1c8], Other Possible Types: void*, char *
    unsigned long long v7;  // [bp-0x1c0]
    void* v8;  // [bp-0x1b8]
    unsigned long long v9;  // [bp-0x1a8]
    void* v10;  // [bp-0x1a0]
    unsigned long long v11;  // [bp-0x198]
    void* v12;  // [bp-0x190]
    unsigned long long v13[2];  // [bp-0x188]
    uint128_t v14;  // [bp-0x180]
    char v15;  // [bp-0x170]
    char v16;  // [bp-0x168]
    int v17;  // [bp-0x168]
    unsigned long long v18;  // [bp-0x160]
    char *v19;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x150]
    int v21;  // [bp-0x148]
    int v22;  // [bp-0x148]
    unsigned long v24;  // [bp-0x140]
    int v25;  // [bp-0x138], Other Possible Types: char
    int v26;  // [bp-0x128], Other Possible Types: char
    unsigned long long v27;  // [bp-0x118]
    int v28;  // [bp-0x108]
    char v29;  // [bp-0xf8]
    unsigned long long v30;  // [bp-0xe8]
    int v31;  // [bp-0xd8], Other Possible Types: char
    char *v32;  // [bp-0xc8], Other Possible Types: unsigned long long
    char *v33;  // [bp-0xc0]
    char *v34;  // [bp-0xb8]
    unsigned long long v35[2];  // [bp-0xb0]
    int v36;  // [bp-0xa0]
    int v37;  // [bp-0x90]
    char v38;  // [bp-0x80]
    int v39;  // [bp-0x70]
    char v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x50]
    char v42;  // [bp-0x48]
    unsigned long long v44;  // rbx
    int v46;  // xmm0
    char v47;  // dl

    v10 = 0;
    v11 = 8;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v13[0] = a0;
    v44 = fish::input::input_mappings();
    v35.find_mapping(&v10, (unsigned int)a0[1] + 472, v44 + 8);
    if ((char)(((0 ^ v35[0]) & (0 ^ -(v35[0]))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<fish::input::InputMapping>>(&v35);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v44, v47 & 1);
        v14 = 0;
        *((unsigned long long *)&v22) = v11;
        v24 = v12 * 48 + v11;
        if ((unsigned long long)v22.any())
        {
            v27 = *((long long *)&v15);
            memcpy(&v26, &v14, 16);
            memcpy(&v25, &v12, 16);
            *((int128_t *)&v21) = *((int128_t *)&v10);
            (unsigned long long)v22.consume();
            return a0[0].promote_interruptions_to_front();
        }
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v3 = 0;
            v5 = 1;
            v6 = 0;
            v35.to_flog_str(&g_15a99a0);
            (unsigned long long)v22.into_iter(&v35);
            v3.spec_extend(&(unsigned long long)v22);
            v3.push(58, &g_14dae68);
            v3.push(32, &g_14dae68);
            v42.to_vec("no generic found, ignoring char...event_storage should be empty", 34);
            (unsigned long long)v22.into_iter(&v42);
            v3.spec_extend(&(unsigned long long)v22);
            v3.push(10, &g_14dae68);
            fish::flog::flog_impl(v5, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v5);
        }
        (unsigned long long)v22.next(&v10);
        core::ptr::drop_in_place<fish::input_common::CharEvent>(&(unsigned long long)v22);
        v27 = *((long long *)&v15);
        memcpy(&v26, &v14, 16);
        memcpy(&v25, &v12, 16);
        *((int128_t *)&v22) = *((int128_t *)&v10);
        return (unsigned long long)(unsigned long long)v22.consume();
    }
    else
    {
        v30 = v41;
        memcpy(&v29, &v40, 16);
        v28 = v39;
        memcpy(&(char)v27, &v38, 16);
        v26 = v37;
        v25 = v36;
        *((unsigned long long [2])&v21) = v35;
        if ((char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v16.to_flog_str(&g_15a99a0);
            (char)v3.into_iter(&v16);
            v0.spec_extend(&(char)v3);
            v0.push(58, &g_14dae50);
            v0.push(32, &g_14dae50);
            v33 = &(char)v21;
            v34 = &v10;
            *((char ***)&v17) = &v33;
            v18 = <&T as core::fmt::Debug>::fmt;
            v19 = &v34;
            v20 = <&T as core::fmt::Debug>::fmt;
            v3 = &g_14dae30;
            v5 = 2;
            v8 = 0;
            v6 = &(unsigned long long)v17;
            v7 = 2;
            v31.map_or_else(&v3);
            v17 = v31;
            v19 = v32;
            v3.clone(&(unsigned long long)v17);
            v32 = v6;
            memcpy(&v31, &v3, 16);
            v3.into_iter(&v31);
            v0.spec_extend(&v3);
            core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v17);
            v0.push(10, &g_14dae50);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v9 = *((long long *)&v15);
        v46 = *((int128_t *)&v10);
        memcpy(&v8, &v14, 16);
        *((int128_t *)&v6) = *((int128_t *)&v12);
        v4 = v46;
        (unsigned long long)v4.consume();
        a0.mapping_execute(&(char)v21);
        core::ptr::drop_in_place<fish::input::InputMapping>(&(char)v21);
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v44, v47 & 1);
    }
}
