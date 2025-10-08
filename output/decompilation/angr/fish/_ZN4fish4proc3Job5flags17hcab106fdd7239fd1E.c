long long fish::proc::Job::flags(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0->field_38 >= 9223372036854775807)
    {
        v0 = a0->field_38;
        core::cell::panic_already_mutably_borrowed(&g_14df340); /* do not return */
    }
    a0->field_38 = v0 + 1;
    return a0 + 1;
}
