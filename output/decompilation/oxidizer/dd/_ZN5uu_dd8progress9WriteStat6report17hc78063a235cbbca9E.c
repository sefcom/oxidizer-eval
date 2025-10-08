fn uu_dd::progress::WriteStat::report(a0: i64, a1: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x50]
    let v1: u128;  // [bp-0x50]
    let v2: core::fmt::rt::Argument;  // [bp-0x40]
    let v3: core::fmt::Arguments;  // [bp-0x40]
    let v4: core::fmt::Arguments;  // [bp-0x30]

    v0 = core::fmt::rt::Argument {
        ty: a0 + 16
    };
    v2 = core::fmt::rt::Argument {
        ty: a0 + 24
    };
    v4 = core::fmt::Arguments {
        pieces: [&g_53dbb8, "+", " records out\n"]
        args: [v1, v3]
        fmt: 0
    };
    return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v4);
}
