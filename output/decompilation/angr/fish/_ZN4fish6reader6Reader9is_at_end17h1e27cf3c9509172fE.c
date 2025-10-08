char fish::reader::Reader::is_at_end(struct_0 *a0)
{
    unsigned long long v1[16];  // rdx
    unsigned long long v2;  // rax

    a0.active_edit_line();
    v2 = v1[15];
    if (a0->field_84a != 1)
    {
        return v2 == v1[6];
    }
    else if (!((char)_ccall(4, 24, v2 + 1, 0, (unsigned long long)(char)(a0->field_84a < 1))))
    {
        return v1[6] <= v2 + 1;
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e0b00); /* do not return */
    }
}
