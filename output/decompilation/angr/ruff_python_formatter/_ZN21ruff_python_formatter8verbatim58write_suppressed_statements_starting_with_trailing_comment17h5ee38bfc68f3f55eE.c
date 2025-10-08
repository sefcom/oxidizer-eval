long long ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_trailing_comment(unsigned int *a0, unsigned long long *a1, unsigned long long a2, struct_3 *a3)
{
    struct_5 *v0;  // [bp-0x178]
    unsigned int v1;  // [bp-0x16c]
    unsigned long v2;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x160]
    char v4;  // [bp-0x158]
    char v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x138]
    unsigned long v7;  // [bp-0x130]
    int v8;  // [bp-0x128], Other Possible Types: struct_0 *, unsigned int, unsigned long long
    unsigned int v9;  // [bp-0x124]
    char v10;  // [bp-0x120], Other Possible Types: unsigned int
    char v11;  // [bp-0x118]
    char v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0xf8]
    unsigned long long v14[2];  // [bp-0xe8]
    unsigned long v15;  // [bp-0xe0]
    unsigned long long v16;  // [bp-0xd8]
    unsigned long v17;  // [bp-0xd0]
    unsigned long long v18;  // [bp-0xa8]
    unsigned long v19;  // [bp-0x98]
    unsigned long v20;  // [bp-0x90]
    char v21;  // [bp-0x88]
    char v22;  // [bp-0x58]
    char v23;  // [bp-0x48]
    unsigned long long v24;  // [bp-0x38]
    struct_4 *v26;  // rax
    unsigned long long v27[2];  // rax
    unsigned long v28;  // rbx
    unsigned long v29;  // r15
    unsigned long v30;  // rbp
    unsigned long long v31;  // rax
    unsigned long v32;  // r13
    unsigned long long v33;  // rdx
    struct_0 *v34;  // rbx
    void* v35;  // rdx
    unsigned int v36;  // eax
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rdi
    void* v40;  // rax
    unsigned int *v41;  // rax
    unsigned int *v42;  // rdx

    v26 = a3->field_8->field_30(a3->field_0);
    v26->field_10.inc_strong();
    v17 = v26->field_10;
    v27 = a3->field_8->field_30(a3->field_0);
    v28 = v27[0];
    v29 = v27[1];
    v30 = *(a1);
    v1 = v30.from_stmt(v28, v29);
    v31 = (unsigned long long)a1.from();
    v32 = v26->field_10 + 16;
    v2 = v31;
    v3 = v33;
    v16 = v32.trailing(&(char)v2);
    v18 = v16;
    v19 = v28;
    v20 = v29;
    v21 = 0;
    (char)v2.next(&v18);
    if ((int)v2 == 4)
        core::option::expect_failed("Suppressed statement to have trailing commentsExpected SuppressionStarts", 46, &g_97f888); /* do not return */
    v13 = v6;
    memcpy(&v12, &v5, 16);
    memcpy(&v11, &v4, 16);
    *((int128_t *)&v8) = *((int128_t *)&v2);
    (char)v2.unwrap_suppression_starts(&(char)v8);
    v34 = *((long long *)&v4);
    if (v33)
    {
        v35 = 0;
        do
        {
            *(8 + v18 + (char *)v35) = 1;
            v35 += 12;
        } while (v33 * 12 != v35);
    }
    v34->field_8 = 1;
    (char)v2.fmt(a1, a3);
    v36 = v2;
    if (v36 == 4)
    {
        v34->field_8 = 0;
        v8 = v34;
        (char)v2.fmt(&(char)v8, a3);
        v36 = v2;
        if (v36 != 4)
            goto LABEL_72a922;
        v7 = v30;
        v24 = *((long long *)&v21);
        memcpy(&v23, &v19, 16);
        memcpy(&v22, &v18, 16);
        (char)v2.next(&v22);
        if (v2 != 4)
            goto (long long)(g_487bbc[v2] + (char *)&g_487bbc[0]);
        v37 = a2;
        v38 = v14[0];
        if (v38 != v14[1])
        {
            v14[0] = v38 + 128;
            v8 = v38;
            v10 = 5;
            v2 = (unsigned long long)v38.from();
            v3 = v33;
            ruff_python_formatter::verbatim::write_suppressed_statements(a0, v34, &(char)v8, v32.leading(&(char)v2), v33, a2, a3);
        }
        else
        {
            v40 = v16 + v15 * 12;
            if (v40 == 12 || !v33)
            {
                v41 = a0;
                v0->field_4[0] = v7;
                goto LABEL_72a8d0;
            }
            if (v34->field_4 > (int)v40[8])
                core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f8a0); /* do not return */
            v8 = v34->field_4;
            v9 = (int)v40[8];
            v10 = v1;
            (char)v2.fmt(&v8, a3);
            v36 = v2;
            if (v36 != 4)
                goto LABEL_72a922;
            v41 = a0;
            v0->field_4[0] = v7;
LABEL_72a8d0:
            *(v41) = 4;
        }
    }
    else
    {
LABEL_72a922:
        v42 = a0;
        *((int *)((char *)&v0->field_4[1] + 4)) = *((int *)&(&v4)[4]);
        *((int128_t *)&(&v0->field_0)[1]) = *((int128_t *)((char *)&v2 + 4));
        v0->field_0 = v36;
    }
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v17);
}
