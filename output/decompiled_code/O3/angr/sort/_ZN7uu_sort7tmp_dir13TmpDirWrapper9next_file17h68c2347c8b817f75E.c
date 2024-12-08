long long uu_sort::tmp_dir::TmpDirWrapper::next_file::h68c2347c8b817f75(struct_1 *a0, struct_0 *a1, unsigned long long a2)
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
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    if (a1->field_28 == 2)
    {
        v11 = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h24002bdf8da23e82(a1);
        if (v11)
        {
            *((unsigned long long *)&a0->field_4) = v11;
            *((unsigned long *)((char *)&a0->field_4 + 8)) = v12;
            *((long long *)&(&a0->field_0)[2]) = 0x8000000000000000;
            return a0;
        }
    }
    std::sync::mutex::Mutex$LT$T$GT$::lock::hd04a44f325304c80(&v5, a1->field_30 + 16, a2);
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h6f8900e27980ca20(&v8, &a1->field_38);
    a1->field_38 = a1->field_38 + 1;
    if (a1->field_28 == 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v14 = a1->field_18;
    v15 = a1->field_20;
    v7 = *((long long *)&v9);
    *((int128_t *)&v5) = *((int128_t *)&v8);
    std::path::Path::join::h230784be82c4eb4f(&v0, v14, v15, &v5);
    std::fs::File::create::h68de36391ecbd4ff(&v5, &v0, v16);
    if (!(int)v5)
    {
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v4 = *((long long *)&v1);
        a0->field_0 = (int)(&v5)[4];
        v17 = (long long)(&v3)[8];
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        *((unsigned long long *)&a0->field_4) = v17;
        *((unsigned long long *)((char *)&a0->field_4 + 8)) = v4;
    }
    else
    {
        v5 = 4;
        v6 = v6;
        *((double *)&a0->field_4) = ::0x541b40::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(&v5);
        *((char **)((char *)&a0->field_4 + 8)) = &g_6001c8;
        *((long long *)&(&a0->field_0)[2]) = 0x8000000000000000;
        ::0x540ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h70d3f4b202dcaa13(&v0);
    }
    ::0x540fe0::core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$$LP$$RP$$GT$$GT$::h043a4a94454f766b(::0x541880::core::result::Result$LT$T$C$E$GT$::unwrap::h86d9f5ec62e64a4f(&v5, &g_600338), (char)v16 & 1);
    return a0;
}
