char fish::event::Event::is_blocked(unsigned long long a0)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    struct_0 *v3;  // rax
    unsigned long long v4;  // rdx

    v0.blocks_iter_rev(a0);
    while (true)
    {
        v3 = fish::parser::Parser::blocks_iter_rev::{{closure}}(&v0);
        if (!v3)
        {
            core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v1));
            return core::sync::atomic::atomic_load(a0 + 384);
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v4);
        if (v3->field_15)
        {
            core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v1));
            return 1;
        }
    }
}
