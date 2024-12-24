long long uu_sort::ext_sort::write::h42b7387c47b72e57(unsigned long long a0[3], unsigned long long a1[6], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0x100]
    int v2;  // [bp-0xf8], Other Possible Types: char
    char v3;  // [bp-0xf0]
    int v4;  // [sp-0xe8]
    char v5;  // [bp-0xe0]
    int v6;  // [sp-0xd8]
    char v7;  // [bp-0xd0]
    int v8;  // [sp-0xc8]
    char v9;  // [bp-0xc0]
    int v10;  // [sp-0xb8]
    char v11;  // [bp-0xb0]
    int v12;  // [sp-0xa8]
    char v13;  // [bp-0xa0]
    unsigned long v14;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x88]
    unsigned long v16;  // [sp-0x80], Other Possible Types: unsigned long long
    int v17;  // [sp-0x78]
    int v18;  // [sp-0x68]
    int v19;  // [sp-0x58]
    int v20;  // [sp-0x48]
    int v21;  // [sp-0x38]
    unsigned long long v22;  // [sp-0x28]
    unsigned long long v25;  // rax

    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h4d1422a268b55000(&v0, a2, a3, a4);
    v25 = *((long long *)&v1);
    if (v14 == 0x8000000000000000)
    {
        a0[1] = v15;
        a0[2] = v16;
        a0[0] = 0x8000000000000000;
        return v25;
    }
    v22 = *((long long *)&v13);
    *((int128_t *)&v21) = *((int128_t *)&v11);
    *((int128_t *)&v20) = *((int128_t *)&v9);
    *((int128_t *)&v19) = *((int128_t *)&v7);
    *((int128_t *)&v18) = *((int128_t *)&v5);
    *((int128_t *)&v17) = *((int128_t *)&v3);
    v14 = *((long long *)&v0);
    v15 = v25;
    v16 = *((long long *)&v2);
    uu_sort::ext_sort::write_lines::hf94b822515081c89(a1[4], a1[5], ::0x57ab30::_$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::h06d18dc07bba8a65(&v14), a5);
    *((int128_t *)&v12) = (int128_t)(&v21)[8];
    *((int128_t *)&v10) = (int128_t)(&v20)[8];
    *((int128_t *)&v8) = (int128_t)(&v19)[8];
    *((int128_t *)&v6) = (int128_t)(&v18)[8];
    *((int128_t *)&v4) = (int128_t)(&v17)[8];
    *((int128_t *)&v2) = *((int128_t *)&v16);
    *((int128_t *)&v0) = *((int128_t *)&v14);
    v25 = _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hd6cc45de520be811(a0, &v0);
    return v25;
}
