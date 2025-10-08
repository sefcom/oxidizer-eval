long long fish::parser::Parser::is_breakpoint(unsigned long long a0)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned int v3;  // eax

    v0.blocks_iter_rev(a0);
    v3 = v0.try_fold().eq(1);
    core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v1));
    return v3;
}
