long long fish_printf::fmt_fp::decimal::Decimal::shift_left(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x58]
    int v1;  // [bp-0x48]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r13
    unsigned int v6;  // ebp
    unsigned int *v7;  // rax
    unsigned long v8;  // rax
    unsigned long v9;  // rcx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long v13;  // rax

    if (!a1)
        return v13;
    v3 = a1;
    while (true)
    {
        v4 = v3;
        v5 = v4.min(29);
        v0.iter(a0);
        if (v5 <= 63)
        {
            v6 = 0;
            if (v1.next_back())
                goto LABEL_14403ce;
            while (true)
            {
                v0 = v1;
                v1 = v0;
                if (!v1.next_back() && v6)
                    a0.push_front(v6);
                do
                {
LABEL_14403ce:
                    v8 = *(v7) << ((char)v5 & 63);
                    v9 = v6;
                    v10 = v9 + v8;
                    if ((char)__CFADD__(v9, v8))
                        core::panicking::panic_const::panic_const_add_overflow(&g_1517ea8); /* do not return */
                    v6 = (v10 >> 9) / 1953125;
                    *(v7) = v10 - v6 * 0x3b9aca00;
                    v7 = v1.next_back();
                } while (v7);
            }
        }
        else
        {
            if (v1.next_back())
                break;
            v0 = v1;
            v1 = v0;
            if (v1.next_back())
                break;
        }
        v11 = a0.trim_trailing_zeros();
        v12 = v4 - v5;
        if (v4 < v5)
            core::panicking::panic_const::panic_const_sub_overflow(&g_1517e90); /* do not return */
        v3 = v12;
        if (v4 == v5)
            return v11;
    }
    core::panicking::panic_const::panic_const_shl_overflow(&g_1517ea8); /* do not return */
}
