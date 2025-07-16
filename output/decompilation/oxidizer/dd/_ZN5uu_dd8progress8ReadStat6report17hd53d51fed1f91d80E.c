fn uu_dd::progress::ReadStat::report(a0: i64, a1: i64) -> long long {
    let v0: iNone;  // [bp-0x50]
    let v1: u128;  // [bp-0x50]
    let v2: iNone;  // [bp-0x40]
    let v3: u128;  // [bp-0x40]
    let v4: u384;  // [bp-0x30]

    v0 = core::fmt::rt::Argument {
        ty: a0
    };
    v2 = core::fmt::rt::Argument {
        ty: a0 + 8
    };
    v4 = core::fmt::Arguments {
        pieces: [&g_562500, "+", " records in\n"]
        args: [v1, v3]
        fmt: 0
    };
    return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v4);
}
