long long fish::builtins::block::block(unsigned long long a0, struct_1 *a1, unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x97]
    char v2;  // [bp-0x96]
    unsigned int v3;  // [bp-0x94]
    unsigned long v4;  // [bp-0x90]
    void* v5;  // [bp-0x88], Other Possible Types: unsigned long
    void* v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    void* v8;  // [bp-0x60]
    unsigned long long v9[3];  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    unsigned long v14;  // r15
    unsigned long v15;  // r14
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    unsigned int v18;  // ebp
    unsigned long long v20;  // rdx
    unsigned long v21;  // rbx
    unsigned long long v23;  // rdx
    struct_2 *v24;  // r14
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r12
    void* v27;  // r13
    void* v28;  // r13
    struct_2 *v29;  // r14
    unsigned long long v30;  // r15
    void* v31;  // r13
    struct_2 *v32;  // rbp
    struct_0 *v33;  // rax

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c7ba8); /* do not return */
    v14 = a2[0];
    v15 = a2[1];
    fish::builtins::block::parse_options(&v0, a2, a3, a0, a1);
    if (v0 == 2)
    {
        v16 = v3 * 0x100000000;
        v17 = 1;
    }
    else
    {
        if ((v1 & 1))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v14, v15);
            goto LABEL_133fb21;
        }
        v18 = v2;
        if (!(v0 & 1))
        {
            v24 = a0.block_at_index(0);
            v26 = v25;
            if (v18 != 2)
            {
                if (v18 != 1)
                {
                    if (v24)
                    {
                        v27 = 0;
                        do
                        {
                            v28 = v27;
                            v29 = v24;
                            v30 = v26;
                            if (v29->field_14 - 2 <= 11)
                            {
                                core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::cell::Ref<fish::parser::Block>>>(v29, v30);
                                goto LABEL_133fb04;
                            }
                            v31 = v28 + 1;
                            if ((char)_ccall(4, 24, v28 + 1, 0, (unsigned long long)(char)(v29->field_14 - 2 < 11)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14c7bc0); /* do not return */
                            v32 = a0.block_at_index(v31);
                            v26 = v25;
                            core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::cell::Ref<fish::parser::Block>>>(v29, v30);
                            v24 = v32;
                            v27 = v31;
                        } while (v24);
                    }
                    goto LABEL_133f9ec;
                }
LABEL_133f9e1:
                core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::cell::Ref<fish::parser::Block>>>(v24, v25);
LABEL_133f9ec:
                core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::cell::Ref<fish::parser::Block>>>(0, v26);
                atomic_fetch_add(a0 + 384);
            }
            else
            {
                if (a0.blocks_size() < 2)
                    goto LABEL_133f9e1;
                core::ptr::drop_in_place<core::ops::control_flow::ControlFlow<core::cell::Ref<fish::parser::Block>>>(v24, v25);
                if (!v24)
                {
                    atomic_fetch_add(a0 + 384);
                }
                else
                {
                    v28 = 0;
LABEL_133fb04:
                    v33 = a0.block_at_index_mut(v28);
                    if (!v33)
                        core::option::unwrap_failed(&g_14c7bd8); /* do not return */
                    v33->field_15 = 1;
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v25);
                }
            }
            goto LABEL_133fb21;
        }
        else if (v18)
        {
            v6 = 0;
            v7 = 4;
            v8 = 0;
            v10 = "%";
            v11 = 47;
            *(v9) = 0x8000000000000000;
            v0 = 1;
            v4 = v14;
            v5 = v15;
            fish_printf::printf_impl::sprintf_locale(&v12, &v6, v9.localize(), v20, ".", &v0, 1);
            v12.unwrap(&g_14c7c08);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
            memcpy(&v0, &v6, 16);
            v5 = 0;
            a1->field_10.append(&v0);
            v17 = 1;
            v16 = 0x200000000;
        }
        else
        {
            v21 = a0 + 384;
            if (core::sync::atomic::atomic_load(v21))
            {
                atomic_fetch_dec(v21);
LABEL_133fb21:
                v16 = 0;
                v17 = 0;
            }
            else
            {
                v6 = 0;
                v7 = 4;
                v8 = 0;
                v10 = "%";
                v11 = 23;
                *(v9) = 0x8000000000000000;
                v0 = 1;
                v4 = v14;
                v5 = v15;
                fish_printf::printf_impl::sprintf_locale(&v12, &v6, v9.localize(), v23, ".", &v0, 1);
                v12.unwrap(&g_14c7bf0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                memcpy(&v0, &v6, 16);
                v5 = 0;
                a1->field_10.append(&v0);
                v17 = 1;
                v16 = 0x100000000;
            }
        }
    }
    return v16 | v17;
}
