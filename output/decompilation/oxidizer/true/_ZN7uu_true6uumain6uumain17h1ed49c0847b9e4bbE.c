fn uu_true::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3a8]
    let v1: i64;  // [sp-0x3a0]
    let v2: i64;  // [sp-0x398]
    let v3: i64;  // [sp-0x390]
    let v4: i64;  // [sp-0x388]
    let v5: i64;  // [sp-0x380]
    let v6: i64;  // [sp-0x378]
    let v7: i64;  // [sp-0x370]
    let v8: i64;  // [sp-0x368]
    let v9: i8;  // [bp-0x350]
    let v10: i64;  // [sp-0x348]
    let v11: i64;  // [sp-0x340]
    let v12: i64;  // [sp-0x338]
    let v13: i8;  // [bp-0x330]
    let v14: i8;  // [bp-0x320]
    let v15: i8;  // [bp-0x318]
    let v16: i8;  // [bp-0x310]
    let v17: i5696;  // [sp-0x2e0], Other Possible Types: struct712
    let v19: i32;  // eax
    let v20: i64;  // r14
    let v21: i64;  // rdx

    v17 = uu_true::uu_app();
    core::iter::traits::iterator::Iterator::collect(&v13, a0, a1);
    if v14 > 2 {
        return;
    }
    v4 = v13;
    clap_builder::builder::command::Command::try_get_matches_from_mut(&v15, &v17, &v4);
    if !(v15 == 0x8000000000000000) {
        goto LABEL_0x459301;
    }
    v19 = *((v16 + 213) as &i8);
    if v19 != 12 {
        if !(v19 == 14) {
            goto LABEL_4592f7;
        }
        v1 = std::io::stdio::stdout();
        clap_builder::builder::command::Command::render_version(&v9, &v17);
        v2 = &v9;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &g_4f6848;
        v5 = 2;
        v8 = 0;
        v6 = &v2;
        v7 = 1;
        if !(v19 == 14) {
            goto LABEL_459248;
        }
    } else {
        v20 = clap_builder::builder::command::Command::print_help(&v17);
        if !v20 {
            goto LABEL_4592f7;
        }
LABEL_459248:
        v0 = v20;
        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v2 = uucore::util_name();
        v3 = v21;
        v9 = &v2;
        v10 = <&T as core::fmt::Display>::fmt;
        v11 = &v0;
        v12 = <std::io::error::Error as core::fmt::Display>::fmt;
        v4 = &g_4f6880;
        v5 = 3;
        v8 = 0;
        v6 = &v9;
        v7 = 2;
        uucore::mods::error::set_exit_code(1);
    }
LABEL_4592f7:
}
