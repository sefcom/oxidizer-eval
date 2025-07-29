long long uu_test::parser::Parser::peek_is_boolop(void* a0)
{
    char v0;  // [bp-0x38]

    v0.peek(a0);
    ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v0);
    return vvar_3{reg 56} & 0xffffff00 | *((int *)&v0) == 2;
}
