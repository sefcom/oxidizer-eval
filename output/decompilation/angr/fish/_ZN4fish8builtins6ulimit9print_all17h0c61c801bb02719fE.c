long long fish::builtins::ulimit::print_all(unsigned int a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x128]
    void* v1;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x110]
    void* v3;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    void* v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    void* v9;  // [bp-0xd8]
    unsigned long v10;  // [bp-0xd0]
    unsigned long long v11[3];  // [bp-0xc8], Other Possible Types: unsigned short
    int v12;  // [bp-0xc8]
    char v13;  // [bp-0xc8]
    char v14;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v15;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v16;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v17;  // [bp-0xa8]
    int v18;  // [bp-0xa0]
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    unsigned long v23;  // [bp-0x60]
    char v24;  // [bp-0x40]
    struct_0 *v26;  // rax
    unsigned long long v27[2];  // rax
    void* v28;  // r14
    unsigned long long v29[2];  // rax
    unsigned long v30;  // r12
    unsigned long long v31[2];  // rax
    unsigned long v32;  // r12
    unsigned long v33;  // rbx
    unsigned long long v34;  // r12
    uint128_t *v35;  // r15
    char *v36;  // rbp
    unsigned long long v37;  // rax
    unsigned long v38;  // rbx
    unsigned long v39;  // r12
    unsigned int v40;  // eax
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rdx
    unsigned long long v44;  // rcx
    unsigned long long v46;  // rdx

    v26 = once_cell::sync::OnceCell<T>::get_or_try_init();
    if (v26->field_8)
    {
        v27 = v26->field_0;
        v28 = 0;
        do
        {
            v29 = v27;
            v30 = v29 + 2;
            v28 = v28.max(fish::fallback::fish_wcswidth(v29[0], v29[1]));
            v27 = v30;
        } while (v27 != &v26->field_0[2 * v26->field_8]);
        v31 = once_cell::sync::OnceCell<T>::get_or_try_init();
        v32 = v31[1];
        if (!v31[1])
            return v31;
    }
    else
    {
        v28 = 0;
        v31 = once_cell::sync::OnceCell<T>::get_or_try_init();
        v32 = v31[1];
        if (!v31[1])
            return v31;
    }
    v33 = v31[0];
    v35 = 0;
    v10 = a0;
    v36 = &v11;
    v5 = v32 * 32;
    v4 = v33;
    while (true)
    {
        v37 = fish::builtins::ulimit::getrlimit(v36, *((int *)(16 + v33 + (char *)v35)));
        v38 = v33;
        if ((v14 & 1))
        {
            v39 = (&v15)[v10];
            v40 = fish::libc::RLIMIT_CPU();
            v41 = 10;
            v42 = "(seconds, ";
            if (*((int *)(16 + v33 + (char *)v35)) != v40)
            {
                v41 = (fish::builtins::ulimit::get_multiplier(*((int *)(16 + v33 + (char *)v35))) != 1) * 4 + 1;
                v42 = (fish::builtins::ulimit::get_multiplier(*((int *)(16 + v33 + (char *)v35))) == 1 ? "((kB, (seconds, " : "(kB, (seconds, ");
            }
            v1 = 0;
            v2 = 4;
            v3 = 0;
            v11 = 16389;
            v15 = v28;
            v17 = 1;
            *((int128_t *)&v18) = *((int128_t *)(v33 + (char *)v35));
            v19 = 0;
            v20 = v42;
            v21 = v41;
            v22 = 4;
            v23 = *((int *)(24 + v33 + (char *)v35));
            v36 = &v11;
            fish_printf::printf_impl::sprintf_locale(&v7, &v1, "%-*ls %10ls-%lc) ((kB, (seconds, ", 17, &v11, 4);
            v7.unwrap(&g_14d5050);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&v11);
            *((int128_t *)&v12) = *((int128_t *)&v1);
            v16 = 0;
            v6.append(&v11);
            if (v39 != -1)
            {
                v7 = 0;
                v8 = 4;
                v9 = 0;
                v2 = "%";
                v3 = 4;
                v1 = 0x8000000000000000;
                v1.localize();
                v44 = fish::builtins::ulimit::get_multiplier(*((int *)(16 + v4 + (char *)v35)));
                if (!v44)
                    core::panicking::panic_const::panic_const_div_by_zero(&g_14d5068); /* do not return */
                v13 = 4;
                *((int *)&v15) = (!v39 >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v39) % (v44 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v39) / (v44 & 4294967295))) & 4294967295 : (unsigned long long)((0 CONCAT v39) % v44) CONCAT (unsigned long long)((0 CONCAT v39) / v44));
                v0 = 1;
                v36 = &v13;
                fish_printf::printf_impl::sprintf_locale(&v24);
                v34 = v5;
                v24.unwrap(&g_14d5080);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                *((int128_t *)&v12) = *((int128_t *)&v7);
                v16 = 0;
                v37 = (unsigned long long)a1.append(&v13);
            }
            else
            {
                v15 = "u";
                v16 = 10;
                v14 = 0x8000000000000000;
                v6.append(v14.localize(), v46);
                v37 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
                v34 = v5;
            }
            v38 = v4;
        }
        v33 = v38;
        v35 += 2;
        if (v34 == v35)
            return v37;
    }
}
