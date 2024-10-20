long long uu_cp::platform::linux::sparse_copy::hb1415e2514337eae(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0xf8]
    unsigned int v1;  // [sp-0xf4]
    char v2;  // [bp-0xf0]
    char v3;  // [bp-0xec]
    char v4;  // [bp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    char v6;  // [bp-0xd8], Other Possible Types: unsigned int
    char v7;  // [sp-0xd7]
    char v8;  // [sp-0xd5]
    char v9;  // [bp-0xd4], Other Possible Types: unsigned short
    char v10;  // [bp-0x90]
    char v11;  // [bp-0x88]
    unsigned long long v13;  // r12
    unsigned long long v14;  // r15
    unsigned long long v15;  // rbx
    char v16[2];  // r14

    v5 = 0x1b600000000;
    v6 = 0;
    v9 = 0;
    v6 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v5, a0, a1);
    if (*((int *)&v2))
    {
        v13 = *((long long *)&v4);
        return v13;
    }
    v0 = *((int *)&v3);
    v5 = 0x1b600000000;
    v6 = 0;
    v9 = 0;
    v7 = 1;
    v9 = 1;
    v8 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v5, a2, a3);
    v1 = *((int *)&v3);
    std::fs::File::metadata::he899a18112e6f19e(&v5, &v0);
    if ((int)v5 == 2)
    {
LABEL_4c7730:
        v13 = *((long long *)&v6);
    }
    v14 = *((long long *)&v10);
    if (v14 < 0)
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    if (ftruncate(v1, v14) < 0)
        v13 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
    std::fs::File::metadata::he899a18112e6f19e(&v5, &v1);
    if ((int)v5 == 2)
        goto LABEL_4c7730;
    v15 = *((long long *)&v11);
    if (!v15)
    {
        v16 = 1;
        goto LABEL_4c779d;
    }
    if (v15 < 0)
        goto LABEL_4c7895;
    v16 = __rust_alloc_zeroed(v15, 1);
    if (!v16)
    {
LABEL_4c7895:
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
LABEL_4c779d:
    if (!v14)
        goto LABEL_0x4c782a;
    else
        goto LABEL_0x4c77ad;
}
