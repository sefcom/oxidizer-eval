long long fish::input_common::InputEventQueuer::blocking_query(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a0->field_78)
    {
        v0 = v2;
        core::cell::panic_already_borrowed(&g_14db4f0); /* do not return */
    }
    a0->field_78 = 18446744073709551615;
    return a0 + 1;
}
