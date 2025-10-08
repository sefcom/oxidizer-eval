void fish::builtins::fish_key_reader::setup_and_process_keys(unsigned int a0, unsigned long long a1, unsigned int a2, unsigned int a3, void* a4)
{
    unsigned long long v0;  // [bp-0x148]
    char v1;  // [bp-0x138]
    unsigned int v2;  // [bp-0x137]
    unsigned short v3;  // [bp-0x133]
    char v4;  // [bp-0x131]
    unsigned long v5;  // [bp-0x130]
    int v6;  // [bp-0x128]
    void* v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    void* v9;  // [bp-0x108]
    unsigned long long v10[3];  // [bp-0x100]
    unsigned long long v11;  // [bp-0xf8]
    unsigned long long v12;  // [bp-0xf0]
    char v13;  // [bp-0xe8]
    int v14;  // [bp-0xe8]
    unsigned int v15;  // [bp-0xe7]
    unsigned short v16;  // [bp-0xe3]
    char v17;  // [bp-0xe1]
    unsigned long v18;  // [bp-0xe0]
    int v19;  // [bp-0xd8], Other Possible Types: void*
    char v20;  // [bp-0xc8]
    unsigned long v21;  // [bp-0xc0]
    unsigned long v23;  // r13
    char v24[30];  // r14
    unsigned long long v25;  // rax
    char v26;  // dl

    v23 = a2;
    fish::reader::set_shell_modes(0, "fish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 15);
    if ((char)v23)
    {
        a1.append("\n", 1);
        a1.appendln("To terminate this program type \"exit\" or \"quit\" in this window,", 63);
        v24 = fish::common::shell_modes();
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v11 = "o";
        v12 = 43;
        *(v10) = 0x8000000000000000;
        v25 = v10.localize();
        if ((char)__CFADD__(v24[25], 96))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c9a40); /* do not return */
        v5 = v24[25] + 96;
        v1 = 4;
        if ((char)__CFADD__(v24[29], 96))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c9a58); /* do not return */
        v19 = v6;
        v13 = v1;
        v15 = v2;
        v16 = v3;
        v17 = v4;
        v18 = v5;
        v20 = 4;
        v21 = v24[29] + 96;
        v0 = 2;
        fish_printf::printf_impl::sprintf_locale(&v1, &v7, v25);
        v1.unwrap(&g_14c9a70);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v10);
        *((int128_t *)&v14) = *((int128_t *)&v7);
        v19 = 0;
        a1.appendln(&v13);
        a1.appendln("\n", 1);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v24, v26 & 1);
    }
    memcpy(&v13, a4, 184);
    fish::builtins::fish_key_reader::process_input(a0, a1, v23, a3, &v13);
    return;
}
