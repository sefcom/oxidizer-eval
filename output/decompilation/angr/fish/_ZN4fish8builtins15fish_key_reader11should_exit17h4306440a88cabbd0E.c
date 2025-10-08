long long fish::builtins::fish_key_reader::should_exit(unsigned long long a0, unsigned long long a1[3], unsigned long long a2)
{
    int <0x1350540[is_5]|Stack bp-0xc0, 1 B>;  // [bp-0xc0]
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xc0]
    char v2;  // [bp-0xb8]
    int v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xb8]
    unsigned long v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xa8]
    void* v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    void* v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    void* v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    void* v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    char v17;  // [bp-0x40]
    unsigned int v19;  // r14d
    unsigned long long v20;  // rdx
    unsigned long long v21;  // r15
    unsigned long long v22;  // r15
    unsigned long long v23;  // rbx
    char v24;  // bpl
    unsigned long long v25[3];  // rcx
    unsigned long long v26;  // rax
    unsigned int v27;  // r14d
    unsigned long long v28;  // rax
    unsigned long long v29[3];  // rcx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbx
    unsigned long v32;  // r15

    a1.push(a2);
    v13 = 0;
    v14 = 2;
    v15 = 0;
    v16 = 4;
    if (((char)v13.next() & 1))
    {
        v19 = (unsigned int)&<0x1350540[is_5]|Stack bp-0xc0, 1 B>;
        do
        {
            v22 = v21;
            v23 = fish::common::shell_modes();
            v24 = (char)v20 & 1;
            if (v22 >= 32)
                core::panicking::panic_bounds_check(v22, 32, &g_14c9988); /* do not return */
            v1 = *((char *)(v23 + v22 + 25)).from_single_byte();
            if ((char)fish::input_common::match_key_event_to_key(a2, &v1) != 4)
            {
                v25 = a1;
                v4 = v25[1];
                v5 = v25[2] * 16 + a1[1];
                v26 = v4.nth_back();
                if (!v26 || (char)fish::input_common::match_key_event_to_key(v26, &v1) == 4)
                {
                    v7 = 0;
                    v8 = 4;
                    v9 = 0;
                    v11 = "P";
                    v12 = 28;
                    v10 = 0x8000000000000000;
                    v28 = v10.localize();
                    if ((char)__CFADD__(*((char *)(v23 + v22 + 25)), 96))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c99a0); /* do not return */
                    v2 = 4;
                    v5 = *((char *)(v23 + v22 + 25)) + 96;
                    v0 = 1;
                    fish_printf::printf_impl::sprintf_locale(&v17, &v7, v28);
                    v17.unwrap(&g_14c99b8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v3);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v10);
                    *((int128_t *)&v3) = *((int128_t *)&v7);
                    v6 = 0;
                    a0.append(&(unsigned long long)v3);
                    v27 = 0;
                }
                else
                {
                    v27 = (unsigned int)&v1 & 0xffffff00 | 1;
                }
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v23, v24);
                return v27;
            }
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v23, v24);
            v20 = v20;
        } while (((char)v13.next() & 1));
    }
    v29 = a1;
    if (v29[2] < 4)
        return 0;
    v30 = v29[2] * 16;
    v31 = v29[1] + v30;
    v32 = a1[1] + v30 - 64;
    if (v32.as_ref(v31).eq_by(v20, "exitExitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs", "Exitdefcsgr1ktbckMOVkil1knxt/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/alloc/src/slice.rs"))
        return v19 & 0xffffff00 | 1;
    return v32.eq_by(v31, "quitfilemodekmrkgetmkCANksav!", "filemodekmrkgetmkCANksav!");
}
