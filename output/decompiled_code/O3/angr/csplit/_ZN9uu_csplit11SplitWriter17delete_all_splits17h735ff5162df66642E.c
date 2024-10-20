long long uu_csplit::SplitWriter::delete_all_splits::h735ff5162df66642(unsigned long long a0[6])
{
    void* v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1[3];  // [bp-0x48]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // r15
    void* v7;  // r14
    void* v8;  // r12
    void* v9;  // r13
    unsigned long long v10;  // rbp
    unsigned long long v11;  // r13

    v0 = 0;
    v5 = a0[5];
    if (!v5)
        return 0;
    v7 = 0;
    v8 = 0;
    do
    {
        uu_csplit::split_name::SplitName::get::h5d36d3bf5645865b(v1, a0[4], v7);
        v10 = *((long long *)&v2);
        v11 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(v10, *((long long *)&v3));
        if (v1[0])
            __rust_dealloc(v10);
        if (v11)
        {
            if (v8)
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h977df0175dd0c77c(&v0);
            v0 = v11;
        }
        v7 += 1;
    } while (v5 != v7);
    return v9;
}
