long long fish::pager::Pager::select_next_completion_in_direction(void* a0, char a1, struct_0 *a2)
{
    unsigned int v0;  // [bp-0x168]
    void* v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long v4;  // r12
    unsigned long v5;  // rdx
    unsigned long v6;  // rax
    char v7;  // bpl
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rcx
    unsigned long v10;  // rcx
    unsigned long long v11;  // r15
    unsigned long long v12;  // 4100
    unsigned long long v13;  // r15
    unsigned long v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long v16;  // rax

    v4 = (long long)a0[168];
    if (!v4)
        return 0;
    if ((*((char *)a0) & 1))
    {
        v5 = (long long)a0[8];
        if (a1 < 6)
        {
            v2 = v5;
            v1 = a0;
            a0.get_selected_row(a2);
            a0.get_selected_column(a2);
            if (!(a2->field_10 & 1))
            {
                core::option::unwrap_failed(&g_14dc440); /* do not return */
            }
            else if (a2->field_18)
            {
                a2->field_18 - 1.max(1);
                goto (long long)(g_9f4fac[a1] + (char *)&g_9f4fac[0]);
            }
            else
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14dc458); /* do not return */
            }
        }
        if (a1 != 6)
        {
            v6 = a1;
            if ((unsigned int)v6 == 8)
            {
                v7 = 1;
                v8 = vvar_55{reg 56} & 0xffffffffffffff00 | 1;
                v9 = 0;
            }
            else if (v5)
            {
                v6 = v5 - 1;
                v9 = 1;
                v8 = 0;
            }
            else
            {
                v6 = v4 - 1;
LABEL_13d868c:
                v9 = 1;
                v8 = 0;
                if (v5 == v6)
                    return 0;
            }
        }
        else
        {
            v10 = v5;
            v6 = v10 + 1;
            if ((char)_ccall(4, 24, v10 + 1, 0, (unsigned long long)(char)(a1 < 6)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14dc5c0); /* do not return */
            if (v6 >= v4)
                v6 = 0;
            goto LABEL_13d868c;
        }
    }
    else
    {
        v9 = 1;
        v6 = 0;
        v8 = 0;
        v0 = 282;
        if ((*((char *)&v0 + ((a1 & 31) >> 3)) >> (a1 & 31 & 7) & 1))
            return 0;
        v0 = 100;
        if (!(*((char *)&v0 + ((a1 & 31) >> 3)) >> (a1 & 31 & 7) & 1))
        {
            v8 = 0;
            v6 = v4 - 1;
        }
    }
    *((unsigned long long *)a0) = v9;
    *((unsigned long *)&a0[8]) = v6;
    v11 = a2->field_108;
    v12 = a2->field_100;
    v13 = v11 - v12;
    if (v11 < v12)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dc5d8); /* do not return */
    v8 = v8 & 0xffffffffffffff00 | 1;
    if (!v11 == v12 && !v7)
    {
        v15 = -(((char)a0.get_selected_row_given_rows(a2->field_f0) & 1) < 1) | v14;
        v16 = (long long)a0[264];
        if (v16 > v15)
        {
            *((unsigned long long *)&a0[264]) = v15;
            v16 = v14;
        }
        if ((char)__CFADD__(v16, v13))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14dc5f0); /* do not return */
        }
        else if (v16 + v13 <= v15)
        {
            if (a1 - 1 >= 2 || (char)a0[272] || !a2->field_110)
            {
                if (v15 >= v13)
                    *((unsigned long long *)&a0[264]) = v15 - v13 + 1;
                else
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14dc608); /* do not return */
            }
            *((char *)&a0[272]) = 1;
        }
    }
    return v8 & 4294967295;
}
