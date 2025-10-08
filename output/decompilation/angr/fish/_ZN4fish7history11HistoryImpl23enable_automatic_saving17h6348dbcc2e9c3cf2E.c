long long fish::history::HistoryImpl::enable_automatic_saving(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    v2 = a0->field_f8;
    if (!(unsigned int)v2)
    {
        v0 = v2;
        core::panicking::panic("assertion failed: self.disable_automatic_save_counter > 0", 57, &g_14d9f40); /* do not return */
    }
    a0->field_f8 = (unsigned int)v0 - 1;
    return (unsigned int)v0 - 1;
}
