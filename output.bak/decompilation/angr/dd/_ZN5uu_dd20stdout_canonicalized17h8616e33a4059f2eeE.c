long long uu_dd::stdout_canonicalized::h8616e33a4059f2ee(struct_0 *a0)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax

    std::fs::canonicalize::hc098601a0f17255d(&v0, "/dev/stdout", 11);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v5 = *((long long *)&v1);
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v0);
        return v5;
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v2, "/dev/stdout", 11);
    a0->field_10 = *((long long *)&v3);
    a0->field_0 = *((int128_t *)&v2);
    v5 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h6d990e1150a85915(&v0);
    return v5;
}
