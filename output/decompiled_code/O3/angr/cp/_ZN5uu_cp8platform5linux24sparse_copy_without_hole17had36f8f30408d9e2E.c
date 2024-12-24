long long uu_cp::platform::linux::sparse_copy_without_hole::had36f8f30408d9e2(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0x13c]
    unsigned int v1;  // [sp-0x138]
    unsigned int v2;  // [sp-0x134]
    void* v3;  // [sp-0x130]
    unsigned long long v4;  // [sp-0x128]
    char v5;  // [bp-0x120]
    char v10;  // [bp-0xe8]
    char v11;  // [bp-0xe4]
    char v12;  // [bp-0xe0]
    char v15;  // [bp-0x98]
    unsigned long long v17;  // r13
    unsigned long long v18;  // r14

    std::fs::File::open::heaf45c19ff88c58d(&v10, a0, a1);
    if (*((int *)&v10))
    {
        v17 = *((long long *)&v12);
        return v17;
    }
    v0 = *((int *)&v11);
    std::fs::File::create::h0ca0a1fa85a158e4(&v10, a2, a3);
    if (*((int *)&v10))
    {
        v17 = *((long long *)&v12);
        goto LABEL_51287e;
    }
    v1 = *((int *)&v11);
    std::fs::File::metadata::he899a18112e6f19e(&v10, &v0);
    if (*((int *)&v10) == 2)
    {
        v17 = *((long long *)&v12);
        goto LABEL_512877;
    }
    v18 = *((long long *)&v15);
    core::result::Result$LT$T$C$E$GT$::unwrap::h70e0dc3939a3f583(v18 >> 63, &g_5b5dd0);
    if (ftruncate(v1, v18) < 0)
    {
        v17 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
LABEL_512877:
        ::0x511f00::core::ptr::drop_in_place$LT$std..fs..File$GT$::h41fb0b354a80bd06(v1);
LABEL_51287e:
        ::0x511f00::core::ptr::drop_in_place$LT$std..fs..File$GT$::h41fb0b354a80bd06(v0);
        return v17;
    }
    v4 = core::cmp::min_by::h397de658b8901e2d(v18);
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hf5cd9397f4df2808(&v5, v4);
    v3 = 0;
    v2 = v0;
}
