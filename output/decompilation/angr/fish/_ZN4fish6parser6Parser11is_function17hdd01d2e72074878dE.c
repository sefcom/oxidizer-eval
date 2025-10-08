long long fish::parser::Parser::is_function(unsigned long long a0)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x10]
    unsigned int v4;  // eax

    v0.blocks_iter_rev(a0);
    v2 = 0;
    v4 = v0.try_fold().eq(1);
    core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>,fish::parser::Parser::is_function::{{closure}}>>(*((long long *)&v1));
    return v4;
}
