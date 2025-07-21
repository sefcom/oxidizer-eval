fn uu_base32::base_common::base_app(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x840]
    let v1: u64;  // [bp-0x838]
    let v2: u64;  // [bp-0x830]
    let v3: u8;  // [bp-0x828]
    let v4: struct24;  // [bp-0x810], Other Possible Types: u64
    let v5: u64;  // [bp-0x808]
    let v6: i64;  // [bp-0x800]
    let v7: u64;  // [bp-0x7f8]
    let v8: void*;  // [bp-0x7f0]
    let v9: u64;  // [bp-0x554]
    let v10: u32;  // [bp-0x54c]
    let v11: u8;  // [bp-0x548]
    let v12: struct437;  // [bp-0x2f8]
    let v13: u64;  // [bp-0x3c]
    let v14: u32;  // [bp-0x34]

    v12 = clap_builder::builder::command::Command::new(uucore::util_name(), a2);
    clap_builder::builder::command::Command::version(&v4, &v12, "0.0.28");
    clap_builder::builder::command::Command::about(&v12, &v4, a1, a2);
    uucore::format_usage(&v11, a3, a4);
    clap_builder::builder::command::Command::override_usage(&v4, &v12, &v11);
    memcpy(&v12, &v4, 700);
    v13 = 549755814016 | v9;
    v14 = v10;
    clap_builder::builder::arg::Arg::new(&v4, "decode");
    clap_builder::builder::arg::Arg::short(&v11, &v4, 100);
    clap_builder::builder::arg::Arg::long(&v4, &v11, "decode");
    clap_builder::builder::arg::Arg::help(&v11, &v4, "decode data");
    clap_builder::builder::arg::Arg::action(&v4, &v11, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v11, &v4, "decode");
    clap_builder::builder::command::Command::arg(&v4, &v12, &v11);
    clap_builder::builder::arg::Arg::new(&v12, "ignore-garbage");
    clap_builder::builder::arg::Arg::short(&v11, &v12, 105);
    clap_builder::builder::arg::Arg::long(&v12, &v11, "ignore-garbage");
    clap_builder::builder::arg::Arg::help(&v11, &v12, "when decoding, ignore non-alphabetic characters");
    clap_builder::builder::arg::Arg::action(&v12, &v11, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v11, &v12, "ignore-garbage");
    clap_builder::builder::command::Command::arg(&v12, &v4, &v11);
    clap_builder::builder::arg::Arg::new(&v4, "wrap");
    clap_builder::builder::arg::Arg::short(&v11, &v4, 119);
    clap_builder::builder::arg::Arg::long(&v4, &v11, "wrap");
    clap_builder::builder::arg::Arg::value_name(&v11, &v4);
    v1 = &g_40c310;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v4 = "wrap encoded lines after COLS character (default ";
    v5 = 2;
    v8 = 0;
    v6 = &v1;
    v7 = 1;
    v4 = core::option::Option<T>::map_or_else(a2);
    clap_builder::builder::arg::Arg::help(&v4, &v11, &v3);
    clap_builder::builder::arg::Arg::overrides_with(&v11, &v4, "wrap");
    clap_builder::builder::command::Command::arg(&v4, &v12, &v11);
    clap_builder::builder::arg::Arg::new(&v12, "file");
    clap_builder::builder::arg::Arg::index(&v11, &v12);
    clap_builder::builder::arg::Arg::action(&v12, &v11, 1);
    clap_builder::builder::arg::Arg::value_hint(&v11, &v12, 3);
    clap_builder::builder::command::Command::arg(v0, &v4, &v11);
    return a0;
}
