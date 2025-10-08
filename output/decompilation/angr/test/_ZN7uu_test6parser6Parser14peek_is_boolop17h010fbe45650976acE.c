long long uu_test::parser::Parser::peek_is_boolop(unsigned long long a0[6])
{
    unsigned long long v0[1][5];  // [bp-0x38]

    v0.peek(a0);
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0);
    return vvar_3{reg 56} & 0xffffff00 | (int)v0[0] == 2;
}
