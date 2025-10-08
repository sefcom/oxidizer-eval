void fish::tokenizer::Tokenizer::read_string(void* a0, struct_0 *a1)
{
    unsigned int v0;  // [bp-0xec]
    unsigned long v1;  // [bp-0xe8]
    void* v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    void* v4;  // [bp-0xd0]
    void* v5;  // [bp-0xc8]
    unsigned long long v6;  // [bp-0xc0]
    void* v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    void* v9;  // [bp-0xa8]
    void* v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    void* v12;  // [bp-0x90]
    void* v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    void* v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    struct_1 *v17;  // [bp-0x68]
    char v18;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x58]
    char v20;  // [bp-0x50], Other Possible Types: unsigned long long
    char v21;  // [bp-0x4e]
    uint128_t v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x10]
    unsigned long long v25;  // r15
    unsigned long v26;  // r12
    unsigned long v27;  // r15
    unsigned long long v28;  // cc_ndep
    unsigned int v29;  // ebp
    unsigned long v30;  // rax
    char v31;  // al
    unsigned long long v32;  // cc_op
    unsigned long v33;  // cc_dep1
    unsigned long v34;  // r15
    unsigned long long v35;  // rsi
    char v36;  // al
    unsigned long long v37;  // rsi
    char v38;  // cl
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rdi
    unsigned long v43;  // r8
    char v44;  // cl

    v23 = v25;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v2 = 0;
    v3 = 4;
    v4 = 0;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v26 = a1->field_18;
    v27 = a1->field_30;
    v1 = v27;
    if (v1 == v26)
    {
        v0 = 0;
LABEL_141cdd9:
        v18.new(1);
        v18.set_offset(v1);
        if (a1->field_30 < v1)
        {
            v8 = &g_14e3df8;
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e3df8); /* do not return */
        }
        v18.set_length(a1->field_30 - v1);
        v21 = (char)v0 >> 2 & 1;
        v17->field_0 = *((int128_t *)&v18);
        v17->field_10 = *((int *)&v20);
    }
    else
    {
        v9 = 0;
        v16 = &g_14e3d80;
        v8 = &g_14e3d08;
        v0 = 0;
        do
        {
            v29 = a1->field_10.char_at(v26, v27);
            v30 = v0;
            if (!((char)v30 & 8))
            {
                v31 = fish::tokenizer::myal(v29);
                v32 = 17;
                v33 = v31;
                if (v31)
                    continue;
                if (v29 - 34 <= 91)
                    goto (long long)(g_9f62b0[34 + v29] + (char *)&g_9f62b0[0]);
                v32 = 5;
                v33 = (char)v0;
                if ((char)v0)
                    continue;
                v28 = (char)v33 < 0;
                v34 = v27 + 1;
                if ((char)_ccall(4, 24, v27 + 1, 0, (unsigned long long)(char)((char)v33 < 0)))
                {
                    v16 = &g_14e3d80;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e3d80); /* do not return */
                }
                v35 = 0x110000;
                if (v34 < v26)
                    v35 = *((int *)(a1->field_10 + v34 * 4));
                v36 = fish::tokenizer::tok_is_string_character(v29, v35);
                v0 = 0;
                v32 = 17;
                v33 = v36;
                if (v36)
                    continue;
            }
            else
            {
                v32 = 17;
                v33 = (char)v30 & 247;
                v0 = (unsigned int)v30 & 0xffffff00 | (char)v30 & 247;
            }
            v28 = _ccall(v32, v33, 0, v28);
            v27 = a1->field_30 + 1;
            if ((char)_ccall(4, 24, a1->field_30 + 1, 0, _ccall(v32, v33, 0, v28)))
            {
                v16 = &g_14e3e10;
                core::panicking::panic_const::panic_const_add_overflow(0x14e3e10); /* do not return */
            }
            v26 = a1->field_18;
            v37 = 0x110000;
            if (v27 < v26)
                v37 = *((int *)(a1->field_10 + v27 * 4));
            fish::tokenizer::is_token_delimiter(v29, v37);
            a1->field_30 = v27;
        } while (v27 != v26);
        if (a1->field_39)
            goto LABEL_141cdd9;
        v38 = v0;
        if (!v38)
            goto LABEL_141cdd9;
        if (!(v38 & 8))
        {
            if (!(v38 & 2))
            {
                if (!(v38 & 1))
                {
                    if ((v38 & 4))
                    {
                        v40 = &g_14e3db0;
                        v41 = "brace_offsets is emptyUnknown non-regular-text mode|| passed as redirection, this should have been handled as 'or' by the callerShould have consumed at least one character on successFailed to consume char";
                    }
                    else
                    {
                        v18 = &g_14e3cf8;
                        v19 = 1;
                        v20 = 8;
                        v22 = 0;
                        core::panicking::panic_fmt(&v18, &g_14e3d98); /* do not return */
                    }
                }
                else
                {
                    v40 = &g_14e3dc8;
                    v41 = "paran_offsets is emptybrace_offsets is emptyUnknown non-regular-text mode|| passed as redirection, this should have been handled as 'or' by the callerShould have consumed at least one character on successFailed to consume char";
                }
                core::option::expect_failed(v41, 22, v40); /* do not return */
            }
            v44 = 3;
            v43 = 0;
        }
        else if (a1->field_30)
        {
            v43 = a1->field_30 - 1;
            v44 = 4;
        }
        else
        {
            v8 = &g_14e3de0;
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e3de0); /* do not return */
        }
        a0.call_error(a1, v44, v1, v43, 0, 1, 1);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(0, 4);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(0, 8);
    return;
}
