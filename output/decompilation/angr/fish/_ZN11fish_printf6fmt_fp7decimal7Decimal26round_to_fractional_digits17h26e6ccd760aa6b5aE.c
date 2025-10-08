long long fish_printf::fmt_fp::decimal::Decimal::round_to_fractional_digits(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned int v4;  // cc_dep2
    unsigned int v5;  // eax
    unsigned long v6;  // r15
    unsigned long long v7;  // rax
    unsigned int v8;  // r15d
    unsigned int v9;  // ebp
    unsigned long long v10;  // cc_ndep
    unsigned int v11;  // r15d
    unsigned long long v12;  // cc_ndep
    unsigned int v13;  // r15d
    unsigned long v14;  // r14
    unsigned int *v15;  // rax
    unsigned int v16;  // r15d
    unsigned int *v17;  // rax
    unsigned int v18;  // ecx
    unsigned int *v19;  // rax
    unsigned int v20;  // ebp
    unsigned long long v21;  // cc_op
    unsigned long v22;  // cc_dep1
    unsigned int *v23;  // rax

    v0 = v2;
    v3 = a0.fractional_digit_count();
    v4 = v3;
    if (a1 >= (unsigned int)v3)
        return v3;
    v5 = core::num::<impl i32>::rem_euclid(a1);
    v12 = a1 < v4;
    v6 = a0->field_20 + 1;
    if (!((char)_ccall(0, 23, (unsigned long long)(a0->field_20 + 1), 0, (unsigned long long)(char)(a1 < v4))))
    {
        v7 = core::num::<impl i32>::div_euclid(a1);
        v8 = (unsigned int)v6 + (unsigned int)v7;
        if (((unsigned int)~(v6 & 4294967295 ^ v7 & 4294967295) & ((unsigned int)v6 ^ (unsigned int)v6 + (unsigned int)v7)) >= 0)
        {
            if (!((char)_ccall(8, 3, v6 & 4294967295, v7 & 4294967295, v12)))
            {
                v20 = v8;
            }
            else
            {
                v9 = 0;
                do
                {
                    v10 = v12;
                    v11 = v8;
                    a0.push_front(0);
                    v12 = _ccall(19, 0, 0, v10);
                    v13 = v11 + 1;
                    v8 = v13;
                    v20 = v9;
                } while (!((char)_ccall(4, 23, (unsigned long long)(v11 + 1), 0, _ccall(19, 0, 0, v10))));
            }
            v14 = (unsigned int)::0x143eb20::core::num::<impl u32>::pow(9 - v5);
            v15 = a0.index(v20, &g_1518028);
            if (!(unsigned int)v14)
                core::panicking::panic_const::panic_const_rem_by_zero(&g_1518040); /* do not return */
            v16 = ((unsigned int)((0 CONCAT *(v15)) % (v14 & 4294967295)) CONCAT (unsigned int)((0 CONCAT *(v15)) / (v14 & 4294967295))) >> 32;
            v17 = a0.index_mut(v20, &g_1518058);
            v18 = *(v17);
            if (*(v17) < v16)
                core::panicking::panic_const::panic_const_sub_overflow(&g_1518070); /* do not return */
            *(v17) = *(v17) - v16;
            if ((char)a0.should_round_up(v20, v16, v14 & 4294967295))
            {
                v19 = a0.index_mut(v20, &g_1518088);
                if ((char)__CFADD__(v14, *(v19)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_15180a0); /* do not return */
                *(v19) = (unsigned int)v14 + *(v19);
                if (*((int *)a0.index(v20, &g_15180b8)) >= 0x3b9aca00)
                {
                    do
                    {
                        *((unsigned int *)a0.index_mut(v20, &g_15180d0)) = 0;
                        if (v20 > 0)
                        {
                            v12 = _ccall(19, (unsigned long long)v20, 0, v12);
                            v21 = 27;
                            v22 = v20 - 1;
                            v20 -= 1;
                        }
                        else
                        {
                            v20 = 0;
                            v21 = 19;
                            v22 = 0;
                            a0.push_front(0);
                        }
                        v23 = a0.index_mut(v20, &g_15180e8);
                        v12 = _ccall(v21, v22, 0, v12);
                        if ((char)_ccall(4, 23, (unsigned long long)(*(v23) + 1), 0, _ccall(v21, v22, 0, v12)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_1518100); /* do not return */
                        *(v23) = *(v23) + 1;
                    } while (*((int *)a0.index(v20, &g_15180b8)) > 999999999);
                }
            }
            a0.truncate(v20 + 1);
            return a0.trim_trailing_zeros();
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(&g_1518010); /* do not return */
}
