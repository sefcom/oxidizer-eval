long long uu_cp::platform::linux::check_sparse_detection::he625f50b8a9bdb43(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xc4]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0xbc]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x60]
    unsigned long long v7;  // rax

    std::fs::File::open::h2ade805364297b3f(&v1, a1, a2);
    if (*((int *)&v1))
    {
        v7 = *((long long *)&v3);
        a0->field_8 = v7;
        a0->field_0 = 1;
        return v7;
    }
    v0 = *((int *)&v2);
    std::fs::File::metadata::he899a18112e6f19e(&v1, &v0);
    if (*((int *)&v1) == 2)
    {
        a0->field_8 = *((long long *)&v3);
        a0->field_0 = 1;
    }
    else if (*((long long *)&v5) >= *((long long *)&v4) >> 9)
    {
        *((unsigned short *)&a0->field_0) = 0;
    }
    else
    {
        a0->padding_1[0] = 1;
        a0->field_0 = 0;
    }
    v7 = ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0();
    return v7;
}
