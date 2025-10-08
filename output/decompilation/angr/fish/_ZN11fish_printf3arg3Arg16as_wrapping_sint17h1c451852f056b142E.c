long long fish_printf::arg::Arg::as_wrapping_sint(void* a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    char v4;  // cl
    unsigned long long v5;  // rax
    char v6;  // cl
    unsigned long long v7;  // rax

    v0 = v2;
    v3 = a1->field_0;
    if (v3 == 4)
    {
        v7 = a1->field_8;
        *((char *)a0) = 0;
        *((unsigned long long *)&a0[8]) = v7;
        return a0;
    }
    else if (v3 == 5)
    {
        v4 = a1->field_1;
        if (!v4)
        {
            core::panicking::panic_const::panic_const_sub_overflow(&g_1517dd0); /* do not return */
        }
        else if (v4 < 65)
        {
            v5 = a1->field_8;
            v6 = v4 + 63;
            *((char *)a0) = v5 >> 63;
            *((unsigned long long *)&a0[8]) = ((v4 + 63 & 63) ? 2 << (v6 & 63) : 2 << (v6 & 63)) - 1 & v5;
            return a0;
        }
        else
        {
            core::panicking::panic_const::panic_const_shl_overflow(&g_1517de8); /* do not return */
        }
    }
    else
    {
        *((unsigned short *)a0) = 770;
        return a0;
    }
}
