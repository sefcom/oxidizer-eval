void fish::threads::spawn(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x258]
    unsigned long long v1;  // [bp-0x250]
    void* v2;  // [bp-0x248]
    unsigned int v3;  // [bp-0x240]
    unsigned int v4;  // [bp-0x23c]
    int v5;  // [bp-0x238], Other Possible Types: void*, unsigned long long
    int v6;  // [bp-0x238]
    int v7;  // [bp-0x238]
    unsigned long long v8;  // [bp-0x230]
    int v9;  // [bp-0x228]
    void* v10;  // [bp-0x228], Other Possible Types: unsigned long long
    int v11;  // [bp-0x220]
    int v12;  // [bp-0x218]
    char v13;  // [bp-0x210]
    uint128_t v14;  // [bp-0x208]
    uint128_t v15;  // [bp-0x1f8]
    uint128_t v16;  // [bp-0x1e8]
    uint128_t v17;  // [bp-0x1d8]
    uint128_t v18;  // [bp-0x1c8]
    char v19;  // [bp-0x1b8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x1a8]
    char v21;  // [bp-0x1a0], Other Possible Types: unsigned long
    unsigned long long v22;  // [bp-0x198]
    unsigned long long v23;  // [bp-0x190]
    unsigned long long v24;  // [bp-0x188]
    unsigned long long v25;  // [bp-0x180]
    int v26;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x170]
    int v28;  // [bp-0x168], Other Possible Types: unsigned long long
    int v29;  // [bp-0x160]
    char v30;  // [bp-0x158]
    char v31;  // [bp-0x148]
    uint128_t v32;  // [bp-0x138]
    char v33;  // [bp-0x128]
    uint128_t v34;  // [bp-0x118]
    char v35;  // [bp-0x108]
    char v36;  // [bp-0xf0]
    char v37;  // [bp-0xd8]
    char v38;  // [bp-0xc0]
    char v39;  // [bp-0xa8]
    char v40;  // [bp-0x98]
    int v42;  // xmm0
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx

    v24 = a0;
    v25 = a1;
    sigfillset(&v39);
    sigdelset(&v39, 4);
    sigdelset(&v39, 8);
    sigdelset(&v39, 7);
    sigdelset(&v39, 11);
    sigdelset(&v39, 19);
    sigdelset(&v39, 9);
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    *((uint128_t *)&v12) = 0;
    *((uint128_t *)&v9) = 0;
    *((uint128_t *)&v5) = 0;
    v3 = (unsigned int)pthread_sigmask(0, &v39, &(char)v5);
    if (v3)
    {
        v26 = &g_14e2e88;
        v27 = 1;
        v28 = 8;
        *((uint128_t *)&v29) = 0;
        core::panicking::assert_failed(0, &v3, &g_550cf8, &v26, &g_14e2ef0); /* do not return */
    }
    memcpy(&v35, &v18, 16);
    v34 = 0;
    memcpy(&v33, &v16, 16);
    v32 = 0;
    v42 = (int128_t)v5;
    memcpy(&v31, &v14, 16);
    memcpy(&v30, &v12, 16);
    *((int128_t *)&v28) = (int128_t)v9;
    v26 = v42;
    v10 = 0x8000000000000000;
    v5 = 0;
    v13 = 0;
    v21.spawn_unchecked(&v5, a0, a1);
    if (v21)
    {
        v20 = v23;
        memcpy(&v19, &v21, 16);
        v43 = std::thread::local::LocalKey<T>::with();
        if ((char)core::sync::atomic::atomic_load(&g_15a9920, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v39.to_flog_str(&g_15a9910);
            v5.into_iter(&v39);
            v0.spec_extend(&v5);
            v0.push(58, &g_14e2ea8);
            v0.push(32, &g_14e2ea8);
            v36.to_vec("rust threadspawnedThreadPoolmin_threadsmax_threadsenqueuing work item (count is notifying thread pthread spawned got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n______________________________________", 11);
            v5.into_iter(&v36);
            v0.spec_extend(&v5);
            v0.push(32, &g_14e2ea8);
            v44 = core::fmt::num::imp::<impl usize>::_fmt(v43, &v5, 20);
            v37.to_vec(v44, v45);
            v5.into_iter(&v37);
            v0.spec_extend(&v5);
            v0.push(32, &g_14e2ea8);
            v38.to_vec("spawnedThreadPoolmin_threadsmax_threadsenqueuing work item (count is notifying thread pthread spawned got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n_________________________________________________", 7);
            v5.into_iter(&v38);
            v0.spec_extend(&v5);
            v0.push(10, &g_14e2ea8);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v10 = v23;
        *((int128_t *)&v6) = *((int128_t *)&v21);
        core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v5);
    }
    else
    {
        v19 = v22;
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v5.to_arg(&v19);
        memcpy(&v40, &v10, 16);
        memcpy(&v39, &v5, 16);
        fish_printf::printf_impl::sprintf_locale(&v5, &v0, "rust thread spawn failure: %s\nFailed to restore thread signal mask!", 30, &v39, 1);
        v5.unwrap(&g_14e2ec0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v39);
        v10 = v2;
        *((int128_t *)&v7) = *((int128_t *)&v0);
        fish::wutil::wwrite_to_fd(v8, v2, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
        core::ptr::drop_in_place<std::io::error::Error>(&v19);
    }
    v4 = (unsigned int)pthread_sigmask(2, &(char)v26, 0);
    if (v4)
    {
        v5 = &g_14e2e98;
        v8 = 1;
        v10 = 8;
        *((uint128_t *)&v11) = 0;
        core::panicking::assert_failed(0, &v4, &g_550cf8, &v5, &g_14e2ed8); /* do not return */
    }
    return;
}
