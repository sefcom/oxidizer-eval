long long fish::parser::Parser::current_filename(unsigned long long a0[8])
{
    void* v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    void* v4;  // rax
    unsigned long long v5;  // rax

    v1.blocks_iter_rev(a0);
    v4 = v1.try_fold();
    v0 = v4;
    if (!v0)
    {
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<widestring::utfstring::Utf32String>>>(&v0);
        v4 = 0;
    }
    v5 = v4.or_else(a0);
    core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v2));
    return v5;
}
