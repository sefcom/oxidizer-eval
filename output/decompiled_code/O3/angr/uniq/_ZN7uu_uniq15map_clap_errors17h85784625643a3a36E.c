long long uu_uniq::map_clap_errors::h85784625643a3a36(struct_0 *a0)
{
    char v0;  // [bp-0xb0]
    int v1;  // [bp-0xa8], Other Possible Types: char
    unsigned long v2;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned int v3;  // [sp-0x90]
    int v4;  // [sp-0x88]
    unsigned long long v5;  // [sp-0x78]
    char v6;  // [bp-0x70]
    char v7;  // [bp-0x60]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    unsigned int v13;  // eax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf1bf00d8bc4f30da(&v1, "--group is mutually exclusive with -c/-d/-D/-u\n", 47);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v8, &v4);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf1bf00d8bc4f30da(&v1, "invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\n", 117);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v10, &v4);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf1bf00d8bc4f30da(&v1, "invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\n", 111);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v6, &v4);
    switch (v13)
    {
    case 0:
        v15 = clap_builder::error::Error$LT$F$GT$::get::hbbb93ca291203071(&v0, 5, v14);
        if (v15 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h035d61226ebccb77(v15))
        {
            v17 = clap_builder::error::Error$LT$F$GT$::get::hbbb93ca291203071(&v0, 1, v14);
            if (v17 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h9f7ce0038aa8b898(v17))
            {
                v3 = 1;
                *((int128_t *)&v1) = *((int128_t *)&v10);
                v2 = *((long long *)&v11);
                v16 = alloc::boxed::Box$LT$T$GT$::new::he88f1c1710e76cfb(&v1);
                ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v6);
                break;
            }
        }
        v18 = clap_builder::error::Error$LT$F$GT$::get::hbbb93ca291203071(&v0, 5, v14);
        if (v18 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h3e22ecbc8da93c4d(v18))
        {
            v19 = clap_builder::error::Error$LT$F$GT$::get::hbbb93ca291203071(&v0, 1, v14);
            if (v19 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h91cf4124c73c6610(v19))
            {
                v3 = 1;
                *((int128_t *)&v1) = *((int128_t *)&v6);
                v2 = *((long long *)&v7);
                v16 = alloc::boxed::Box$LT$T$GT$::new::he88f1c1710e76cfb(&v1);
LABEL_4bddba:
                ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v10);
                if (false)
                    ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v8);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hb27672e1d3cbb972(a0);
                return v16;
            }
        }
    case 8:
        v3 = 1;
        *((int128_t *)&v1) = *((int128_t *)&v8);
        v2 = *((long long *)&v9);
        v16 = alloc::boxed::Box$LT$T$GT$::new::he88f1c1710e76cfb(&v1);
        ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v6);
        goto LABEL_4bddba;
    default:
        v16 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(a0);
        ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v6);
        ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v10);
        ::0x4bb3e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbc55a25c09e17a1f(&v8);
        return v16;
    }
}
