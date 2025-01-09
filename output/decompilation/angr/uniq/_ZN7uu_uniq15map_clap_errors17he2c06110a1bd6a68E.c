long long uu_uniq::map_clap_errors::he2c06110a1bd6a68(struct_0 *a0)
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
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&v1, "--group is mutually exclusive with -c/-d/-D/-u\n", 47);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v8, &v4);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&v1, "invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\n", 117);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v10, &v4);
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4b4c1285fbc3f360(&v1, "invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\n", 111);
    v5 = v2;
    v4 = v1;
    _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::h177306e76d9aa6a7(&v6, &v4);
    switch (v13)
    {
    case 0:
        v14 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&v0, 5);
        if (v14 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::hd3da8a85969e5e42(v14))
        {
            v16 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&v0, 1);
            if (v16 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h896d76687ee462ab(v16))
            {
                v3 = 1;
                *((int128_t *)&v1) = *((int128_t *)&v10);
                v2 = *((long long *)&v11);
                v15 = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&v1);
                ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v6);
                break;
            }
        }
        v17 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&v0, 5);
        if (v17 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::h0ffee90582114660(v17))
        {
            v18 = clap_builder::error::Error$LT$F$GT$::get::h3e58576e747d3ab4(&v0, 1);
            if (v18 && (char)uu_uniq::map_clap_errors::_$u7b$$u7b$closure$u7d$$u7d$::he517f75479310f2d(v18))
            {
                v3 = 1;
                *((int128_t *)&v1) = *((int128_t *)&v6);
                v2 = *((long long *)&v7);
                v15 = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&v1);
LABEL_4bde3a:
                ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v10);
                if (false)
                    ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v8);
                core::ptr::drop_in_place$LT$clap_builder..error..Error$GT$::hdafbdf8e9e6375cf(a0);
                return v15;
            }
        }
    case 8:
        v3 = 1;
        *((int128_t *)&v1) = *((int128_t *)&v8);
        v2 = *((long long *)&v9);
        v15 = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&v1);
        ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v6);
        goto LABEL_4bde3a;
    default:
        v15 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(a0);
        ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v6);
        ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v10);
        ::0x4bb470::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h344c10062ee0b054(&v8);
        return v15;
    }
}
