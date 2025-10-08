long long fish::screen::Screen::desired_append_char(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned int a5, unsigned long long a6, unsigned long long a7, unsigned long a8)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long v1;  // r13
    unsigned long v2;  // r13
    unsigned long v3;  // rsi
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r14
    unsigned long long v7;  // r14
    unsigned long long v9;  // r14
    unsigned long long v10;  // cc_dep2
    unsigned long v11;  // rax
    unsigned long v13;  // rax
    unsigned long long v14;  // cc_ndep
    unsigned long long v17;  // rbp

    v1 = a0->field_30;
    switch (a4)
    {
    case 13:
        *((unsigned long long *)(a0.line_mut(v1) + 16)) = 0;
        a0->field_28 = 0;
        v5 = vvar_70{reg 56} & 0xffffffffffffff00 | 1;
        break;
    case 10:
        v2 = v1 + 1;
        if ((char)_ccall(4, 24, v1 + 1, 0, (unsigned long long)(char)(a4 < 10)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1a08); /* do not return */
        if (v2 > a3)
            goto LABEL_140c9dd;
        a0.create_line(v2);
        *((char *)(a0.line_mut(a0->field_30) + 32)) = 0;
        v3 = a0->field_30 + 1;
        if ((char)_ccall(4, 24, a0->field_30 + 1, 0, (unsigned long long)(char)(v2 < a3)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1a20); /* do not return */
        a0->field_30 = a0->field_30 + 1;
        a0->field_28 = 0;
        if (a6 >> 62)
            core::panicking::panic_const::panic_const_mul_overflow(&g_14e1a38); /* do not return */
        v4 = a6 * 4;
        v5 = a7 + v4;
        if ((char)__CFADD__(a7, v4))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1a50); /* do not return */
        *((unsigned long long *)(a0.line_mut(v3) + 24)) = v5;
        v6 = ~(v4);
        do
        {
            v6 += 1;
            v5 = v5 & 0xffffffffffffff00 | a7 == v6;
        } while (a7 != v6 && (char)a0.desired_append_char(a1, a2, a3, 32, 0, a6, a7, 1));
    default:
        if (v1 <= a3)
        {
            v0 = a0->field_8;
            v7 = a0->field_0;
            a0.create_line(v1);
            v9 = v7;
            v10 = 1;
            if (v9 == 1)
            {
                v11 = a0->field_28 + a8;
                if ((char)__CFADD__(a0->field_28, a8))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1a68); /* do not return */
                v9 = v11;
                v10 = v0;
                if (v9 <= v10)
                    goto LABEL_140ca23;
            }
            v13 = a0->field_30 + 1;
            if ((char)_ccall(4, 24, a0->field_30 + 1, 0, (unsigned long long)(char)(v9 < v10)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1a80); /* do not return */
            if (v13 > a3)
                goto LABEL_140c9dd;
            *((char *)(a0.line_mut(a0->field_30) + 32)) = 1;
            v1 = a0->field_20;
            a0.add_line();
            v14 = v13 < a3;
            if ((char)_ccall(4, 24, a0->field_30 + 1, 0, (unsigned long long)(char)(v13 < a3)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1a98); /* do not return */
            a0->field_30 = a0->field_30 + 1;
            a0->field_28 = 0;
LABEL_140ca23:
            a0.line_mut(v1).append(a4, a5, a1, a2);
            v17 = a8 + a0->field_28;
            if ((char)__CFADD__(a8, a0->field_28))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e1ab0); /* do not return */
            a0->field_28 = v17;
            v5 = v17 & 0xffffffffffffff00 | 1;
            if (!(v17 < v0 & (char)v7))
            {
                *((char *)(a0.line_mut(v1) + 32)) = 1;
                a0->field_28 = 0;
                if ((char)_ccall(4, 24, a0->field_30 + 1, 0, _ccall(17, (unsigned long long)((char)(v17 < v0) & (char)v7), 0, v14)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e1ac8); /* do not return */
                a0->field_30 = a0->field_30 + 1;
                break;
            }
        }
        else
        {
LABEL_140c9dd:
            v5 = 0;
            break;
        }
    }
    return v5 & 4294967295;
}
