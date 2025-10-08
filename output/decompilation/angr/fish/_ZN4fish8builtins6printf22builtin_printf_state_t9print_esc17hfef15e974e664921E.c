long long fish::builtins::printf::builtin_printf_state_t::print_esc(void* a0, unsigned long a1, unsigned long a2, char a3)
{
    unsigned long v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned int v1;  // [bp-0xe8]
    unsigned int v2;  // [bp-0xe4]
    unsigned long v3;  // [bp-0xe0]
    unsigned long long v4[3];  // [bp-0xd8]
    unsigned long long v5[3];  // [bp-0xd8]
    unsigned long long v6[3];  // [bp-0xd8]
    unsigned long v7;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned short v9;  // [bp-0xb8]
    unsigned long v10;  // [bp-0xb0]
    char v11;  // [bp-0x98]
    unsigned long v12;  // [bp-0x90]
    void* v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    void* v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned long v21;  // rbx
    unsigned long v22;  // r14
    unsigned long v23;  // r15
    unsigned long v24;  // r13
    unsigned int v27;  // ebp
    unsigned int v29;  // ebp
    unsigned int v30;  // edx
    char v31;  // dil
    unsigned long v32;  // r12
    unsigned long long v33;  // rdx
    unsigned long v34;  // rax
    unsigned int v35;  // ebp
    unsigned long v36;  // rsi
    char v37;  // al
    unsigned int v38;  // eax
    unsigned int v40;  // ebp
    unsigned int v41;  // eax
    unsigned long v42;  // r15
    unsigned int v43;  // ecx
    void* v44;  // r14
    unsigned int v46;  // ebp
    unsigned int v47;  // edx
    unsigned long long v51;  // rdx
    unsigned long long v53;  // rax

    v21 = a2;
    v22 = a1;
    if ((int)a1.char_at(a2, 0) != 92)
        core::panicking::panic("assertion failed: escstart.char_at(0) == '\\\\'", 45, &g_14cb6e8); /* do not return */
    v23 = a2 - 1;
    v24 = a1 + 4;
    if ((int)v24.char_at(v23, 0) != 120)
    {
        if (!(char)fish::builtins::printf::is_octal_digit(v24.char_at(v23, 0)))
        {
            v37 = (unsigned int)v24.char_at(v23, 0).is_contained_in("\"\\abcefnrtv", 11);
            v38 = v24.char_at(v23, 0);
            if (v37)
            {
                fish::builtins::printf::builtin_printf_state_t::print_esc_char(a0, v38);
                if (!v23)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb658); /* do not return */
                goto LABEL_1361276;
            }
            if (v38 == 117 || (int)v24.char_at(v23, 0) == 85)
            {
                v40 = 0;
                v41 = v24.char_at(v23, 0);
                if (!v23)
                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb5e0); /* do not return */
                v3 = a1;
                v0 = a2;
                v42 = a2 - 2;
                v2 = v41;
                v1 = (v41 != 117) * 4 + 4;
                v44 = 0;
                while (true)
                {
                    v23 = v42;
                    v24 = v22 + 8 + v44;
                    if (v43 * 16 + 16 == (unsigned int)v44)
                        break;
                    if ((int)v24.char_at(v23, 0) - 48 < 10 || ((int)v24.char_at(v23, 0) & 4294967263) - 65 < 6)
                    {
                        if (v40 <= 268435455)
                        {
                            if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 16) & 1))
                            {
                                v46 = v40 * 16;
                                v40 = v46 + v47;
                                if ((char)__CFADD__(v46, v47))
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14cb610); /* do not return */
                                v44 += 4;
                                v42 = v23 - 1;
                                if (!((char)__CFADD__(v23, -1)))
                                    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb640); /* do not return */
                            }
                            else
                            {
                                core::option::unwrap_failed(&g_14cb628); /* do not return */
                            }
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_mul_overflow(&g_14cb610); /* do not return */
                        }
                    }
                    else
                    {
                        if (!(unsigned int)v44)
                        {
                            v7 = "M";
                            v8 = 44;
                            *(v4) = 0x8000000000000000;
                            fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, v4.localize(), a2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
                            break;
                        }
                    }
                }
                if (v40 > 1114111)
                {
                    v13 = 0;
                    v14 = 4;
                    v15 = 0;
                    v17 = "U";
                    v18 = 39;
                    v16 = 0x8000000000000000;
                    v21 = v0;
                    v22 = v3;
                    *((char *)v5) = 4;
                    v7 = v2;
                    v9 = 8197;
                    v10 = v1;
                    v11 = 4;
                    v12 = v40;
                    fish_printf::printf_impl::sprintf_locale(&v19, &v13, v16.localize(), v51, ".", &(unsigned long long)v5, 3);
                    v19.unwrap(&g_14cb5f8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(unsigned long long)v5);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v16);
                    *((int128_t *)&v6) = *((int128_t *)&v13);
                    v8 = 0;
                    fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, &(unsigned long long)v5);
                }
                else
                {
                    v21 = v0;
                    v22 = v3;
                    if ((v40 ^ 0xd800) - 0x110000 < -0x10f800)
                    {
                        v7 = "I";
                        v8 = 47;
                        *(v4) = 0x8000000000000000;
                        fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, v4.localize(), a2);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
                    }
                    else
                    {
                        v36 = v40;
LABEL_136132d:
                        fish::builtins::printf::builtin_printf_state_t::append_output(a0, v36);
                    }
                }
            }
            else
            {
                fish::builtins::printf::builtin_printf_state_t::append_output(a0, 92);
                if (v23)
                {
                    fish::builtins::printf::builtin_printf_state_t::append_output(a0, (unsigned int)v24.char_at(v23, 0));
LABEL_1361276:
                    v23 = a2 - 2;
                    v24 = a1 + 8;
                }
                else
                {
                    v23 = 0;
                }
            }
            v53 = fish::wutil::wstr_offset_in(v24, v23, v22, v21);
            if (!v53)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb688); /* do not return */
            return v53 - 1;
        }
        if (a3 && (int)v24.char_at(v23, 0) == 48)
        {
            if (v23)
            {
                v23 = a2 - 2;
                v24 = a1 + 8;
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb670); /* do not return */
            }
        }
        v31 = 0;
        if ((char)fish::builtins::printf::is_octal_digit(v24.char_at(v23, 0)))
        {
            a0 = a0;
            if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 8) & 1))
                core::option::unwrap_failed(&g_14cb6b8); /* do not return */
            v32 = v23;
            v23 = v32 - 1;
            if (v32 < 1)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb6d0); /* do not return */
            v0 = v33;
            v24 += 4;
            if ((char)fish::builtins::printf::is_octal_digit(v24.char_at(v23, 0)))
            {
                if ((int)v0 > 536870911)
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14cb6a0); /* do not return */
                if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 8) & 1))
                    core::option::unwrap_failed(&g_14cb6b8); /* do not return */
                v34 = (unsigned int)v0 * 8;
                if ((char)__CFADD__(v34, v33))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14cb6a0); /* do not return */
                if (v23)
                {
                    v0 = v34 + v33;
                    v23 -= 2;
                    v24 += 8;
                    if (!(char)fish::builtins::printf::is_octal_digit(v24.char_at(v23, 0)))
                        goto LABEL_1361458;
                    if ((int)v0 > 536870911)
                        core::panicking::panic_const::panic_const_mul_overflow(&g_14cb6a0); /* do not return */
                    if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 8) & 1))
                        core::option::unwrap_failed(&g_14cb6b8); /* do not return */
                    v35 = (unsigned int)v0 * 8;
                    v31 = (char)v35 + (char)v33;
                    if ((char)__CFADD__(v35, v33))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb6a0); /* do not return */
                    if (v23)
                    {
                        v24 += 12;
                        v23 -= 3;
                        goto LABEL_1361224;
                    }
                }
            }
            else
            {
LABEL_1361458:
                v31 = v0;
            }
        }
        else
        {
LABEL_1361224:
        }
    }
    else if (v23)
    {
        v23 = a2 - 2;
        v24 = a1 + 8;
        if ((int)v24.char_at(v23, 0) - 58 <= -11 && ((int)v24.char_at(v23, 0) & 4294967263) - 71 < -6)
        {
            v7 = "m";
            v8 = 36;
            *(v4) = 0x8000000000000000;
            fish::builtins::printf::builtin_printf_state_t::fatal_error(a0, v4.localize(), a2);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
            v27 = 0;
        }
        else if (!((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 16) & 1))
        {
            core::option::unwrap_failed(&g_14cb5b0); /* do not return */
        }
        else if (v23)
        {
            v23 = a2 - 3;
            v24 = a1 + 12;
            if ((int)v24.char_at(v23, 0) - 48 < 10 || ((int)v24.char_at(v23, 0) & 4294967263) - 65 <= 5)
            {
                if (v27 > 268435455)
                {
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14cb598); /* do not return */
                }
                else if (((char)::0x128b6d0::core::char::methods::<impl char>::to_digit((unsigned int)v24.char_at(v23, 0), 16) & 1))
                {
                    v29 = v27 * 16;
                    v27 = v29 + v30;
                    if ((char)__CFADD__(v29, v30))
                    {
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb598); /* do not return */
                    }
                    else if (v23)
                    {
                        v23 = a2 - 4;
                        v24 = a1 + 16;
                    }
                    else
                    {
                        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb5c8); /* do not return */
                    }
                }
                else
                {
                    core::option::unwrap_failed(&g_14cb5b0); /* do not return */
                }
            }
        }
        else
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb5c8); /* do not return */
        }
        v31 = v27;
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb580); /* do not return */
    }
    v36 = (unsigned int)fish::wchar::encode_byte_to_char(v31);
    goto LABEL_136132d;
}
