long long fish::tokenizer::quote_end(unsigned int *a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep
    unsigned long long v5;  // cc_ndep
    unsigned long v6;  // rbx
    unsigned int v7;  // eax
    unsigned int v8;  // cc_dep1
    unsigned long long v9;  // cc_op
    unsigned long v10;  // cc_dep1
    unsigned long v13;  // rbx
    unsigned long long v14;  // cc_dep2
    unsigned int v16;  // cc_dep1
    unsigned long v17;  // rax
    unsigned long v18;  // rax
    unsigned int v22;  // cc_dep1
    unsigned long long v23;  // cc_op
    unsigned long v24;  // cc_dep1
    void* v25;  // cc_dep2
    unsigned long v27;  // rbx

    v5 = _ccall(v1, v2, v3, v4);
    v6 = a2 + 1;
    if (!((char)_ccall(4, 24, a2 + 1, 0, _ccall(v1, v2, v3, v4))))
    {
        if (a3 == 34)
        {
            do
            {
                v7 = a0.try_char_at(a1, v6);
                if (v7 > 91)
                {
                    v8 = v7;
                    if (v7 == 92)
                    {
                        v5 = v8 < 92;
                        v9 = 24;
                        v10 = v6 + 1;
                        v13 = v6 + 1;
                        v14 = 0;
                        if (!((char)_ccall(4, 24, v6 + 1, 0, (unsigned long long)(char)(v8 < 92))))
                            continue;
                    }
                    else
                    {
                        v9 = 7;
                        v10 = v7;
                        v13 = v6;
                        v14 = 0x110000;
                        if (v7 == 0x110000)
                            return 0;
                    }
                }
                else
                {
                    v16 = v7;
                    if (v7 == 36)
                    {
                        v17 = v6;
                        v5 = v16 < 36;
                        v18 = v17 + 1;
                        if ((char)_ccall(4, 24, v17 + 1, 0, (unsigned long long)(char)(v16 < 36)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14e3e88); /* do not return */
                        v9 = 8;
                        v13 = v6;
                        v10 = v18;
                        v14 = a1;
                        if (v10 < v14)
                        {
                            v9 = 7;
                            v13 = v6;
                            v10 = a0[v18];
                            v14 = 40;
                            if (a0[v18] == 40)
                                return 1;
                        }
                    }
                    else
                    {
                        v9 = 7;
                        v10 = v7;
                        v13 = v6;
                        v14 = 34;
                        if (v7 == 34)
                            return 1;
                    }
                }
                v5 = _ccall(v9, v10, v14, v5);
                v6 = v13 + 1;
            } while (!((char)_ccall(4, 24, v13 + 1, 0, _ccall(v9, v10, v14, v5))));
        }
        else
        {
            do
            {
                v22 = a0.try_char_at(a1, v6);
                if (v22 == 92)
                {
                    v5 = v22 < 92;
                    v23 = 24;
                    v24 = v6 + 1;
                    v25 = 0;
                    v27 = v6 + 1;
                    if (!((char)_ccall(4, 24, v6 + 1, 0, (unsigned long long)(char)(v22 < 92))))
                        continue;
                }
                else if (v22 != 0x110000)
                {
                    v23 = 7;
                    v24 = v22;
                    v25 = a3;
                    v27 = v6;
                    if (v22 == a3)
                        return 1;
                }
                else
                {
                    return 0;
                }
                v5 = _ccall(v23, v24, v25, v5);
                v6 = v27 + 1;
            } while (!((char)_ccall(4, 24, v27 + 1, 0, _ccall(v23, v24, v25, v5))));
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(&g_14e3e58); /* do not return */
}
