long long fish::complete::Completer::walk_wrap_chain(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5, unsigned int a6, struct_2 *a7)
{
    struct_2 *v0;  // [bp-0x1c8]
    char *v1;  // [bp-0x1c0]
    int v2;  // [bp-0x1b8]
    int v3;  // [bp-0x1b8]
    int v4;  // [bp-0x1b8]
    unsigned long long v5;  // [bp-0x1a8]
    char v6;  // [bp-0x198], Other Possible Types: unsigned long long
    int v7;  // [bp-0x198]
    int v8;  // [bp-0x198]
    unsigned long long v9;  // [bp-0x188]
    unsigned long long v10;  // [bp-0x170]
    int v11;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x160]
    unsigned long long v13;  // [bp-0x158]
    void* v14;  // [bp-0x148]
    int v15;  // [bp-0x148]
    unsigned long long v16;  // [bp-0x140]
    unsigned long long v17;  // [bp-0x138]
    unsigned long long v18;  // [bp-0x130]
    void* v19;  // [bp-0x128]
    char v20;  // [bp-0x120]
    void* v21;  // [bp-0x118]
    char v22;  // [bp-0x110]
    unsigned int v23;  // [bp-0x10f]
    char v24;  // [bp-0x10b]
    int v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x100]
    unsigned long long v27;  // [bp-0xf8]
    unsigned long long v28;  // [bp-0xd8]
    unsigned long v29;  // [bp-0xd0]
    char v30;  // [bp-0xc8]
    int v31;  // [bp-0xc8]
    unsigned long long v32;  // [bp-0xb8]
    unsigned long v33;  // [bp-0xb0]
    char *v34;  // [bp-0xa8]
    char *v35;  // [bp-0xa0]
    int v36;  // [bp-0x98]
    unsigned long long v37;  // [bp-0x90]
    unsigned long long v38;  // [bp-0x88]
    char v39;  // [bp-0x80]
    char v40;  // [bp-0x68]
    int v41;  // [bp-0x44]
    int v42;  // [bp-0x32]
    unsigned long long v43;  // r15
    unsigned long long v44;  // rax
    unsigned long v45;  // cc_ndep
    char *v46;  // rbx
    unsigned long long v48;  // rdx
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rax
    unsigned int v52;  // eax
    unsigned long v53;  // rax

    if (a7->field_68 > 24)
        return v53;
    v43 = a1;
    v44 = (unsigned long long)a0->field_38.check_cancel();
    if ((char)v44)
        return v44;
    a0.complete_custom(a1, a2, a3, a4, a7);
    fish::complete::complete_get_wrap_targets(&v39, a1, a2);
    v29 = a7->field_68;
    v0 = a7;
    v1 = &v29;
    if ((char)_ccall(4, 24, a7->field_68 + 1, 0, _ccall(17, v44 & 255, 0, v45)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d6178); /* do not return */
    a7->field_68 = v29 + 1;
    v40.into_iter(&v39);
    (char)v31.next(&v40);
    if (!((char)(((0 ^ *((long long *)&v30)) & (0 ^ -(*((long long *)&v30)))) >> 63)))
    {
        v46 = &v6;
        do
        {
            v38 = v32;
            v36 = v31;
            if (!v0)
                core::option::unwrap_failed(&g_14d6190); /* do not return */
            v33 = v0->field_30->field_10;
            v34 = &v0;
            v35 = &v33;
            v6 = 0x8000000000000000;
            v14 = 0;
            v17 = v37;
            v18 = v38;
            v19 = 0;
            v20 = 1;
            v21 = 0;
            v22 = 1;
            v24 = 0;
            v23 = 0;
            while (true)
            {
                v41.next(&v14);
                if ((char)v42 != 2)
                {
                    v2.to_vec(v41.get_source(v17, v18), a2);
                    v13 = v5;
                    v11 = v2;
                    if (fish::tokenizer::variable_assignment_equals_pos(v12, v5) != 1)
                    {
                        fish::complete::expand_command_token(a0->field_38, &(char)v11);
                        v43 = v41.offset();
                        v46 = &v6;
                        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v6);
                        v9 = v13;
                        memcpy(&v6, &v11, 16);
                        v48 = 1;
                        v8 = v7;
                        break;
                    }
                    else if (v0)
                    {
                        v0->field_30.push(&(char)v11, &g_14d61a8);
                    }
                    else
                    {
                        core::option::unwrap_failed(&g_14d6160); /* do not return */
                    }
                }
                else
                {
                    v48 = 0;
                    v8 = v7;
                    break;
                }
            }
            v14.zip(v46, v48, v43);
            if (v14 == 0x8000000000000000)
            {
                core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(&v14);
                v46 = &v8;
                v3 = v2;
            }
            else
            {
                v27 = v17;
                *((int128_t *)&v25) = *((int128_t *)&v14);
                if (!v0)
                    core::option::unwrap_failed(&g_14d6160); /* do not return */
                v28 = v18;
                v10 = v27;
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v14, v26, v27);
                v5 = v17;
                memcpy(&v2, &v14, 16);
                v43 = &v0->padding_38;
                if ((char)v43.insert(&v2))
                {
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v25);
                    v46 = &v8;
                    v3 = v4;
                }
                else
                {
                    v2.to_vec(a3, a4);
                    v43 = v26;
                    v14.splice(&v2, a5.from(a6), v50, v17, v17 + v18 * 4);
                    core::ptr::drop_in_place<alloc::vec::splice::Splice<widestring::utfstr::iter::CharsUtf32>>(&v14);
                    v17 = v5;
                    v15 = v4;
                    v51 = a5.start();
                    v46 = &v8;
                    if ((char)__CFADD__(v51, v28))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d61c0); /* do not return */
                    v52 = v51 + v28.new(v10);
                    if (!v0)
                        core::option::unwrap_failed(&g_14d6160); /* do not return */
                    a0.walk_wrap_chain(v26, v10, v16, v17, v52, v50, v0);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v14);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v25);
                    v3 = v4;
                }
            }
            v2 = v3;
            core::ptr::drop_in_place<fish::common::ScopeGuard<&mut fish::common::ScopeGuard<&mut fish::complete::CustomArgData,fish::complete::Completer::walk_wrap_chain::{{closure}}>,fish::complete::Completer::walk_wrap_chain::{{closure}}>>(&v34);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v31);
            (char)v31.next(&v40);
        } while ((long long)v31 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v40);
    return core::ptr::drop_in_place<fish::common::ScopeGuard<&mut fish::complete::CustomArgData,fish::complete::Completer::walk_wrap_chain::{{closure}}>>(&v0);
}
