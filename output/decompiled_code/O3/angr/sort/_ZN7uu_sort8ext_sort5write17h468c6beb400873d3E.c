long long uu_sort::ext_sort::write::h468c6beb400873d3(unsigned long long a0[3], unsigned long long a1[6], unsigned long long a2, unsigned long a3, unsigned long a4, unsigned int a5)
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

    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&v0, a2);
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
    uu_sort::ext_sort::write_lines::h885deb96e81ca5d5(a1[4], a1[5], ::0x568f40::_$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::as_write::hd7022d2bef20dad2(&v7), a5);
    v6 = (long long)(&v11)[8];
    *((int128_t *)&v4) = (int128_t)(&v10)[8];
    *((int128_t *)&v2) = *((int128_t *)&v9);
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v14 = _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(a0, &v0);
    return v14;
}
