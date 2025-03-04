long long uu_cut::cut_files::hab9ba34aeaa70600(unsigned long long a0[3], unsigned long long a1[10])
{
    struct struct_0 **v2;  // [sp-0xd8]
    unsigned long long v6;  // [sp-0xc8]
    char v9;  // [bp-0xb0]
    unsigned long v12;  // [sp-0xa0]
    unsigned long v20;  // [sp-0x48]
    unsigned long long v21;  // [sp-0x40]
    unsigned long long v24;  // rax

    v24 = a0[2];
    if (!v24)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5054b97c46bbc40b(&v9, "-: \n: Is a directory\n", 1);
        v6 = v12;
        *((int128_t *)&v2) = *((int128_t *)&v9);
        alloc::vec::Vec$LT$T$C$A$GT$::push::he294ab4259f19bac(a0, &v2);
        v24 = a0[2];
    }
    v20 = a0[1];
    v21 = v20 + v24 * 24;
    if (!_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3c649708cac16010(&v20))
        goto LABEL_0x4b72c8;
    else
        goto LABEL_0x4b6e2a;
}
