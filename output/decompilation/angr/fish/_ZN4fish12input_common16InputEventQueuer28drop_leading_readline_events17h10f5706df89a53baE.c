long long fish::input_common::InputEventQueuer::drop_leading_readline_events(unsigned int a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v2;  // rbx
    unsigned long long *v3;  // rax

    v3 = a0.get_input_data_mut().get();
    if (!v3)
        return v3;
    while (*(v3) < 9223372036854775810)
    {
        v0.pop_front(v2);
        core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(&v0);
        v3 = v2.get();
        if (!v3)
            return v3;
    }
    return v3;
}
