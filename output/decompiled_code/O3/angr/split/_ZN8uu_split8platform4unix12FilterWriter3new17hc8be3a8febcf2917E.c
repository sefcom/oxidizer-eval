long long uu_split::platform::unix::FilterWriter::new::hc8be3a8febcf2917(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x1c4]
    unsigned long long v1;  // [sp-0x1c0]
    int v2;  // [sp-0x1b8]
    char v3;  // [bp-0x1a8]
    char v4;  // [bp-0x1a4]
    char v5;  // [bp-0x1a0]
    char v6;  // [bp-0x198]
    int v7;  // [bp-0x188], Other Possible Types: char
    unsigned long long v8;  // [sp-0x178]
    int v9;  // [sp-0x168]
    unsigned long long v10;  // [sp-0x158]
    char v11;  // [bp-0x150]
    char v12;  // [bp-0x148]
    char v13;  // [bp-0x138]
    char v14;  // [bp-0x130]
    char v15;  // [bp-0xf8]
    unsigned long long v17;  // rdx
    int v18;  // xmm0
    unsigned long long v19;  // rsi

    uu_split::platform::unix::WithEnvVarSet::new::hb056a9a8b5b84887(&v14, a3, a4);
    std::env::var::h093cee0095d84703(&v11, "SHELL", 5);
    if (!*((long long *)&v11))
    {
        v8 = *((long long *)&v13);
        *((int128_t *)&v7) = *((int128_t *)&v12);
    }
    else
    {
        v10 = *((long long *)&v13);
        *((int128_t *)&v9) = *((int128_t *)&v12);
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::h95669b1786753549(&v7, &v9);
    }
    std::process::Command::new::hf55e6b60bdcc401c(&v15, &v7, v17);
    std::process::Command::spawn::h512586d0d6bfbf9c(&v3, std::process::Command::stdin::h87bb7c39b6916aa1(std::process::Command::arg::hf8226e952cfbb0cb(std::process::Command::arg::hf8226e952cfbb0cb(&v15, "-c", 2), a1, a2), 2, v17));
    if (!*((int *)&v3))
    {
        v0 = *((int *)&v4);
        v1 = *((long long *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v6);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h22a790db096b0ec6(&v15);
        v18 = *((int128_t *)&v0);
        *((void*)&a0->field_4) = v2;
        *((void*)&(&a0->field_0)[1]) = v18;
        a0->field_0 = 0;
    }
    else
    {
        *((long long *)&(&a0->field_0)[2]) = *((long long *)&v5);
        a0->field_0 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h22a790db096b0ec6(&v15);
    }
    return core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::hc5a4e9fcbd4b2e4d(&v14, v19, v17);
}
