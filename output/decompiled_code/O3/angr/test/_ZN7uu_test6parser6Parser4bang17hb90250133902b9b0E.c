long long uu_test::parser::Parser::bang::hb90250133902b9b0(struct_0 *a0, void* a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x148]
    char v1;  // [bp-0x138]
    char v2;  // [bp-0x128]
    char v3;  // [bp-0x118]
    char v4;  // [bp-0x110]
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
    unsigned long long v19;  // rdx
    unsigned long v20;  // rdx
    unsigned int v21[21];  // rax
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm0
    unsigned long long v25;  // rax

    uu_test::parser::Parser::peek::h7974389b8f48fbed(&v7, a1);
    v18 = *((long long *)&v7);
    if (v18 != 2 && (unsigned int)v18 != 4)
    {
        if ((unsigned int)v18 == 6)
        {
            v0 = 1;
            uu_test::parser::Symbol::into_literal::hab166192b9973048(&v4, &v0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v4);
            vvar_350{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
            a0->field_0 = 7;
            return v25;
        }
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h63ed48d0b361640b(&v0, a1 + 24, v20);
        v14 = *((long long *)&v3);
        *((int128_t *)&v13) = *((int128_t *)&v2);
        *((int128_t *)&v12) = *((int128_t *)&v1);
        *((int128_t *)&v11) = *((int128_t *)&v0);
        v15 = 4;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hc7a62b11916775e5(&v4, &v11);
        if (*((long long *)&v6) != 3 || (v21 = *((long long *)&v5), !(v21[0] == 3) || !(v21[10] == 2) || !(v21[20] == 3)))
        {
            uu_test::parser::Parser::term::ha6227a735c9fe8ac(&v0, a1, v20);
            if ((int)v0 != 7)
            {
                vvar_365{reg 224} = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v24;
                ::0x4ae140::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h1a8810b807de9d6c(&v4);
                vvar_368{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
                return v25;
            }
            v0 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
        }
        else
        {
            uu_test::parser::Parser::expr::h84cd6a4d92f052b4(&v0, a1, v20);
            if ((int)v0 != 7)
            {
                v24 = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v1);
                *((void*)&a0->field_0) = v24;
                ::0x4ae140::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h1a8810b807de9d6c(&v4);
                vvar_346{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
                return v25;
            }
            v0 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
        }
        ::0x4ae140::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h1a8810b807de9d6c(&v4);
        v25 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
        a0->field_0 = 7;
        return v25;
    }
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h63ed48d0b361640b(&v0, a1 + 24, v19);
    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hdf388d26305175a0(&v4, &v0);
    uu_test::parser::Symbol::new::h3b55e9adf678ab6a(&v8, &v4);
    ::0x4adf70::core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::hc63e4759573870fa(&v0);
    if ((*((int *)&v8) | 2) != 6)
    {
        v0 = 1;
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v4, &v0);
        uu_test::parser::Parser::literal::h2517b2c523cfb427(&v9, a1, &v4);
        if (*((int *)&v9) != 7)
        {
            v22 = *((int128_t *)&v9);
            v23 = *((int128_t *)&v10);
            *((void*)&a0->field_10) = v23;
            *((void*)&a0->field_0) = v22;
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
            v25 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
            return v25;
        }
        uu_test::parser::Parser::maybe_boolop::h6a2145789e0be5b1(&v0, a1);
        if ((int)v0 != 7)
        {
            *((void*)&a0->field_10) = v23;
            *((void*)&a0->field_0) = v22;
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
            vvar_361{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
            return v25;
        }
    }
    else
    {
        uu_test::parser::Parser::next_token::h6f84863b823a4061(&v0, a1);
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v16, &v0);
        uu_test::parser::Parser::literal::h2517b2c523cfb427(&v0, a1, &v16);
        if ((int)v0 != 7)
        {
            *((void*)&a0->field_10) = v23;
            *((void*)&a0->field_0) = v22;
            ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
            vvar_374{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
            return v25;
        }
        v0 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1c5600de317c134f(a1, &v0);
    }
    ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v8);
    vvar_355{reg 16} = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v7);
    a0->field_0 = 7;
    return v25;
}
