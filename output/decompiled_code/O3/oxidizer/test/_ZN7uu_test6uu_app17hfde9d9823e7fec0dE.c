fn uu_test::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0x888], Other Possible Types: struct24
    let v1: struct712;  // [sp-0x870], Other Possible Types: i5696
    let v2: i64;  // [sp-0x6a0]
    let v3: i128;  // [sp-0x698]
    let v4: i128;  // [sp-0x5a8]
    let v5: i3336;  // [sp-0x2d8], Other Possible Types: Enum
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v9: i64;  // r14

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v5 = clap_builder::builder::command::Command::new(g_4e60e0, g_4e60e8);
    v6 = &g_4185a2;
    v7 = 6;
    v1 = clap_builder::builder::command::Command::about(&v5, &g_4185a8, 36);
    v0 = uucore::format_usage(&g_4185cc, 47);
    v9 = v0;
    if v9 != 0x8000000000000000 {
        v4 = *((&v0 as &char + 8) as &i128);
    }
    v2 = v9;
    v3 = v4;
    memcpy(&v4, &v1, 712);
    clap_builder::builder::command::Command::after_help(a0, &v4, &g_4185fb, 3055);
    return a0;
}
