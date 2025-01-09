long long uu_test::parser::Parser::bang::h9b754ef1da85f93e(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x148]
    char v1;  // [bp-0x138]
    char v2;  // [bp-0x128]
    char v3;  // [bp-0x118]
    unsigned long long v4[3];  // [bp-0x110]
    char v5;  // [bp-0x108]
    char v6;  // [bp-0x100]
    char v7;  // [bp-0xe8]
    char v8;  // [bp-0xc0]
    char v9;  // [bp-0x98]
    char v10;  // [bp-0x88]
    int v11;  // [sp-0x78]
    int v12;  // [sp-0x68]
    int v13;  // [sp-0x58]
    unsigned long long v14;  // [sp-0x48]
    unsigned long long v15;  // [sp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned int v19[21];  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm0
    unsigned long long v23;  // rax

    uu_test::parser::Parser::peek::hd4e8be8df06376c2(&v7, a1);
    v18 = *((long long *)&v7);
    if (v18 != 2 && (unsigned int)v18 != 4)
    {
        if ((unsigned int)v18 == 6)
        {
            v0 = 1;
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(v4, &v0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, v4);
            vvar_348{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
            a0->field_0 = 7;
            return v23;
        }
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&v0, a1 + 24);
        v14 = *((long long *)&v3);
        *((int128_t *)&v13) = *((int128_t *)&v2);
        *((int128_t *)&v12) = *((int128_t *)&v1);
        *((int128_t *)&v11) = *((int128_t *)&v0);
        v15 = 4;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h676d59df733cc62a(v4, &v11);
        if (*((long long *)&v6) != 3 || (v19 = *((long long *)&v5), !(v19[0] == 3) || !(v19[10] == 2) || !(v19[20] == 3)))
        {
            uu_test::parser::Parser::term::h385cc0ae73b5bef0(&v0, a1);
            if ((int)v0 != 7)
            {
                vvar_363{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v22;
                ::0x4adfb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(v4);
                vvar_366{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
                return v23;
            }
            v0 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, &v0);
        }
        else
        {
            uu_test::parser::Parser::expr::h14b244d6254724ab(&v0, a1);
            if ((int)v0 != 7)
            {
                v22 = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v22;
                ::0x4adfb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(v4);
                vvar_344{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
                return v23;
            }
            v0 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, &v0);
        }
        ::0x4adfb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(v4);
        v23 = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
        a0->field_0 = 7;
        return v23;
    }
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&v0, a1 + 24);
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h06598638d93f08d0(v4, &v0);
    uu_test::parser::Symbol::new::ha5314f5fa26867b7(&v8, v4);
    ::0x4adde0::core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h1d252f4392002ad9(&v0);
    if ((*((int *)&v8) | 2) != 6)
    {
        v0 = 1;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(v4, &v0);
        uu_test::parser::Parser::literal::h487831028acf0989(&v9, a1, v4);
        if (*((int *)&v9) != 7)
        {
            v20 = *((int128_t *)&v9);
            v21 = *((int128_t *)&v10);
            *((void*)&a0->field_10) = v21;
            *((void*)&a0->field_0) = v20;
            ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v8);
            v23 = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
            return v23;
        }
        uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&v0, a1);
        if ((int)v0 != 7)
        {
            *((void*)&a0->field_10) = v21;
            *((void*)&a0->field_0) = v20;
            ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v8);
            vvar_359{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
            return v23;
        }
    }
    else
    {
        uu_test::parser::Parser::next_token::hec2da245067de41f(&v0, a1);
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v16, &v0);
        uu_test::parser::Parser::literal::h487831028acf0989(&v0, a1, &v16);
        if ((int)v0 != 7)
        {
            *((void*)&a0->field_10) = v21;
            *((void*)&a0->field_0) = v20;
            ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v8);
            vvar_372{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
            return v23;
        }
        v0 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, &v0);
    }
    ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v8);
    vvar_353{reg 16} = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v7);
    a0->field_0 = 7;
    return v23;
}
