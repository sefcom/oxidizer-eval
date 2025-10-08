long long fish::parser::Parser::get_function_name(void* a0, unsigned long long a1[8], unsigned int a2)
{
    int v0;  // [bp-0x88], Other Possible Types: char *, unsigned long long
    char *v1;  // [bp-0x80]
    char *v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x6c]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    char v9;  // [bp-0x48], Other Possible Types: unsigned long long
    char v10;  // [bp-0x40]
    char v11;  // [bp-0x30]
    char *v12;  // [bp-0x28]
    char v13;  // [bp-0x20]
    char v14;  // [bp-0x18]

    v3 = a2;
    if (a2)
    {
        v9.blocks_iter_rev(a1);
        v8 = &v3;
        v12 = &v3;
        v13 = 0;
        v14 = 0;
        v0 = &v14;
        v1 = &v8;
        v2 = &v14;
        v4.try_fold(&v9, &v0);
        if (v5)
        {
            v2 = v7;
            *((int128_t *)&v0) = *((int128_t *)&v5);
        }
        else
        {
            v0 = 0;
            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<(core::cell::Ref<fish::parser::Block>,i32)>>(0, v6);
        }
        <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend::{{closure}}(&v4, &v0);
        if (v5)
        {
            fish::parser::Parser::get_function_name::{{closure}}(&v0, v5, v6);
            *((char **)&a0[16]) = v2;
            *((int128_t *)a0) = (int128_t)v0;
        }
        else
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<core::iter::adapters::inspect::Inspect<core::iter::adapters::skip_while::SkipWhile<core::iter::adapters::map::Map<core::iter::adapters::map::Map<core::iter::adapters::take_while::TakeWhile<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>,fish::parser::Parser::get_function_name::{{closure}}>>(*((long long *)&v10));
        return a0;
    }
    else
    {
        (char)v8.blocks_iter_rev(a1);
        v11 = 0;
        (char)v0.try_fold(&(char)v8);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(char)v0);
        }
        else
        {
            *((char **)&a0[16]) = v2;
            *((int128_t *)a0) = (int128_t)v0;
        }
        core::ptr::drop_in_place<core::iter::adapters::take_while::TakeWhile<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>,fish::parser::Parser::is_function::{{closure}}>>(v9);
        return a0;
    }
}
