long long fish::builtins::argparse::delete_flag(unsigned long a0, struct_1 *a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0xe0], Other Possible Types: unsigned long
    int v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long v3;  // [bp-0xc8]
    unsigned long v4;  // [bp-0xc0]
    void* v5;  // [bp-0xc0]
    struct_0 *v6;  // [bp-0xb8]
    unsigned long v7;  // [bp-0xb0]
    int v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    int v10;  // [bp-0x98]
    unsigned long v11;  // [bp-0x88]
    int v12;  // [bp-0x78], Other Possible Types: char
    unsigned long long v13;  // [bp-0x68]
    char v14;  // [bp-0x60]
    char v15;  // [bp-0x48]
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    void* v19;  // r13
    unsigned long v20;  // rcx
    unsigned long long v21;  // rax
    char v22;  // bpl
    unsigned long v23;  // r13
    unsigned long long v24;  // rcx
    unsigned long long v25;  // r12
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdi
    unsigned long v29;  // rcx
    char v30;  // bl
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rax
    unsigned long long v33;  // r13

    v0 = a2;
    v17 = a1->field_58;
    v18 = a1->field_8;
    v19 = a1->field_10;
    v20 = v18 + v19 * 24 - 24;
    if (!v19)
        v20 = 0;
    v14.zip(v17, a1->field_60, v20);
    v5 = a1->field_60;
    if (*((long long *)&v14) && (char)fish::builtins::argparse::delete_flag::{{closure}}(&v14))
    {
        if (v19)
        {
            v19 -= 1;
            a1->field_10 = v19;
            v21 = v19 * 3;
            v3 = *((long long *)(v18 + v21 * 8 + 16));
            *((int128_t *)&v1) = *((int128_t *)(v18 + v21 * 8));
        }
        else
        {
            v2 = 9223372036854775809;
            v19 = 0;
        }
        core::ptr::drop_in_place<core::option::Option<alloc::borrow::Cow<widestring::utfstr::Utf32Str>>>(&v1);
        v22 = 1;
        if (a1->field_50)
            core::panicking::panic("assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%", 45, &g_14c7030); /* do not return */
    }
    if (v19)
    {
        v23 = v19 - 1;
        a1->field_10 = v23;
        v24 = v23 * 3;
        if (*((long long *)(v18 + v24 * 8)) != 9223372036854775809)
        {
            v7 = *((long long *)(v18 + v24 * 8));
            *((int128_t *)&v8) = *((int128_t *)(v18 + v24 * 8 + 8));
            v25 = (long long)v8;
            if (!v25.starts_with(v9, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1))
            {
                v27 = 42;
                v26 = &g_14c6f70;
                v28 = "assertion failed: opt_arg.starts_with(\"-\")assertion failed: opt_arg.ends_with(more_opts)assertion failed: opt_arg.ends_with(value)assertion failed: more_opts.is_empty() || value.is_empty()assertion failed: w.remaining_text.is_empty()assertion failed: opt_s";
            }
            else if (!(char)v0)
            {
                v29 = a1->field_50;
                if (v22)
                {
                    v30 = !v29;
                    v31 = 4;
                    v5 = 0;
LABEL_133ad2b:
                    v4 = a1->field_48;
                    v0 = v29;
                    if (v25.ends_with(v9, a1->field_48, v29))
                    {
                        if (v25.ends_with(v9, v31, v5))
                        {
                            v32 = v0 + v5;
                            if ((char)__CFADD__(v0, v5))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14c6fb8); /* do not return */
                            v33 = v9 - v32;
                            if (v9 >= v32 && v33 >= 2)
                            {
                                if ((v33 == 2 & v30))
                                {
                                    v6->field_10 = v9;
                                    v6->field_0 = *((int128_t *)&v7);
                                    return v9;
                                }
                                v1.to_vec("-", 1);
                                v11 = v3;
                                v10 = v1;
                                v1.add(&v10, v25 + v33 * 4 - 4, 1);
                                v12.add(&v1, v31, v5);
                                v1.to_vec(v25, v33 - 1);
                                v11 = v3;
                                v10 = v1;
                                v15.add(&v10, v4, v0);
                                a1.push(&v15, &g_14c6fe8);
                                v6->field_10 = v13;
                                *((void*)&v6->field_0) = v12;
                                return (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
                            }
                            core::panicking::panic_const::panic_const_sub_overflow(&g_14c6fd0); /* do not return */
                        }
                        v26 = &g_14c6fa0;
                        v28 = "assertion failed: opt_arg.ends_with(value)assertion failed: more_opts.is_empty() || value.is_empty()assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_h";
                        v27 = 42;
                    }
                    else
                    {
                        v26 = &g_14c6f88;
                        v27 = 46;
                        v28 = "assertion failed: opt_arg.ends_with(more_opts)assertion failed: opt_arg.ends_with(value)assertion failed: more_opts.is_empty() || value.is_empty()assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.wop";
                    }
                }
                else
                {
                    if (!v17)
                        v5 = 0;
                    v31 = (v17 ? v17 : 4);
                    v30 = !v29;
                    if ((!v5 | !v29) == 1)
                        goto LABEL_133ad2b;
                    v26 = &g_14c7000;
                    v27 = 58;
                    v28 = "assertion failed: more_opts.is_empty() || value.is_empty()assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%";
                }
            }
            else if (a1->field_50)
            {
                v26 = &g_14c7018;
                v27 = 45;
                v28 = "assertion failed: w.remaining_text.is_empty()assertion failed: opt_spec.accumulate_argsassertion failed: w.woptarg.is_none()assertion failed: opts.unknown_handling == UnknownHandling::Moveassertion failed: !is_long_flag%";
            }
            else
            {
                v6->field_10 = v9;
                v6->field_0 = *((int128_t *)&v7);
                return v9;
            }
            core::panicking::panic(v28, v27, v26); /* do not return */
        }
    }
    core::option::unwrap_failed(&g_14c6f58); /* do not return */
}
