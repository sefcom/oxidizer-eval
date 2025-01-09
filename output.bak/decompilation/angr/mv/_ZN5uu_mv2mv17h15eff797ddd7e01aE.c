long long uu_mv::mv::h15eff797ddd7e01a(unsigned long long a0, unsigned int a1, struct_0 *a2)
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    int v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    struct_1 *v8;  // rdi
    unsigned long long v9;  // rax

    uu_mv::parse_paths::hd84bd62365a1b7cc(&v0, a0, a1, a2->field_32);
    if (a2->field_18 == 0x8000000000000000)
    {
        v8 = *((long long *)&v1);
        v9 = (*((long long *)&v2) == 2 ? uu_mv::handle_two_paths::hbd0a81168087f696(v8->field_8, v8->field_10, v8->field_20, v8->field_28, a2) : uu_mv::handle_multiple_paths::h86c7b11f84ad2502(v8, *((long long *)&v2), a2));
        ::0x4e6d80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&v0);
        return v9;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, a2->field_20, a2->field_28);
    v4 = *((long long *)&v6);
    *((int128_t *)&v3) = *((int128_t *)&v5);
    v9 = uu_mv::move_files_into_dir::hea74a81b456dd214(*((long long *)&v1), *((long long *)&v2), (long long)(&v3)[8], *((long long *)&v6), a2);
    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36();
    ::0x4e6d80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&v0);
    return v9;
}
