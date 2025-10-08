long long fish::complete::Completer::try_complete_user(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x149]
    void* v1;  // [bp-0x148]
    int v2;  // [bp-0x148]
    unsigned long long v3;  // [bp-0x140]
    void* v4;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x128]
    unsigned int v6;  // [bp-0x120]
    char v7;  // [bp-0x120]
    unsigned int v8;  // [bp-0x120]
    char v9;  // [bp-0x120]
    char v10;  // [bp-0x120]
    unsigned long long v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x110]
    unsigned long long v13;  // [bp-0xe0]
    int v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    int v18;  // [bp-0xc0]
    unsigned long long v19;  // [bp-0xb0]
    unsigned long long v20;  // [bp-0xa8]
    unsigned int v21;  // [bp-0xa0]
    int v22;  // [bp-0x98]
    char v23;  // [bp-0x88]
    void* v24;  // [bp-0x78]
    char v25;  // [bp-0x68]
    void* v26;  // [bp-0x58]
    char v27;  // [bp-0x48]
    void* v28;  // [bp-0x38]
    unsigned int v30;  // ebp
    unsigned int v31;  // edx
    char *v32;  // rdi
    char *v33;  // rbx
    unsigned long long v34;  // r13
    unsigned long long v35;  // r12
    unsigned long long v37[2];  // rax
    unsigned int v38;  // ebp
    unsigned long long v40[2];  // rax
    char v41;  // bpl

    v30 = 0;
    if ((int)a1.char_at(a2, 0) == 126)
    {
        v6 = 47;
        if (!v6.slice_contains(a1, a2))
        {
            v8 = 126;
            v13 = a1.slice_from(a2, 1);
            if (v8.slice_contains(v13, a2))
                goto LABEL_138ef31;
            v20 = std::time::Instant::now();
            v21 = v31;
            if (a2 < 1)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14d6078); /* do not return */
            v8.lock(&_ZN4fish8complete9Completer17try_complete_user15s_setpwent_lock17h00792084b621cb18E);
            v5 = v8.unwrap(&g_14d6090);
            v0 = (char)v31 & 1;
            setpwent();
            v32 = &(char)v18;
            v30 = 0;
            while (true)
            {
                v33 = v32;
                fish::complete::Completer::try_complete_user::getpwent_name(v32);
                if ((char)(((0 ^ (long long)v18) & (0 ^ -((long long)v18))) >> 63))
                    break;
                v16 = v19;
                v14 = v18;
                if ((char)a0->field_38.check_cancel())
                {
LABEL_138f2c4:
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v18);
                    break;
                }
                v34 = v15;
                v35 = v16;
                if ((char)fish::wcstringutil::string_prefixes_string(v13, v31, v34, v35))
                {
                    v1 = 0;
                    v3 = 4;
                    v4 = 0;
                    v37 = _ZN4fish8complete18COMPLETE_USER_DESC17haa8332affa7eb3dfE.get_or_try_init(&_ZN4fish8complete18COMPLETE_USER_DESC17haa8332affa7eb3dfE);
                    v7 = 1;
                    v11 = v34;
                    v12 = v35;
                    fish_printf::printf_impl::sprintf_locale(&v22, &v1, v37[0], v37[1], ".", &v7, 1);
                    v22.unwrap(&g_14d60d8);
                    v38 = (unsigned int)&v7;
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                    memcpy(&v23, &v1, 16);
                    v24 = 0;
                    v7.to_vec(v34.slice_from(v35, a2 - 1), a2);
                    v4 = v12;
                    *((int128_t *)&v2) = *((int128_t *)&v8);
                    v7.new(&v1, &v23, 0, 0, 1);
                    a0.add(&v7);
                }
                else
                {
                    if (!(char)fish::wcstringutil::string_prefixes_string_case_insensitive(v13, v31, v34, v35))
                        goto LABEL_138f299;
                    v1 = 0;
                    v3 = 4;
                    v4 = 0;
                    v9 = 1;
                    v11 = v34;
                    v12 = v35;
                    fish_printf::printf_impl::sprintf_locale(&v22, &v1, "~%ls", 4, &v9, 1);
                    v22.unwrap(&g_14d60a8);
                    v38 = (unsigned int)&v9;
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
                    memcpy(&v25, &v1, 16);
                    v26 = 0;
                    v1 = 0;
                    v3 = 4;
                    v4 = 0;
                    v40 = _ZN4fish8complete18COMPLETE_USER_DESC17haa8332affa7eb3dfE.get_or_try_init(&_ZN4fish8complete18COMPLETE_USER_DESC17haa8332affa7eb3dfE);
                    v10 = 1;
                    v11 = v34;
                    v12 = v35;
                    fish_printf::printf_impl::sprintf_locale(&v22, &v1, v40[0], v40[1], ".", &v10, 1);
                    v22.unwrap(&g_14d60c0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
                    memcpy(&v27, &v1, 16);
                    v28 = 0;
                    v10.new(&v25, &v27, 0, 0, 11);
                    a0.add(&v10);
                }
                v41 = 1;
                v30 = v38 & 0xffffff00 | 1;
LABEL_138f299:
                if (v20.elapsed() || v31 > 0xbebc200)
                    goto LABEL_138f2c4;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v33);
                v32 = v33;
            }
            endpwent();
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v0);
        }
        else
        {
LABEL_138ef31:
            v30 = 0;
        }
    }
    return v30 & 0xffffff00 | v41 & 1;
}
