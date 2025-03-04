long long uu_truncate::file_truncate::h8689dfa8e5b80143(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3)
{
    int v0;  // [sp-0x148], Other Possible Types: unsigned long
    char v1;  // [bp-0x144]
    unsigned long v2;  // [sp-0x140], Other Possible Types: unsigned long long
    struct struct_0 **v3;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x130], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x128]
    void* v6;  // [bp-0x118], Other Possible Types: unsigned int
    unsigned long long v7;  // [sp-0x110]
    unsigned long long v8;  // [sp-0x108]
    char v9;  // [sp-0x100]
    char *v10;  // [sp-0xf8]
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

    std::fs::metadata::h6368ec5e748c38e4(&v14, a0, a1);
    v20 = v14;
    if (v20 != 2 && (0xf000 & *((int *)&v18)) == 0x1000)
    {
        v6 = 0;
        v7 = a0;
        v8 = a1;
        v9 = 1;
        v10 = &v6;
        v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_5165a0;
        v2 = 2;
        v5 = 0;
        v3 = &v10;
        v4 = 1;
        ::0x4acf90::core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&v12, &v0);
        v4 = 1;
        *((int128_t *)&v0) = *((int128_t *)&v12);
        v3 = *((long long *)&v13);
        v21 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&v0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(v20, *((long long *)&v15));
        return v21;
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf10946d364a1ba5f(v20, *((long long *)&v15));
    v14 = 0x1b600000000;
    v15 = 0;
    v17 = 0;
    v16 = 1;
    v17 = a2;
    std::fs::OpenOptions::open::h4c049ac57fc11c66(&v0, &v14, a0, a1);
    if (!(int)v0)
    {
        v23 = *((int *)&v1);
        v6 = v23;
        v22 = std::fs::File::set_len::hd21acd2eeb028efb(&v6, a3);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hb7323c6ad1fce92a(v23);
    }
    else
    {
        v22 = v2;
        if (!(char)::0x4ac040::std::io::error::Error::kind::hb2ff5fa058639b3d(v22) && !a2)
        {
            ::0x4ac3d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbd0972a5eeb59076(v22);
            v22 = 0;
        }
    }
    v21 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd5342900d4cb632d(v22, a0, a1);
    return v21;
}
