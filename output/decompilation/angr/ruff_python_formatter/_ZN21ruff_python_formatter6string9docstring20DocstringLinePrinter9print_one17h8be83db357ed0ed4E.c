long long ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one(struct_4 *a0, struct_3 *a1, struct_5 *a2)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned short v1;  // [sp-0xa0]
    unsigned int v2;  // [bp-0x9c]
    unsigned long long v3;  // [sp-0x98]
    char v4;  // [bp-0x90]
    unsigned int v5;  // [bp-0x8c]
    struct_4 *v6;  // [bp-0x88]
    struct_2 *v7;  // [bp-0x80]
    unsigned int v8;  // [bp-0x78]
    unsigned int v9;  // [bp-0x74]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    char v12;  // [bp-0x60]
    char v13;  // [bp-0x48]
    struct_4 *v15;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // r13
    unsigned int v19;  // eax
    char v20;  // al
    unsigned long v21;  // rbx
    unsigned int v22;  // r15d
    unsigned int v23;  // ebx
    unsigned int v24;  // r12d
    unsigned int v25;  // ebx
    struct_2 *v26;  // r15
    unsigned long v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned int v32;  // eax
    struct_1 *v33;  // rax
    char v34;  // dil

    v15 = a0;
    v16 = core::str::<impl str>::trim_end_matches(a2->field_8, a2->field_10);
    if (v17)
    {
        v18 = v16;
        v7 = a1->field_88;
        v6 = a0;
        if (*((char *)(v7->field_0.options(v7->field_8) + 10)))
        {
            v0 = v18;
            v3 = v18 + v17;
            v4 = 0;
            if ((char)v0.try_fold().eq(1))
                goto LABEL_723db8;
            v19 = (unsigned int)a1->padding_0[112].text_len();
LABEL_723c97:
            v22 = v19;
            if (a1->field_94)
            {
                v23 = a2->field_18;
                v17 >> 32.unwrap(&g_97cc48);
                v24 = (unsigned int)v17 + v23;
                if ((char)__CFADD__(v17, v23))
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97cc60); /* do not return */
                v25 = v23 + v22;
                if (v25 > v24)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97f090); /* do not return */
                v8 = v25;
                v9 = v24;
                v26 = v7;
                (char)v0.fmt(&v8, v7);
                v16 = (unsigned int)v0;
                if ((unsigned int)v16 != 4)
                {
                    *((unsigned int *)((char *)&v6->field_4 + 4)) = v5;
                    *((int128_t *)&(&v6->field_0)[1]) = *((int128_t *)&v2);
                    v6->field_0 = v16;
                    return v16;
                }
            }
            else
            {
                v27 = v22;
                v28 = v27.get(v18, v17);
                if (!v28)
                    core::str::slice_error_fail(v18, v17, v27, v17, &g_97f130); /* do not return */
                v26 = v7;
                (char)v0.fmt(v28, a2, v7->field_0, v7->field_8);
                v16 = (unsigned int)v0;
                if ((unsigned int)v16 != 4)
                {
                    *((unsigned int *)((char *)&v6->field_4 + 4)) = v5;
                    *((int128_t *)&(&v6->field_0)[1]) = *((int128_t *)&v2);
                    v6->field_0 = v16;
                    return v16;
                }
            }
            v15 = v6;
            if (!a2->field_1c)
                goto LABEL_723ec1;
        }
        else
        {
            v12.from_str(v18, v17);
            v0 = v18;
            v3 = v18 + v17;
            v4 = 0;
            v20 = (char)v0.try_fold().eq(1);
            v21 = &a1->padding_0[112];
            v13.trim_start(&v12);
            if (v20 || *((int *)&v13) == 5)
            {
                v21.text_len();
            }
            else
            {
                v19 = (unsigned int)v21.text_len();
                if (*((int *)&v13) != 3)
                    goto LABEL_723c97;
            }
LABEL_723db8:
            (char)v0.from_str(v18, v17);
            v29 = (unsigned long long)(char)v0.columns();
            alloc::slice::<impl [T]>::repeat(&(char)v0, v29 - (unsigned long long)a1->padding_0[112].columns());
            (char)v8.add(&(char)v0, core::str::<impl str>::trim_start_matches(v18, v17), v17);
            v26 = v7;
            (char)v0.fmt(v10, v11, v7->field_0, v7->field_8);
            v32 = v0;
            v15 = v6;
            if (v32 != 4)
            {
                *((unsigned int *)((char *)&v15->field_4 + 4)) = v5;
                *((int128_t *)&(&v15->field_0)[1]) = *((int128_t *)&v2);
                v15->field_0 = v32;
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
            }
            v16 = (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v8);
            if (!a2->field_1c)
            {
LABEL_723ec1:
                v1 = 513;
                v33 = v26->field_8;
LABEL_723ecf:
                v16 = v33->field_18(v34, &v1);
            }
        }
    }
    else if (!a2->field_1c)
    {
        v1 = 769;
        v33 = a1->field_88->field_8;
        goto LABEL_723ecf;
    }
    v15->field_0 = 4;
    return v16;
}
