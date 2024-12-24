long long uu_ln::exec::h8ff60ab2639d4ab0(unsigned long long a0[6], unsigned long long a1, struct_0 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v5;  // r9
    unsigned long long v6;  // rax
    unsigned long long v8;  // r9
    unsigned long long v9;  // r12
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r9

    if (a2->field_18 != 0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a2->field_20, a2->field_28);
        uu_ln::link_files_in_dir::h47068928c36fa864(a0, a1, *((long long *)&v1), *((long long *)&v2), a2, v5);
        ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v0);
        return v6;
    }
    if (!a2->field_33)
    {
        if (a1 == 1)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, ".src/uu/ln/src/ln.rs", 1);
            uu_ln::link_files_in_dir::h47068928c36fa864(a0, 1, *((long long *)&v1), *((long long *)&v2), a2, v8);
            ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v0);
            return v6;
        }
        if (!a1)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        v9 = a1 - 1;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a0[1 + 3 * v9], a0[2 + 3 * v9]);
        if (!(a1 <= 2) || !(!(char)std::path::Path::is_dir::h9ac0db933706da51(*((long long *)&v1), *((long long *)&v2))))
        {
            v6 = uu_ln::link_files_in_dir::h47068928c36fa864(_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::habc59b41a153b00d(v9, a0, a1), v10, *((long long *)&v1), *((long long *)&v2), a2, v11);
            ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v0);
            return v6;
        }
        ::0x4b77a0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc15fd571fc19ad9b(&v0);
    }
    else if (a1 == 1)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h93c6f72339ab2600(&v0, a0);
        vvar_248{stack -56} = 9223372036854775812;
        alloc::boxed::Box$LT$T$GT$::new::h49e5b8dcbd25ac4e(&v0);
        return v6;
    }
    else if (a1 > 2)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h93c6f72339ab2600(&v0, a0 + 1);
        v3 = 9223372036854775812;
        v6 = alloc::boxed::Box$LT$T$GT$::new::h49e5b8dcbd25ac4e(&v0);
        return v6;
    }
    else if (!a1)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    v6 = uu_ln::link::h179035ee2d871a71(a0[1], a0[2], a0[4], a0[5], a2);
    return v6;
}
