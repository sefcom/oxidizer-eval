long long fish::proc::print_exit_warning_for_jobs(unsigned long long a0[3])
{
    unsigned long long v0[3];  // [bp-0xb8]
    unsigned long long v1[3];  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    void* v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    int v7;  // [bp-0x88], Other Possible Types: void*, char
    int v8;  // [bp-0x88], Other Possible Types: unsigned short
    int v9;  // [bp-0x88], Other Possible Types: char
    int v10;  // [bp-0x88], Other Possible Types: char
    char v11;  // [bp-0x88]
    unsigned long v12;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x78], Other Possible Types: unsigned long long
    char v14;  // [bp-0x68]
    int v15;  // [bp-0x60]
    char v16;  // [bp-0x40]
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r15
    struct_0 **v21;  // r13
    unsigned long long v22;  // rax
    unsigned int *v23;  // rax

    v4 = 0;
    v5 = 4;
    v6 = 0;
    v2 = "T";
    v3 = 29;
    *(v0) = 0x8000000000000000;
    v11 = 1;
    v12 = v0.localize();
    v13 = v18;
    fish_printf::printf_impl::sprintf_locale(&v16, &v4, "%sbuiltin %ls returned invalid exit code %d", 2, &v11, 1);
    v16.unwrap(&g_14df4a0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v11);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    v13 = v6;
    *((int128_t *)&v7) = *((int128_t *)&v4);
    fish::wutil::wwrite_to_fd(v12, v6, 1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v2 = "\n";
    v3 = 17;
    *(v0) = 0x8000000000000000;
    v7 = 1;
    v12 = v0.localize();
    v13 = v18;
    fish_printf::printf_impl::sprintf_locale(&v16, &v4, "%sbuiltin %ls returned invalid exit code %d", 2, &v7, 1);
    v16.unwrap(&g_14df4b8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    v13 = v6;
    *((int128_t *)&v8) = *((int128_t *)&v4);
    fish::wutil::wwrite_to_fd(v12, v6, 1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    v19 = a0[2];
    if (a0[2])
    {
        v20 = a0[1];
        v21 = 0;
        do
        {
            *(v0) = 0;
            v2 = 4;
            v3 = 0;
            v4 = *((long long *)(*((long long *)(v20 + (char *)v21)) + 40));
            v5 = *((long long *)(*((long long *)(v20 + (char *)v21)) + 48)) * 224 + *((long long *)(*((long long *)(v20 + (char *)v21)) + 40));
            v22 = v4.find();
            if (!v22)
                core::option::unwrap_failed(&g_14df518); /* do not return */
            v23 = v22 + 144.get();
            if (!v23)
                core::option::unwrap_failed(&g_14df518); /* do not return */
            v8 = 8197;
            v12 = *(v23);
            v14 = 1;
            *((int128_t *)&v15) = *((int128_t *)(*((long long *)(v20 + (char *)v21)) + 24));
            fish_printf::printf_impl::sprintf_locale(&v16, &v0, "%6d  %ls\n", 9, &v8, 2);
            v16.unwrap(&g_14df530);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v8);
            v13 = v3;
            *((int128_t *)&v9) = *((int128_t *)&v0[0]);
            fish::wutil::wwrite_to_fd(v12, v3, 1);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
            v21 += 1;
        } while (v19 * 8 != v21);
    }
    v7 = 0;
    v12 = 4;
    v13 = 0;
    fish_printf::printf_impl::sprintf_locale(&v0, &v7, "\n%s: %s\nInvalid working directory, it must start and end with /", 1, 8, 0);
    v0.unwrap(&g_14df4d0);
    *((int128_t *)&v1) = *((int128_t *)&v7);
    v3 = v13;
    fish::wutil::wwrite_to_fd(v2, v13, 1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v2 = "A";
    v3 = 46;
    *(v0) = 0x8000000000000000;
    v9 = 1;
    v12 = v0.localize();
    v13 = v18;
    fish_printf::printf_impl::sprintf_locale(&v16, &v4, "%sbuiltin %ls returned invalid exit code %d", 2, &v9, 1);
    v16.unwrap(&g_14df4e8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    v13 = v6;
    *((int128_t *)&v10) = *((int128_t *)&v4);
    fish::wutil::wwrite_to_fd(v12, v6, 1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v2 = "U";
    v3 = 72;
    *(v0) = 0x8000000000000000;
    v10 = 1;
    v12 = v0.localize();
    v13 = v18;
    fish_printf::printf_impl::sprintf_locale(&v16, &v4, "%sbuiltin %ls returned invalid exit code %d", 2, &v10, 1);
    v16.unwrap(&g_14df500);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    v13 = v6;
    memcpy(&v10, &v4, 16);
    fish::wutil::wwrite_to_fd(v12, v6, 1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v10);
    return fish::reader::reader_schedule_prompt_repaint();
}
