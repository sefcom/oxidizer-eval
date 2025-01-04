long long uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
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
    unsigned int v19;  // ebp
    unsigned int v20;  // ebp

    std::fs::File::open::h2ade805364297b3f(&v10, a0, a1);
    if (*((int *)&v10))
    {
        v17 = *((long long *)&v12);
        return v17;
    }
    v0 = *((int *)&v11);
    std::fs::File::create::h63900868be62ed17(&v10, a2, a3);
    if (*((int *)&v10))
    {
        v17 = *((long long *)&v12);
        goto LABEL_51323e;
    }
    v1 = *((int *)&v11);
    std::fs::File::metadata::he899a18112e6f19e(&v10, &v0);
    if (*((int *)&v10) == 2)
    {
        v17 = *((long long *)&v12);
        goto LABEL_513237;
    }
    v18 = *((long long *)&v15);
    core::result::Result$LT$T$C$E$GT$::unwrap::h73f8e5c4ab47dad3(v18 >> 63, &g_5b64a0);
    if (ftruncate(v1, v18) < 0)
    {
        v17 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
LABEL_513237:
        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v1);
LABEL_51323e:
        ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v0);
        return v17;
    }
    v19 = v0;
    v4 = core::cmp::min_by::h2985dd7176bedd6f(v18);
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&v5, v4);
    v3 = 0;
    v2 = v19;
    v20 = v19;
}
