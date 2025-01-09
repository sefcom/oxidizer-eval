long long uu_test::parser::Parser::term::h385cc0ae73b5bef0(struct_0 *a0, void* a1)
{
    int v0;  // [bp-0x88], Other Possible Types: char
    int v1;  // [sp-0x78]
    unsigned long long v2;  // [sp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x40]
    int v6;  // [sp-0x38]
    int v7;  // [sp-0x28]
    unsigned long long v8;  // [sp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    uu_test::parser::Parser::next_token::hec2da245067de41f(&v3, a1);
    v10 = *((long long *)&v3);
    switch (v10)
    {
    case 0:
        uu_test::parser::Parser::lparen::h57f06a78ce35371d(&v0, a1);
        break;
    case 1:
        uu_test::parser::Parser::bang::h9b754ef1da85f93e(&v0, a1);
    case 5:
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v11 = uu_test::parser::Parser::uop::h62a6f0e931485a3c(a1, &v0);
        a0->field_0 = 7;
        return v11;
    case 6:
        v2 = *((long long *)&v5);
        *((int128_t *)&v1) = *((int128_t *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v11 = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(a1, &v0);
        a0->field_0 = 7;
        return v11;
    default:
        v8 = *((long long *)&v5);
        *((int128_t *)&v7) = *((int128_t *)&v4);
        *((int128_t *)&v6) = *((int128_t *)&v3);
        v11 = uu_test::parser::Parser::literal::h487831028acf0989(&v0, a1, &v6);
        if ((int)v0 == 7)
        {
            a0->field_0 = 7;
            return v11;
        }
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
        return v11;
    }
    if ((int)v0 == 7)
    {
        a0->field_0 = 7;
    }
    else
    {
        *((void*)&a0->field_10) = v1;
        *((void*)&a0->field_0) = v0;
    }
    v11 = ::0x4ade70::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&v3);
    return v11;
}
