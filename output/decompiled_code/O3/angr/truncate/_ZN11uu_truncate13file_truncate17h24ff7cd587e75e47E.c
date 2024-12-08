long long uu_truncate::file_truncate::h24ff7cd587e75e47(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3)
{
    int v0;  // [sp-0x148], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x144]
    unsigned long v2;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x138]
    unsigned int v4;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x128]
    void* v6;  // [bp-0x118], Other Possible Types: unsigned int
    unsigned long long v7;  // [sp-0x110]
    unsigned long long v8;  // [sp-0x108]
    char v9;  // [sp-0x100]
    unsigned long v10;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0xf0]
    char v12;  // [bp-0xe8]
    char v13;  // [bp-0xd8]
    char v14;  // [bp-0xd0], Other Possible Types: unsigned long, unsigned long long
    char v15;  // [bp-0xc8], Other Possible Types: unsigned int
    char v16;  // [sp-0xc7]
    char v17;  // [bp-0xc4], Other Possible Types: unsigned short
    char v18;  // [bp-0x98]
    unsigned long long v20;  // rdi
    unsigned long long v21;  // rax
    void* v22;  // r15
    unsigned int v23;  // ebp

    std::fs::metadata::h4ec6f730a839c0e9(&v14, a0, a1);
    v20 = v14;
    if (v20 != 2 && (0xf000 & *((int *)&v18)) == 0x1000)
    {
        v6 = 0;
        v7 = a0;
        v8 = a1;
        v9 = 1;
        v10 = &v6;
        v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v0 = &g_516bd0;
        v2 = 2;
        v5 = 0;
        v3 = &v10;
        v4 = 1;
        ::0x4acfd0::core::option::Option$LT$T$GT$::map_or_else::h0274d7e1f61abfd4(&v12, &v0);
        v4 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v12);
        v3 = *((long long *)&v13);
        v21 = alloc::boxed::Box$LT$T$GT$::new::h0b66135e4e932c08(&v0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h724919249d643b75(v20, *((long long *)&v15));
        return v21;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h724919249d643b75(v20, *((long long *)&v15));
    v14 = 0x1b600000000;
    v15 = 0;
    v17 = 0;
    v16 = 1;
    v17 = a2;
    std::fs::OpenOptions::open::h9204b7327b7d5e76(&v0, &v14, a0, a1);
    if (!(int)v0)
    {
        v23 = *((int *)&v1);
        v6 = v23;
        v22 = std::fs::File::set_len::hd21acd2eeb028efb(&v6, a3);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h1db39f9241870ea8(v23);
    }
    else
    {
        v22 = v2;
        if (!(char)::0x4ac080::std::io::error::Error::kind::hb2ff5fa058639b3d(v22) && !a2)
        {
            ::0x4ac410::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h368a1393c986abb6(v22);
            v22 = 0;
        }
    }
    v21 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h315b74e75f5deb64(v22, a0);
    return v21;
}
