long long uu_du::birth_u64::hb35adc6a5de571b6(unsigned long long a0)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v2;  // [sp-0x10]
    unsigned int v3;  // [sp-0x8]

    std::fs::Metadata::created::h8ccef99991753c93(&v0, a0);
    if (v3 == 0x3b9aca00)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::h5f799c8f7658c15d(&v0);
        return 0;
    }
    v2 = *((long long *)&v0);
    v3 = *((int *)&v1);
    std::time::SystemTime::duration_since::hd2a32b95d4b7e9ed(&v0, &v2, 0, 0);
    if (*((long long *)&v0))
        return 0;
    return 1;
}
