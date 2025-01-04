long long uu_tail::follow::files::PathData::from_other_with_path::h3c415c2bfeedf353(void* a0, unsigned long long a1[27], unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [sp-0x1a0]
    unsigned long long v1;  // [sp-0x198]
    char v2;  // [bp-0x190], Other Possible Types: unsigned long long
    char v3;  // [bp-0x18c]
    char v4;  // [bp-0xe0]
    char v5;  // [bp-0xd8]
    unsigned long long v6;  // [sp-0x10]
    unsigned long v8;  // r15
    unsigned long v9;  // r15

    v6 = v8;
    v9 = a1[26];
    v1 = v9;
    v0 = a1[25];
    if (!v0)
    {
        std::fs::File::open::hcbb28a04a46ba590(&v2, a2, a3);
        if (*((int *)&v2))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hb4496a4e206aee00(&v2);
            v0 = 0;
        }
        else
        {
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v4, 0x2000, *((int *)&v3));
            v0 = ::0x50db60::alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&v4);
        }
        v9 = &g_5bc4c8;
    }
    std::fs::metadata::h5a76b0b01e9dc15d(&v4, a2, a3);
    if (*((int *)&v4) != 2)
    {
        memcpy(&v2, &v4, 176);
    }
    else
    {
        v2 = 2;
        ::0x50d690::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(*((long long *)&v5));
    }
    uu_tail::follow::files::PathData::new::h9cc9fab20487d2f9(a0, v0, v9, &v2, a1[23], a1[24]);
    ::0x50d390::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&a1[22]);
    return a0;
}
