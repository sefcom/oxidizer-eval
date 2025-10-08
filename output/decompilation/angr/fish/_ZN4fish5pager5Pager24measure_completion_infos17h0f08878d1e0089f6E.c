long long fish::pager::Pager::measure_completion_infos(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    void* v3;  // [sp-0x38]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7[18];  // r13
    unsigned long long v8;  // rax
    unsigned long long v9[3];  // rdx
    unsigned long long v10[3];  // rdx
    unsigned long long v12;  // r12
    unsigned long long v13;  // r15
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // r15
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    char v20;  // dil
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24[3];  // rdx
    unsigned long long v25[3];  // rdx
    unsigned long long v27;  // r14
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rax
    unsigned long long v30;  // r12
    unsigned long long v31;  // rax
    char v32;  // dil
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rax

    v5 = fish::screen::wcswidth_rendered(a0->field_d0, a0->field_d8);
    v6 = a0->field_c0;
    if (!v6)
        return v6;
    v0 = &a0->field_b8[v6];
    if (v5 >= 0)
    {
        do
        {
            v1 = v7[1];
            v2 = v7[1] + v7[2] * 24;
            v3 = 0;
            v8 = v1.next();
            if (v9)
            {
                do
                {
                    if (v8)
                    {
                        if (!((char)__CFADD__(v7[16], 2)))
                            v7[16] = v7[16] + 2;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dc230); /* do not return */
                    }
                    v12 = fish::screen::wcswidth_rendered(v10[1], v10[2]);
                    v13 = 0.unwrap_or_default(v5);
                    v14 = v13 + v7[16];
                    if ((char)__CFADD__(v13, v7[16]))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dc248); /* do not return */
                    v7[16] = v14;
                    if (v12 >= 0)
                    {
                        v15 = 0.unwrap_or_default(v12);
                        v16 = v14 + v15;
                        if ((char)__CFADD__(v14, v15))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dc260); /* do not return */
                    }
                    else
                    {
                        v18 = 1.unwrap_or_default(v17);
                        v16 = v14 + v18;
                        if ((char)__CFADD__(v14, v18))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dc260); /* do not return */
                    }
                    v7[16] = v16;
                    v8 = v1.next();
                    v10 = v9;
                } while (v10);
            }
            v19 = fish::screen::wcswidth_rendered(v7[4], v7[5]);
            if (v19 >= 0)
            {
                v20 = 0;
                v21 = v19;
            }
            else
            {
                v20 = 1;
            }
            v7[17] = v20.unwrap_or_default(v21);
            v7 += 1;
        } while (v7 != v0);
        return v22;
    }
    else
    {
        do
        {
            v1 = v7[1];
            v2 = v7[1] + v7[2] * 24;
            v3 = 0;
            v23 = v1.next();
            if (v24)
            {
                do
                {
                    if (v23)
                    {
                        if (!((char)__CFADD__(v7[16], 2)))
                            v7[16] = v7[16] + 2;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dc230); /* do not return */
                    }
                    v27 = fish::screen::wcswidth_rendered(v25[1], v25[2]);
                    v29 = 1.unwrap_or_default(v28);
                    v30 = v7[16] + v29;
                    if ((char)__CFADD__(v7[16], v29))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dc248); /* do not return */
                    v7[16] = v30;
                    if (v27 >= 0)
                        v29 = 0.unwrap_or_default(v27);
                    if ((char)__CFADD__(v30, v29))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dc260); /* do not return */
                    v7[16] = v30 + v29;
                    v23 = v1.next();
                    v25 = v24;
                } while (v25);
            }
            v31 = fish::screen::wcswidth_rendered(v7[4], v7[5]);
            if (v31 >= 0)
            {
                v32 = 0;
                v33 = v31;
            }
            else
            {
                v32 = 1;
            }
            v7[17] = v32.unwrap_or_default(v33);
            v7 += 1;
        } while (v7 != v0);
        return v34;
    }
}
