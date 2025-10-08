long long fish::screen::next_tab_stop(unsigned long a0)
{
    struct_0 *v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long v4;  // rax
    unsigned long v5;  // rax
    unsigned long long v6;  // rax

    v0 = v2;
    v3 = 8;
    if ((char)fish::terminal::use_terminfo())
    {
        v0 = fish::terminal::term();
        if ((v0->field_20 & 1))
        {
            v3 = v0->field_28;
            core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
            if (!v0->field_28)
                core::panicking::panic_const::panic_const_div_by_zero(&g_14e1ed0); /* do not return */
        }
        else
        {
            core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v0);
            if (!(a0 | 8) >> 32)
            {
LABEL_140ee52:
                v6 = ((unsigned int)((0 CONCAT (unsigned int)a0) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)a0) / (v3 & 4294967295))) & 4294967295;
                v5 = v6 + 1;
                if ((char)_ccall(4, 24, v6 + 1, 0, 0))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1ee8); /* do not return */
                if ((char)_ccall(0, 48, v5, v3, 0))
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14e1ee8); /* do not return */
                return v5 * v3;
            }
LABEL_140ee24:
            v4 = (unsigned long long)((0 CONCAT a0) % v3) CONCAT (unsigned long long)((0 CONCAT a0) / v3);
            if ((char)_ccall(4, 24, v4 + 1, 0, 0))
            {
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1ee8); /* do not return */
            }
            else if (!((char)_ccall(0, 48, v4 + 1, v3, 0)))
            {
                return (v4 + 1) * v3;
            }
            else
            {
                core::panicking::panic_const::panic_const_mul_overflow(&g_14e1ee8); /* do not return */
            }
        }
    }
    if (!(a0 | v3) >> 32)
        goto LABEL_140ee52;
    goto LABEL_140ee24;
}
