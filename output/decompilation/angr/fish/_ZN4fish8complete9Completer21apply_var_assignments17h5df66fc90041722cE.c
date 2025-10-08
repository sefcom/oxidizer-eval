long long fish::complete::Completer::apply_var_assignments(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, unsigned long a3)
{
    void* v0;  // [bp-0xe8]
    int v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xc0]
    void* v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long long v8;  // [bp-0xa8]
    unsigned int v9;  // [bp-0xa8]
    unsigned short v10;  // [bp-0xa4]
    uint128_t v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13[3];  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long v15;  // [bp-0x70]
    unsigned long v16;  // [bp-0x68]
    void* v17;  // [bp-0x60]
    unsigned long v18;  // [bp-0x58]
    unsigned long v19;  // [bp-0x50]
    void* v20;  // [bp-0x48]
    unsigned long long v21;  // [bp-0x40]
    void* v22;  // [bp-0x38]
    unsigned long long v24;  // rax
    unsigned long long v25[3];  // 4096
    unsigned long long v26[3];  // r15
    unsigned long long v27;  // rax
    void* v28;  // rcx
    unsigned long long v29;  // cc_ndep
    unsigned long long v30;  // cc_ndep
    unsigned long long v31[3];  // rbx
    unsigned long long v32;  // r13
    unsigned long long v33;  // rdx
    unsigned long long v34;  // cc_ndep

    v24 = 0;
    v25 = a0;
    if (a3)
    {
        v26 = a1;
        v25 = a0;
        if ((unsigned int)a1[0] != 1)
        {
            v27 = a1.parser();
            *((int *)&v18) = (a1[0] == 2 ? a1[2] : ((unsigned int)a1[0] == 1 ? a1[1] : 472 + a1[1]));
            v19 = v27 + 472;
            v15 = v19;
            if (v18 != v19)
            {
                v5 = &g_14d60f0;
                v7 = 1;
                v8 = 8;
                v11 = 0;
                core::panicking::assert_failed(0, &v18, &v19, &v5, &g_14d6100); /* do not return */
            }
            v10 = 13;
            *((uint128_t *)&v6) = 0;
            v9 = 0;
            v12 = v27.push_block(&(char)v6);
            v14 = a3 * 24;
            v28 = 0;
            do
            {
                v30 = v29;
                v31 = v26;
                v17 = v28;
                v32 = *((long long *)(8 + v16 + (char *)v28)).index(*((long long *)(16 + v16 + (char *)v28)));
                if (!((char)fish::tokenizer::variable_assignment_equals_pos(v32, v33) & 1))
                    core::option::expect_failed("All variable assignments should have equals positionShould not delete var assignments", 52, &g_14d6118); /* do not return */
                v4 = 0.index(v33, v32, v33, &g_14d6130);
                v34 = _ccall(19, 0, 0, v30);
                if ((char)_ccall(4, 24, v33 + 1, 0, _ccall(19, 0, 0, v30)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d6148); /* do not return */
                v20 = 0;
                v21 = 8;
                v22 = 0;
                (char)v6.to_vec(v32.slice_from(v33, v33 + 1), a2);
                v26 = v31;
                v3 = *((long long *)&v9);
                *((int128_t *)&v1) = (int128_t)v6;
                fish::expand::expand_string(&v0, &v20, 1, v31, 0);
                if ((char)v33 == 2)
                {
                    (char)v6.into_iter(&v20);
                    v0.collect(&(char)v6);
                }
                else
                {
                    v0 = 0;
                    v2 = 8;
                    v3 = 0;
                }
                v8 = v3;
                v5 = v0;
                v7 = v2;
                v15.set(v4, v33, 17, &v5);
                if ((char)v26.check_cancel() && (char)v33 != 2)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v20);
                    break;
                }
                if ((char)v33 != 2)
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v20);
                v28 = v17 + 24;
                v29 = v34;
            } while (v14 != v28);
            a0[1] = v26.parser();
            a0[2] = v12;
            v24 = 1;
            v25[0] = v13;
        }
    }
    v25[0] = v24;
    return v24;
}
