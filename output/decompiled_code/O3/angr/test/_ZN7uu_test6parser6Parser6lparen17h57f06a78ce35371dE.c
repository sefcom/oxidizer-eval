long long uu_test::parser::Parser::lparen::h57f06a78ce35371d(struct_1 *a0, void* a1, unsigned long long a2)
{
    void* v0;  // [sp-0x178], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x170]
    struct struct_2 **v2;  // [sp-0x168]
    unsigned long v3;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x158]
    struct_0 *v5;  // [sp-0x148], Other Possible Types: unsigned long
    char v6;  // [bp-0x140]
    char v7;  // [bp-0x138]
    char v8;  // [bp-0x130]
    char v9;  // [bp-0x128]
    char v11;  // [bp-0x118]
    struct struct_0 **v12;  // [bp-0x110]
    unsigned long long v13;  // [sp-0x108]
    char v14;  // [bp-0xe8]
    char v15;  // [bp-0xd8]
    char v16;  // [bp-0xd0]
    char v17;  // [bp-0xa8]
    char v18;  // [bp-0x80]
    char v19;  // [bp-0x58]
    unsigned long long v20;  // [sp-0x20]
    unsigned long long v22;  // rax
    struct_0 *v23;  // r15
    unsigned long long v24;  // rax
    int v25;  // xmm0
    unsigned int v27;  // rdx
    unsigned long long v28;  // rax

    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&v19, a1 + 24, a2);
    v20 = 3;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::he3027531f5f490a6(&v9, &v19);
    v22 = *((long long *)&v11);
    switch (v22)
    {
    case 0:
        v0 = 0;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v12, &v0);
        uu_test::parser::Parser::literal::h487831028acf0989(&v5, a1, &v12);
        if ((int)v5 == 7)
            goto LABEL_4af3b0;
        v25 = *((int128_t *)&v5);
        a0->field_8 = *((int128_t *)&v7);
        *((void*)&a0->field_0) = v25;
        break;
    case 1:
        v5 = v23;
        v12 = &v5;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf994b1777394cd57;
        v0 = &g_413dc0;
        v1 = 1;
        v4 = 0;
        v2 = &v12;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::ha47e44f34eb359bd(&v14, &v0);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v15);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v14);
        a0->field_0 = 3;
        break;
    case 2:
        if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
            goto LABEL_4af265;
        if (!(v23->field_28 == 3) || !((char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40)))
        {
            if (v23->field_0 == 4)
                goto LABEL_4af344;
            goto LABEL_4af386;
        }
        else
        {
LABEL_4af300:
            uu_test::parser::Parser::next_token::hec2da245067de41f(&v17, a1);
            uu_test::parser::Parser::literal::h487831028acf0989(&v0, a1, &v17);
            v28 = v0;
            if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                goto LABEL_4af3b9;
            uu_test::parser::Parser::expect::h264bdd99a51ab46d(&v0, a1);
            goto LABEL_4af3a6;
        }
    case 3:
        v24 = *((long long *)&v23->field_0);
        if (v24 == 4)
        {
            if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                goto LABEL_4af291;
LABEL_4af265:
            v0 = 0;
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v12, &v0);
            uu_test::parser::Parser::literal::h487831028acf0989(&v5, a1, &v12);
LABEL_4af36b:
            v28 = v5;
            if (v28 == 7)
            {
LABEL_4af3b0:
                a0->field_0 = 7;
                break;
            }
            else
            {
                *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v8);
LABEL_4af3c7:
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v6);
                a0->field_0 = v28;
                break;
            }
        }
        else
        {
            if ((unsigned int)v24 == 5 && v23->field_50 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_60, v23->field_68))
            {
                uu_test::parser::Parser::next_token::hec2da245067de41f(&v16, a1);
                uu_test::parser::Parser::uop::h62a6f0e931485a3c(a1, &v16);
                uu_test::parser::Parser::expect::h264bdd99a51ab46d(&v0, a1);
                goto LABEL_4af3a6;
            }
LABEL_4af291:
            if (*((long long *)&v23->field_28) == 3)
            {
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af300;
LABEL_4af33e:
                if (*((long long *)&v23->field_0) == 4)
                {
LABEL_4af344:
                    v0 = 0;
                    uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&v12, &v0);
                    uu_test::parser::Parser::literal::h487831028acf0989(&v5, a1, &v12);
                    goto LABEL_4af36b;
                }
            }
            else
            {
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af33e;
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af386;
                uu_test::parser::Parser::next_token::hec2da245067de41f(&v18, a1);
                uu_test::parser::Parser::literal::h487831028acf0989(&v0, a1, &v18);
                v28 = v0;
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af3b9;
                uu_test::parser::Parser::expect::h264bdd99a51ab46d(&v0, a1);
            }
LABEL_4af3a6:
            v28 = v0;
            if (v28 == 7)
                goto LABEL_4af3b0;
LABEL_4af3b9:
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
            goto LABEL_4af3c7;
        }
    default:
LABEL_4af386:
        uu_test::parser::Parser::expr::h14b244d6254724ab(&v0, a1, v27);
        v28 = v0;
        if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae430::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
            goto LABEL_4af3b9;
        uu_test::parser::Parser::expect::h264bdd99a51ab46d(&v0, a1);
        goto LABEL_4af3a6;
    }
    return ::0x4adfb0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(&v9);
}
