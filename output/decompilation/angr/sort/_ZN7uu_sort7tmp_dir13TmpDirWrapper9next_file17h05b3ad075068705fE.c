long long uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0xa0]
    char v2;  // [bp-0x94]
    int v3;  // [sp-0x90]
    unsigned long long v4;  // [sp-0x80]
    int v5;  // [bp-0x78], Other Possible Types: char
    unsigned long v6;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x68]
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    char v17;  // dl

    if (a1->field_28 == 2)
    {
        v11 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h98cc8f29e16f1909(a1);
        if (v11)
        {
            *((unsigned long long *)&a0->field_4) = v11;
            *((unsigned long *)((char *)&a0->field_4 + 8)) = v12;
            *((unsigned long long *)&(&a0->field_0)[2]) = 0x8000000000000000;
            return a0;
        }
    }
    std::sync::mutex::Mutex$LT$T$GT$::lock::h2fdf4238f9db328b(&v5, a1->field_30 + 16);
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hbab597f68101a0a6(&v8, &a1->field_38);
    a1->field_38 = a1->field_38 + 1;
    if (a1->field_28 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(&g_601090); /* do not return */
    v14 = a1->field_18;
    v15 = a1->field_20;
    v7 = *((long long *)&v9);
    *((int128_t *)&v5) = *((int128_t *)&v8);
    std::path::Path::join::h2322a65c0d7509ac(&v0, v14, v15, &v5);
    std::fs::File::create::h360b3028bf6903a2(&v5, &v0);
    if (!(int)v5)
    {
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v4 = *((long long *)&v1);
        a0->field_0 = (int)(&v5)[4];
        v16 = (long long)(&v3)[8];
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        *((unsigned long long *)&a0->field_4) = v16;
        *((unsigned long long *)((char *)&a0->field_4 + 8)) = v4;
    }
    else
    {
        v5 = 4;
        v6 = v6;
        *((double *)&a0->field_4) = ::0x547370::alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&v5);
        *((char **)((char *)&a0->field_4 + 8)) = &g_600f08;
        *((unsigned long long *)&(&a0->field_0)[2]) = 0x8000000000000000;
        ::0x546100::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&v0);
    }
    ::0x546600::core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h1ece0fb60dffd106(::0x546e30::core::result::Result$LT$T$C$E$GT$::unwrap::he8ec3f841ca899b2(&v5, &g_601078), v17 & 1);
    return a0;
}
