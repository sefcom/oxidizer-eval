long long uu_mv::mv::h9592070d6961e61d(unsigned long long a0, unsigned int a1, struct_0 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    int v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    unsigned long long v8[6];  // rdi
    unsigned int v9;  // rcx
    unsigned int v10;  // r8
    unsigned int v11;  // r9
    unsigned long long v12;  // rax
    unsigned long long v15;  // r9

    uu_mv::parse_paths::haddbdd957f8f9a59(&v0, a0, a1, a2->field_32);
    if (a2->field_18 == 0x8000000000000000)
    {
        v8 = *((long long *)&v1);
        v12 = (*((long long *)&v2) == 2 ? uu_mv::handle_two_paths::hca9c7426a2e14ad8(v8[1], v8[2], v8[4], v8[5], a2) : uu_mv::handle_multiple_paths::h0189b8f1b89eda74(v8, *((long long *)&v2), a2, v9, v10, v11));
        ::0x4e6160::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he77260e6f2fa37b6(&v0);
        return v12;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, a2->field_20, a2->field_28);
    v4 = *((long long *)&v6);
    *((int128_t *)&v3) = *((int128_t *)&v5);
    v12 = uu_mv::move_files_into_dir::h2094580d118304f1(*((long long *)&v1), *((long long *)&v2), (long long)(&v3)[8], *((long long *)&v6), a2, v15);
    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v3);
    ::0x4e6160::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he77260e6f2fa37b6(&v0);
    return v12;
}
