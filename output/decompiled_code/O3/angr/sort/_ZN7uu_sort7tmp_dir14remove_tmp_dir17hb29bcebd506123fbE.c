long long uu_sort::tmp_dir::remove_tmp_dir::hb29bcebd506123fb(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x130]
    char v1;  // [bp-0x128]
    unsigned long v2;  // [sp-0x110], Other Possible Types: unsigned long long
    int v3;  // [sp-0x108]
    int v4;  // [sp-0xf8]
    unsigned long long v5;  // [sp-0xe8]
    char v6;  // [bp-0xe0]
    char v7;  // [bp-0xd0]
    char v8;  // [bp-0xc0]
    void* v9;  // [sp-0xb8]
    void* v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [sp-0x50]
    char v13;  // [bp-0x48]
    int v16;  // ymm0
    int v17;  // ymm1
    unsigned long long v18;  // rdx
    int v19;  // xmm0
    int v20;  // xmm1
    unsigned long long v21;  // rsi

    std::fs::read_dir::h88d360110f1c898c(&v0, a0, a1);
    if (v12 == 2)
    {
LABEL_548d77:
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&v0);
    }
    else
    {
        v9 = 0;
        v10 = 0;
        v11 = *((long long *)&v0);
        v12 = v1;
        while (true)
        {
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30eeda6b5a39150f(&v6, &v9, v18);
            if (!*((long long *)&v6))
                break;
            v5 = *((long long *)&v8);
            v19 = *((int128_t *)&v6);
            v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19;
            v20 = *((int128_t *)&v7);
            v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
            v4 = v20;
            v3 = v19;
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&v13, &v3);
            v2 = std::fs::remove_file::he37f30a9858e45d8(&v13, v21, v18);
            ::0x546860::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&v2);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h89d34a4c50312286(&v3);
        }
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hd0b6e5634b978dd8(&v9);
        if (v1 == 2)
            goto LABEL_548d77;
    }
    return std::fs::remove_dir::h42b234ef27cdf199(a0, a1, v18);
}
