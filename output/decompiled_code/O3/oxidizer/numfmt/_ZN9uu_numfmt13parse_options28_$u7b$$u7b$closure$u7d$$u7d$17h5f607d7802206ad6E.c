fn uu_numfmt::parse_options::{{closure}}(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: Argument;  // [bp-0x60]
    let v1: void*;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [sp-0x40]
    let v4: u8;  // [sp-0x38]
    let v5: Arguments;  // [bp-0x30]

    v1 = 0;
    v2 = a1;
    v3 = a2;
    v4 = 1;
    v0 = Argument {
        value: &v1
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v5 = Arguments {
        pieces: ["invalid header value "]
        args: [&v0]
        fmt: None
    };
    return alloc::fmt::format::format_inner(a0, &v5);
}
