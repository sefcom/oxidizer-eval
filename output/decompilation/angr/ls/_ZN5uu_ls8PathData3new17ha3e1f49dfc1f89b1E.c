long long uu_ls::PathData::new::ha3e1f49dfc1f89b1(unsigned long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3[3], unsigned int a4, unsigned int a5, char a6)
{
    unsigned long long v0[3];  // [sp-0x148]
    unsigned int v1;  // [sp-0x13c]
    int v2;  // [sp-0x138]
    unsigned long long v3;  // [sp-0x128]
    unsigned long long v4;  // [sp-0x120]
    char v5;  // [bp-0xe8]
    char v6;  // [bp-0xd8]
    unsigned long long v7;  // [sp-0x30]
    unsigned long long v8;  // [sp-0x28]
    unsigned long long v9;  // [sp-0x20]
    unsigned long long v10;  // [sp-0x18]
    unsigned long long v11;  // [sp-0x10]
    unsigned long v12;  // r15
    unsigned long v13;  // r14
    unsigned long v14;  // r13
    unsigned long v15;  // r12
    unsigned long v16;  // rbx
    unsigned long long v17;  // 4113
    unsigned long long v18;  // rax

    v11 = v12;
    v10 = v13;
    v9 = v14;
    v8 = v15;
    v7 = v16;
    v17 = a3[0];
    v4 = a2;
    v0[0] = a3;
    v1 = a4;
    if (v17 != 0x8000000000000000)
    {
        v3 = a3[2];
        *((int128_t *)&v2) = *((int128_t *)&a3[0]);
        goto *((int *)(4409008 + vvar_5 * 4)) + 4409008;
    }
    else if (a6)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&v5, a1);
        v3 = *((long long *)&v6);
        *((int128_t *)&v2) = *((int128_t *)&v5);
        goto *((int *)(4409024 + vvar_5 * 4)) + 4409024;
    }
    else
    {
        v18 = std::path::Path::file_name::h79ecbb7850a9c7f3(a1[1], a1[2]);
        if (!v18)
            v18 = uu_ls::PathData::new::_$u7b$$u7b$closure$u7d$$u7d$::h0c5837aa9b0379e1(a1[1], a1[2]);
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v5, v18, a2);
        v3 = *((long long *)&v6);
        *((int128_t *)&v2) = *((int128_t *)&v5);
        goto *((int *)(4409008 + vvar_5 * 4)) + 4409008;
    }
}
