long long fish::builtins::return::return(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbx
    char v5;  // al
    unsigned int v6;  // ebx
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdx

    v3 = fish::builtins::return::parse_return_value(a2, a3, a0, a1);
    if ((char)v3 != 2)
        return v3;
    v0.blocks_iter_rev(a0);
    v4 = v3 >> 32;
    v5 = v0.try_fold().eq(1);
    core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v1));
    if (v3 < 0)
    {
        v6 = v4 - (((unsigned int)v4 >= 0 ? (unsigned int)v4 : (unsigned int)v4 + 255) & 0xffffff00);
        v4 = (v6 >> 31 & v6) + 0x100;
    }
    if (v5)
    {
        v8 = v7;
        *((char *)(a0.libdata_mut() + 127)) = 1;
    }
    else if (!a0->field_5a)
    {
        v8 = v9;
        *((char *)(a0.libdata_mut() + 128)) = 1;
    }
    else
    {
        return v4 * 0x100000000 | (unsigned int)v4;
    }
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v8);
    return v4 * 0x100000000 | (unsigned int)v4;
}
