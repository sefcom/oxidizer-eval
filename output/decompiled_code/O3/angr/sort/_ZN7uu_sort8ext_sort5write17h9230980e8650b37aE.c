long long uu_sort::ext_sort::write::h9230980e8650b37a(unsigned long long a0[3], unsigned long long a1[6], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned int a5)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    char v1;  // [bp-0x90]
    int v2;  // [bp-0x88], Other Possible Types: char
    char v3;  // [bp-0x80]
    int v4;  // [sp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x50]
    unsigned long v9;  // [sp-0x48], Other Possible Types: unsigned long long
    int v10;  // [sp-0x40]
    int v11;  // [sp-0x30]
    unsigned long long v14;  // rax

    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h50efcba1f39d4bae(&v0, a2);
    v14 = *((long long *)&v1);
    if (v7 == 0x8000000000000000)
    {
        a0[1] = v8;
        a0[2] = v9;
        a0[0] = 0x8000000000000000;
        return v14;
    }
    *((int128_t *)&v11) = *((int128_t *)&v5);
    *((int128_t *)&v10) = *((int128_t *)&v3);
    v7 = *((long long *)&v0);
    v8 = v14;
    v9 = *((long long *)&v2);
    uu_sort::ext_sort::write_lines::h1d7fa81d1da67a31(a1[4], a1[5], ::0x57ab20::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::h465e666f13f3431d(&v7), a5);
    v6 = (long long)(&v11)[8];
    *((int128_t *)&v4) = (int128_t)(&v10)[8];
    *((int128_t *)&v2) = *((int128_t *)&v9);
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v14 = _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h8cc9b203376681b7(a0, &v0);
    return v14;
}
