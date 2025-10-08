long long fish::editable_line::EditableLine::begin_edit_group(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // rax
    unsigned long v4;  // cc_ndep

    v2 = (char)a0[16] & 1;
    if (((char)a0[16] & 1))
        return v3;
    *((unsigned long long *)&a0[16]) = 1;
    *((unsigned long long *)&a0[24]) = 1;
    *((unsigned short *)&a0[112]) = 0x100;
    if ((char)_ccall(4, 24, (long long)a0[128] + 1, 0, _ccall(17, v2, 0, v4)))
    {
        v0 = (long long)a0[128] + 1;
        core::panicking::panic_const::panic_const_add_overflow(&g_14d65f0); /* do not return */
    }
    *((unsigned long long *)&a0[128]) = v0;
    return v0;
}
