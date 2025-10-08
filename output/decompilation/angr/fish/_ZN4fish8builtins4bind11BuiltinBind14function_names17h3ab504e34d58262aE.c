void fish::builtins::bind::BuiltinBind::function_names(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx

    fish::input::input_function_get_names(&v1);
    v0.into_iter(&v1);
    while (true)
    {
        v3 = v0.next();
        if (!v3)
            break;
        a0.appendln(v3, v4);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v0);
    return;
}
