long long uu_ln::exec::h2656b7f7ed388dfd(unsigned long long a0[6], unsigned long long a1, struct_0 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v5;  // r12
    unsigned long long v6;  // r9
    unsigned long long v7;  // rax
    unsigned long v8;  // cc_ndep
    unsigned long long v10;  // r9
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r9

    if (a2->field_18 != 0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a2->field_20, a2->field_28);
        uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(a0, a1, *((long long *)&v1), *((long long *)&v2), a2, v6);
        ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v0);
        return v7;
    }
    if (!a2->field_33)
    {
        v5 = a1 - 1;
        if (a1 == 1)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, ".src/uu/ln/src/ln.rs", 1);
            uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(a0, 1, *((long long *)&v1), *((long long *)&v2), a2, v10);
            ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v0);
            return v7;
        }
        if ((char)amd64g_calculate_condition(2, 8, a1, 1, v8))
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a0[1 + 3 * v5], a0[2 + 3 * v5]);
        if (!(a1 <= 2) || !(!(char)std::path::Path::is_dir::h9ac0db933706da51(*((long long *)&v1), *((long long *)&v2))))
        {
            v7 = uu_ln::link_files_in_dir::h0d7f4d99648ce3c4(_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hee0d4964d376204f(v5, a0, a1), v11, *((long long *)&v1), *((long long *)&v2), a2, v12);
            ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v0);
            return v7;
        }
        ::0x4b7ac0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&v0);
    }
    else if (a1 == 1)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&v0, a0);
        vvar_250{stack -56} = 9223372036854775812;
        alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v0);
        return v7;
    }
    else if (a1 > 2)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbf396db49ef6ba51(&v0, a0 + 1);
        v3 = 9223372036854775812;
        v7 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&v0);
        return v7;
    }
    else if (!a1)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    v7 = uu_ln::link::h8c92ebae2dccde8f(a0[1], a0[2], a0[4], a0[5], a2);
    return v7;
}
