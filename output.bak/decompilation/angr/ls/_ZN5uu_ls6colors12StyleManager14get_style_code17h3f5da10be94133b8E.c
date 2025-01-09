double uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x79]
    char v1;  // [sp-0x71]
    char v2;  // [bp-0x70]
    char v3;  // [bp-0x6c]
    char v4;  // [bp-0x6a]
    char v5;  // [bp-0x69]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x58]
    unsigned long long v8;  // [sp-0x50]
    unsigned long long v9;  // [sp-0x48]
    void* v10;  // [sp-0x40]
    unsigned long long v11;  // [sp-0x38]
    unsigned long long v12;  // [sp-0x20]
    char v13;  // [sp-0x18]
    unsigned int v14;  // [sp-0x17]
    unsigned short v15;  // [sp-0x13]
    char v16;  // [sp-0x11]
    char v17;  // [sp-0x10]
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // ymm0

    *((long long *)((char *)&a1->field_8 + 5)) = *((long long *)((char *)a2 + 13));
    v19 = *(a2);
    *((void*)&(&a1->padding_0)[1]) = v19;
    lscolors::style::Style::to_nu_ansi_term_style::hd70be39300867c91(&v0, a2);
    v1 = 0;
    v17 = v5;
    v12 = *((long long *)&v0);
    v13 = v1;
    v14 = *((int *)&v2);
    v15 = *((short *)&v3);
    v16 = v4;
    v8 = 0x8000000000000000;
    v9 = 1;
    v10 = 0;
    v11 = 9223372036854775810;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hce018959f2b6d404(&v6, &v8);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::h9e949c0413661d2a(&v8);
    ::0x5393a0::alloc::string::String::truncate::hafe089c60c3201e9(&v6, *((long long *)&v7) - 4);
    a0->field_10 = *((long long *)&v7);
    v20 = *((int128_t *)&v6);
    *((void*)&a0->field_0) = v20;
    return (unsigned long long)(v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20);
}
