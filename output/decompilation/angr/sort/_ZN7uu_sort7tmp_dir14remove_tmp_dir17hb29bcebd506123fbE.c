long long uu_sort::tmp_dir::remove_tmp_dir::hb29bcebd506123fb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x130]
    char v1;  // [bp-0x128]
    unsigned long long v2;  // [sp-0x120]
    unsigned long long v3;  // [sp-0x118]
    unsigned long v4;  // [sp-0x110]
    int v5;  // [sp-0x108]
    int v6;  // [sp-0xf8]
    unsigned long long v7;  // [sp-0xe8]
    char v8;  // [bp-0xe0]
    char v9;  // [bp-0xd0]
    char v10;  // [bp-0xc0]
    void* v11;  // [sp-0xb8]
    void* v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x58]
    char v14;  // [sp-0x50]
    char v15;  // [bp-0x48]
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r14
    int v20;  // ymm0
    int v21;  // ymm1
    int v22;  // xmm0
    int v23;  // xmm1

    v17 = a1;
    v18 = a0;
    std::fs::read_dir::h88d360110f1c898c(&v0, a0, a1);
    if (v14 == 2)
    {
LABEL_548d77:
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&v0);
    }
    else
    {
        v2 = a0;
        v3 = a1;
        v11 = 0;
        v12 = 0;
        v13 = *((long long *)&v0);
        v14 = v1;
        while (true)
        {
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30eeda6b5a39150f(&v8, &v11);
            if (!*((long long *)&v8))
                break;
            v7 = *((long long *)&v10);
            v22 = *((int128_t *)&v8);
            v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
            v23 = *((int128_t *)&v9);
            v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23;
            v6 = v23;
            v5 = v22;
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&v15, &v5);
            v4 = std::fs::remove_file::he37f30a9858e45d8(&v15);
            ::0x546860::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&v4);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h89d34a4c50312286(&v5);
        }
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hd0b6e5634b978dd8(&v11);
        v17 = v3;
        v18 = v2;
        if (v1 == 2)
            goto LABEL_548d77;
    }
    return std::fs::remove_dir::h42b234ef27cdf199(v18, v17);
}
