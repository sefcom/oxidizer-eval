long long uu_cut::cut_files::hab9ba34aeaa70600(unsigned long long a0[3], unsigned long long a1[10])
{
    struct struct_2 **v2;  // [bp-0xd8]
    unsigned long long v4;  // [sp-0xc8]
    char v7;  // [bp-0xb0]
    unsigned long v9;  // [sp-0xa0]
    unsigned long long v17[3];  // [sp-0x50]
    unsigned long v18;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x40]
    unsigned long long v22[3];  // rbx
    unsigned long long v23;  // rax

    v22 = a0;
    v23 = a0[2];
    v17[0] = a0;
    if (!v23)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5054b97c46bbc40b(&v7, "-: \n: Is a directory\n", 1);
        v4 = v9;
        *((int128_t *)&v2) = *((int128_t *)&v7);
        alloc::vec::Vec$LT$T$C$A$GT$::push::he294ab4259f19bac(v22, &v2);
        v23 = v22[2];
    }
    v18 = v22[1];
    v19 = v18 + v23 * 24;
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&v18))
        goto LABEL_0x4b72c8;
    else
        goto LABEL_0x4b6e2a;
}
