long long ruff_python_formatter::expression::expr_number_literal::normalize_floating_number(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    void* v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    void* v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    unsigned int v9;  // edx
    char v10;  // bl
    unsigned long v11;  // rax
    unsigned long v12;  // r13
    unsigned long v13;  // rbx
    unsigned long long v14;  // rax
    unsigned long long v16;  // rax
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long v22;  // r12

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v6 = 0;
    v4 = a1;
    v5 = a1 + a2;
    v8 = v4.next();
    v10 = v9 == 46;
    if (v9 == 46)
    {
        v0.push(48);
        v0.push(46);
        v22 = v8 + 1;
    }
    else
    {
        v22 = 0;
    }
    while (true)
    {
        v11 = v4.next();
        if (v9 <= 68)
        {
            v10 = 1;
            if (v9 == 46)
                continue;
        }
        else
        {
            v12 = v11;
            if (!(v9 != 69 && v9 != 101))
            {
                if ((v10 & 1))
                {
                    v13 = a2;
                    v16 = v22.get(v12, a1, a2);
                    if (!v16)
                    {
                        core::str::slice_error_fail(a1, v13, v22, v12, 0x97db30); /* do not return */
                    }
                    v0.spec_extend(v16, v17 + v16);
                    v0.push(48);
                    v22 = v12;
                    if (v9 != 69)
                        goto LABEL_70bf88;
                }
                else
                {
                    v13 = a2;
                    if (v9 != 69)
                    {
LABEL_70bf88:
                        v19 = v4.next();
                        if (v9 == 43)
                        {
LABEL_70bf97:
                            v12 = v19;
                            v20 = v22.get(v19, a1, v13);
                            if (!v20)
                                core::str::slice_error_fail(a1, v13, v22, v12, &g_97db60); /* do not return */
                            v0.spec_extend(v20, v17 + v20);
                            v22 = v12 + 1;
                            if (!v22)
                            {
                                *((unsigned long long *)&v3[8]) = a1;
                                *((unsigned long *)&v3[16]) = v13;
                                *((unsigned long long *)v3) = 0x8000000000000000;
                                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                            }
                            goto LABEL_70bf35;
                        }
LABEL_70bf2c:
                        if (!v22)
                        {
                            *((unsigned long long *)&v3[8]) = a1;
                            *((unsigned long *)&v3[16]) = v13;
                            *((unsigned long long *)v3) = 0x8000000000000000;
                            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                        }
                        goto LABEL_70bf35;
                    }
                }
                v18 = v22.get(v12, a1, v13);
                if (!v18)
                    core::str::slice_error_fail(a1, v13, v22, v12, &g_97db48); /* do not return */
                v0.spec_extend(v18, v17 + v18);
                v0.push(101);
                v22 = v12 + 1;
                v19 = v4.next();
                if (v9 == 43)
                    goto LABEL_70bf97;
                goto LABEL_70bf2c;
            }
            else if (v9 == 0x110000)
            {
                if ((v10 & 1))
                {
                    v13 = a2;
                    v14 = v22.get(a1, a2);
                    if (!v14)
                        core::str::slice_error_fail(a1, v13, v22, v13, &g_97db18); /* do not return */
                    v0.spec_extend(v14, v17 + v14);
                    v0.push(48);
                    v22 = v13;
                    goto LABEL_70bf2c;
                }
                else
                {
                    v13 = a2;
                    if (!v22)
                    {
                        *((unsigned long long *)&v3[8]) = a1;
                        *((unsigned long *)&v3[16]) = v13;
                        *((unsigned long long *)v3) = 0x8000000000000000;
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                    }
LABEL_70bf35:
                    v21 = v22.get(a1, v13);
                    if (!v21)
                        core::str::slice_error_fail(a1, v13, v22, v13, &g_97db78); /* do not return */
                    v0.spec_extend(v21, v9 + v21);
                    *((unsigned long long *)&v3[16]) = 0;
                    *((int128_t *)v3) = *((int128_t *)&v0);
                    return 0;
                }
            }
        }
    }
}
