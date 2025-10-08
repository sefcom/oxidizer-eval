fn starship::print::prompt(a0: void*, a1: u32) -> void {
    let v0: Option<struct24>;  // [bp-0x748]
    let v1: std::io::stdio::Stdout;  // [bp-0x740]
    let v2: core::fmt::rt::Argument;  // [bp-0x738]
    let v3: struct24;  // [bp-0x738]
    let v4: core::fmt::Arguments;  // [bp-0x728]
    let v5: u8;  // [bp-0x6f8]
    let v6: struct361;  // [bp-0x6e0]

    v6 = starship::context::Context::new(a0, a1);
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    starship::print::get_prompt(&v5, &v6);
    v2 = core::fmt::rt::Argument {
        ty: &v5
    };
    v4 = core::fmt::Arguments {
        pieces: [&g_525500]
        args: [v3]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(std::io::Write::write_fmt(&v0, &v4));
    return;
}
