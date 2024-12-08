long long uu_test::parser::Parser::lparen::hcb9e63efb7435e8e(struct_2 *a0, void* a1, unsigned long long a2)
{
    void* v0;  // [sp-0x178], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v1;  // [sp-0x170]
    struct struct_1 **v2;  // [sp-0x168]
    unsigned long v3;  // [sp-0x160], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x158]
    struct_0 *v5;  // [sp-0x148], Other Possible Types: char, unsigned long
    char v6;  // [bp-0x140]
    char v7;  // [bp-0x138]
    char v8;  // [bp-0x130]
    char v9;  // [bp-0x128]
    char v11;  // [bp-0x118]
    struct struct_0 **v12;  // [bp-0x110], Other Possible Types: char
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
    int v26;  // xmm1
    unsigned int v28;  // rdx
    unsigned long long v29;  // rax

    _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h63ed48d0b361640b(&v19, a1 + 24, a2);
    v20 = 3;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hdc7ae95d1dff439d(&v9, &v19);
    v22 = *((long long *)&v11);
    switch (v22)
    {
    case 0:
        v0 = 0;
        uu_test::parser::Symbol::into_literal::hab166192b9973048(&v12, &v0);
        uu_test::parser::Parser::literal::h2517b2c523cfb427(&v5, a1, &v12);
        if ((int)v5 == 7)
            goto LABEL_4af553;
        v25 = *((int128_t *)&v5);
        v26 = *((int128_t *)&v7);
        goto LABEL_4af363;
    case 1:
        v5 = v23;
        v12 = &v5;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80b3191170e6a43a;
        v0 = &g_413ec0;
        v1 = 1;
        v4 = 0;
        v2 = &v12;
        v3 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h5cd5b7e3ea62c08e(&v14, &v0);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v15);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v14);
        a0->field_0 = 3;
        break;
    case 2:
        if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
            goto LABEL_4af408;
        if (!(v23->field_28 == 3) || !((char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40)))
        {
            if (v23->field_0 == 4)
                goto LABEL_4af4e7;
            goto LABEL_4af529;
        }
        else
        {
LABEL_4af4a3:
            uu_test::parser::Parser::next_token::h6f84863b823a4061(&v17, a1);
            uu_test::parser::Parser::literal::h2517b2c523cfb427(&v0, a1, &v17);
            v29 = v0;
            if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                goto LABEL_4af55c;
            uu_test::parser::Parser::expect::he0d83d908db5ebd1(&v0, a1);
            goto LABEL_4af549;
        }
    case 3:
        v24 = *((long long *)&v23->field_0);
        if (v24 == 4)
        {
            if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                goto LABEL_4af434;
LABEL_4af408:
            v0 = 0;
            uu_test::parser::Symbol::into_literal::hab166192b9973048(&v12, &v0);
            uu_test::parser::Parser::literal::h2517b2c523cfb427(&v5, a1, &v12);
LABEL_4af50e:
            v29 = v5;
            if (v29 == 7)
            {
LABEL_4af553:
                a0->field_0 = 7;
                break;
            }
            else
            {
                *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v8);
LABEL_4af56a:
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v6);
                a0->field_0 = v29;
                break;
            }
        }
        else
        {
            if ((unsigned int)v24 == 5 && v23->field_50 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_60, v23->field_68))
            {
                uu_test::parser::Parser::next_token::h6f84863b823a4061(&v16, a1);
                uu_test::parser::Parser::uop::h507107ac68ac9e4c(a1, &v16);
                uu_test::parser::Parser::expect::he0d83d908db5ebd1(&v0, a1);
                if ((int)v0 == 7)
                    goto LABEL_4af553;
LABEL_4af363:
                *((void*)&a0->field_8) = v26;
                *((void*)&a0->field_0) = v25;
                break;
            }
LABEL_4af434:
            if (*((long long *)&v23->field_28) == 3)
            {
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af4a3;
LABEL_4af4e1:
                if (*((long long *)&v23->field_0) == 4)
                {
LABEL_4af4e7:
                    v0 = 0;
                    uu_test::parser::Symbol::into_literal::hab166192b9973048(&v12, &v0);
                    uu_test::parser::Parser::literal::h2517b2c523cfb427(&v5, a1, &v12);
                    goto LABEL_4af50e;
                }
            }
            else
            {
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af4e1;
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af529;
                uu_test::parser::Parser::next_token::h6f84863b823a4061(&v18, a1);
                uu_test::parser::Parser::literal::h2517b2c523cfb427(&v0, a1, &v18);
                v29 = v0;
                if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
                    goto LABEL_4af55c;
                uu_test::parser::Parser::expect::he0d83d908db5ebd1(&v0, a1);
            }
LABEL_4af549:
            v29 = v0;
            if (v29 == 7)
                goto LABEL_4af553;
LABEL_4af55c:
            *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
            goto LABEL_4af56a;
        }
    default:
LABEL_4af529:
        uu_test::parser::Parser::expr::h84cd6a4d92f052b4(&v0, a1, v28);
        v29 = v0;
        if (v23->field_0 == 4 && v23->field_28 == 3 && (char)::0x4ae5c0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::hcddac707bfdce135(v23->field_38, v23->field_40))
            goto LABEL_4af55c;
        uu_test::parser::Parser::expect::he0d83d908db5ebd1(&v0, a1);
        goto LABEL_4af549;
    }
    return ::0x4ae140::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h1a8810b807de9d6c(&v9);
}
