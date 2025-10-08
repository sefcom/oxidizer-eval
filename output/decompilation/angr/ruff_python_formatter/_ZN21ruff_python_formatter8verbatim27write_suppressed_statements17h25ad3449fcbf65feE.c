long long ruff_python_formatter::verbatim::write_suppressed_statements(struct_0 *a0, struct_1 *a1, void* a2, unsigned long long a3, unsigned long a4, unsigned long long a5[2], struct_4 *a6)
{
    struct_0 *v0;  // [bp-0x1a8]
    unsigned int v1;  // [bp-0x19c]
    unsigned long long v2[1];  // [bp-0x198], Other Possible Types: unsigned long long
    char v3;  // [bp-0x190]
    unsigned long v4;  // [bp-0x180]
    unsigned long v5;  // [bp-0x178]
    unsigned long v6;  // [bp-0x170]
    unsigned long long v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    char v9;  // [bp-0x120], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0x120]
    unsigned int v11;  // [bp-0x11c]
    unsigned long long v12;  // [bp-0x118]
    char v13;  // [bp-0x10c]
    unsigned long long v14;  // [bp-0xc8]
    unsigned long v15;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xb0]
    unsigned long v17;  // [bp-0xb0]
    unsigned int v18;  // [bp-0xac]
    unsigned int v19;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long v20;  // [bp-0xa0]
    unsigned long v21;  // [bp-0x98]
    char v22;  // [bp-0x90]
    unsigned long long v23;  // [bp-0x68]
    unsigned long long v24;  // [bp-0x30]
    unsigned long long v25;  // rbx
    struct_5 *v26;  // rax
    unsigned long long v27[2];  // rax
    unsigned long v28;  // rsi
    unsigned long v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    void* v36;  // rax
    unsigned int v37;  // eax
    unsigned int v38;  // eax
    struct_0 *v39;  // rcx
    struct_0 *v40;  // rdx
    unsigned int v41;  // [bp-0xb0]

    v24 = v25;
    v26 = a6->field_8->field_30(a6->field_0);
    v26->field_10.inc_strong();
    v15 = v26->field_10;
    v27 = a6->field_8->field_30(a6->field_0);
    v28 = v27[0];
    v29 = v27[1];
    *((int128_t *)&v2) = *((int128_t *)a2);
    v6 = v28;
    v1 = *((long long *)a2).from_stmt(v6, v29);
    v14 = a5[0];
    v5 = v15 + 16;
    v30 = a3;
    v4 = v29;
    while (true)
    {
        v16 = v30;
        v19 = v23;
        v20 = v6;
        v21 = v29;
        v22 = 1;
        (char)v10.next(&v41);
        if (*((long long *)&v9) != 4)
            goto (long long)(*((int *)(4750284 + 4 * *((long long *)&v9))) + (char *)&g_487bcc[0]);
        v9 = (unsigned long long)(char)v2.from();
        v12 = v31;
        v17 = v5.trailing(&(char)v10);
        v19 = v31;
        v20 = v6;
        v21 = v4;
        v22 = 1;
        v7.next(&v41);
        if (v7 != 4)
            goto (long long)(*((int *)(4750300 + 4 * v7)) + (char *)&g_487bdc[0]);
        v32 = v14;
        if (v32 == a5[1])
            break;
        v33 = v32 + 128;
        a5[0] = v33;
        v2 = v32;
        v3 = 5;
        v9 = (unsigned long long)v32.from();
        v12 = v31;
        v30 = v5.leading(&(char)v10);
        v14 = v33;
        v29 = v4;
    }
    v7 = (unsigned long long)v2.from();
    while (true)
    {
        v8 = v35;
        v10 = v34;
        v12 = v35;
        v36 = v5.trailing(&(char)v10) + v31 * 12;
        if (v36 == 12 || !v31)
        {
            v34 = v7.last_child_in_body();
            if (v34 != 94)
            {
                v7 = v34;
            }
            else
            {
                ruff_python_formatter::statement::trailing_semicolon(&(char)v10, v7, v8, v6, v4);
                (char)v2.range();
                v37 = (char)v10.map_or((unsigned int)v31);
                break;
            }
        }
        else
        {
            v37 = (int)v36[8];
            break;
        }
    }
    if (a1->field_4 > v37)
        core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f908); /* do not return */
    v41 = a1->field_4;
    v18 = v37;
    v19 = v1;
    (char)v10.fmt(&v41, a6);
    v38 = v10;
    if (v38 == 4)
    {
        v39 = a0;
        v0->field_4[0] = v2;
    }
    else
    {
        v40 = a0;
        *((int *)((char *)&v0->field_4[1] + 4)) = *((int *)&v13);
        v39 = v0;
        *((int128_t *)&(&v0->field_0)[1]) = *((int128_t *)&v11);
    }
    v39->field_0 = v38;
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v15);
}
