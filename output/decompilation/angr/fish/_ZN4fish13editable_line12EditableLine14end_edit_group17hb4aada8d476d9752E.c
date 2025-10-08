long long fish::editable_line::EditableLine::end_edit_group(void* a0)
{
    void* v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax

    if ((int)a0[16] != 1)
        return v3;
    v2 = (long long)a0[24];
    if (!v2)
    {
        v0 = 0;
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d6608); /* do not return */
    }
    *((unsigned long long *)&a0[24]) = v2 - 1;
    if (v2 != 1)
        return v2 - 1;
    *((unsigned long long *)&a0[16]) = 0;
    *((unsigned short *)&a0[112]) = 0;
    return v2 - 1;
}
