void fish::builtins::printf::builtin_printf_state_t::print_direc(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, char a4, unsigned int a5, char a6, unsigned int a7, unsigned long long a8, unsigned long long a9)
{
    unsigned long long v0;  // [bp-0x218]
    char v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    char *v4;  // [bp-0xd8], Other Possible Types: char, unsigned short
    unsigned long v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xb8], Other Possible Types: unsigned long long, char, unsigned short
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0], Other Possible Types: unsigned long
    int v10;  // [bp-0xa8], Other Possible Types: char *, unsigned long long
    unsigned long long v11;  // [bp-0xa0]
    void* v12;  // [bp-0x98], Other Possible Types: unsigned short, char
    unsigned long v13;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x88]
    unsigned short v15;  // [bp-0x78], Other Possible Types: char
    unsigned long long v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    unsigned int v18;  // [bp-0x4c]
    char v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    unsigned long v22;  // r15
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rsi
    char v25;  // al
    unsigned long long v26;  // xmm0lq
    unsigned long long v27;  // xmm0lq
    unsigned long long v28;  // xmm0lq
    unsigned long long v29;  // xmm0lq
    unsigned long long v30;  // rax
    char v31;  // cl
    unsigned long long v32;  // rax
    char v33;  // cl
    char v34;  // al
    unsigned int v35;  // eax
    int v36;  // xmm0

    v18 = a3;
    v19.to_vec(a1, a2);
    v22 = a3 - 65;
    if ((unsigned int)v22 <= 55)
    {
        v0 = 485331304561;
        if (!(*((char *)&v0 + ((v22 & 63) >> 3)) >> ((char)v22 & 63 & 7) & 1))
        {
            v0 = 0x90410800800000;
            if ((*((char *)&v0 + ((v22 & 63) >> 3)) >> ((char)v22 & 63 & 7) & 1))
            {
                v23 = &g_a05af5;
                v24 = "ll";
            }
            else
            {
                v0 = 0x4000400000000;
                if (!(*((char *)&v0 + ((v22 & 63) >> 3)) >> ((char)v22 & 63 & 7) & 1))
                    goto LABEL_135f76a;
                v23 = "Lll";
                v24 = "lLll";
            }
        }
        else
        {
            v23 = "ll";
            v24 = "Lll";
        }
        v19.extend(v24, v23);
    }
LABEL_135f76a:
    v19.push(a3);
    switch ((unsigned int)v22)
    {
    case 0: case 4: case 5: case 6: case 32: case 36: case 37: case 38:
        fish::builtins::printf::string_to_scalar_type(a8, a9, a0);
        v25 = a0->field_38;
        if (a4)
        {
            if (a6)
            {
                if (!v25)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 8197;
                    v13 = a7;
                    v15 = 6;
                    v16 = v26;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 3, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135fbf2;
                    }
                }
            }
            else
            {
                if (!v25)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 6;
                    v13 = v27;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
        }
        else
        {
            if (a6)
            {
                if (!v25)
                {
                    v7 = 8197;
                    v9 = a7;
                    v12 = 6;
                    v13 = v28;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
            else
            {
                if (!v25)
                {
                    v7 = 6;
                    v9 = v29;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 1, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_1360011;
                    }
                }
            }
        }
    case 23: case 46: case 52: case 55:
        v30 = fish::builtins::printf::string_to_scalar_type(a8, a9, a0);
        v31 = a0->field_38;
        if (a4)
        {
            if (a6)
            {
                if (!v31)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 8197;
                    v13 = a7;
                    v15 = 4;
                    v16 = v30;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 3, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135fbf2;
                    }
                }
            }
            else
            {
                if (!v31)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 4;
                    v13 = v30;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
        }
        else
        {
            if (a6)
            {
                if (!v31)
                {
                    v7 = 8197;
                    v9 = a7;
                    v12 = 4;
                    v13 = v30;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
            else
            {
                if (!v31)
                {
                    v7 = 4;
                    v9 = v30;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 1, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_1360011;
                    }
                }
            }
        }
    case 34:
        if (a4)
        {
            if (!a0->field_38)
            {
                v5 = a5;
                v4 = 8197;
                v35 = a8.char_at(a9, 0);
                v36 = *((int128_t *)&v4);
                v10 = v6;
                v7 = v36;
                v12 = 4;
                v13 = v35;
                fish_printf::printf_impl::sprintf_locale(&(char)v4, a0, v2, v3, &a0->padding_0[24], &(char)v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                if ((char)v4 == 1)
                {
                    fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, *((char *)&v4 + 1));
                    goto LABEL_135ffb6;
                }
            }
        }
        else
        {
            if (!a0->field_38)
            {
                v7 = 4;
                v9 = (unsigned int)a8.char_at(a9, 0);
                fish_printf::printf_impl::sprintf_locale(&(char)v4, a0, v2, v3, &a0->padding_0[24], &v7, 1, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                if ((char)v4 == 1)
                {
                    fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, *((char *)&v4 + 1));
                    goto LABEL_1360011;
                }
            }
        }
    case 35: case 40:
        v32 = fish::builtins::printf::string_to_scalar_type(a8, a9, a0);
        v33 = a0->field_38;
        if (a4)
        {
            if (a6)
            {
                if (!v33)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 8197;
                    v13 = a7;
                    v15 = 16389;
                    v16 = v32;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 3, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135fbf2;
                    }
                }
            }
            else
            {
                if (!v33)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 16389;
                    v13 = v32;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
        }
        else
        {
            if (a6)
            {
                if (!v33)
                {
                    v7 = 8197;
                    v9 = a7;
                    v12 = 16389;
                    v13 = v32;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
            else
            {
                if (!v33)
                {
                    v7 = 16389;
                    v9 = v32;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 1, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_1360011;
                    }
                }
            }
        }
    case 50:
        v34 = a0->field_38;
        if (a4)
        {
            if (a6)
            {
                if (!v34)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 8197;
                    v13 = a7;
                    v15 = 1;
                    v16 = a8;
                    v17 = a9;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 3, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
LABEL_135fbf2:
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v8);
                    break;
                }
            }
            else
            {
                if (!v34)
                {
                    v7 = 8197;
                    v9 = a5;
                    v12 = 1;
                    v13 = a8;
                    v14 = a9;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
LABEL_135ffb6:
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
                    break;
                }
            }
        }
        else
        {
            if (a6)
            {
                if (!v34)
                {
                    v7 = 8197;
                    v9 = a7;
                    v12 = 1;
                    v13 = a8;
                    v14 = a9;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 2, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                    {
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
                        goto LABEL_135ffb6;
                    }
                }
            }
            else
            {
                if (!v34)
                {
                    v7 = 1;
                    v9 = a8;
                    v10 = a9;
                    fish_printf::printf_impl::sprintf_locale(&v4, a0, v2, v3, &a0->padding_0[24], &v7, 1, *((long long *)&v1), v20, *((long long *)&v21), *((long long *)&v4));
                    if (v4 == 1)
                        fish::builtins::printf::builtin_printf_state_t::handle_sprintf_error(a0, (&v4)[1]);
LABEL_1360011:
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                }
            }
        }
    default:
        v4 = &v18;
        v5 = <char as core::fmt::Display>::fmt;
        v7 = &g_14cb318;
        v9 = 1;
        v12 = 0;
        v10 = &(char)v4;
        v11 = 1;
        core::panicking::panic_fmt(&v7, &g_14cb328); /* do not return */
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19);
    return;
}
