long long fish::proc::Job::mut_flags(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a0->field_38)
    {
        v0 = v2;
        core::cell::panic_already_borrowed(&g_14df358); /* do not return */
    }
    a0->field_38 = 18446744073709551615;
    return a0 + 1;
}
