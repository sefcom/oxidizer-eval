fn bat::printer::InteractivePrinter::print_header_component_with_indent(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> double {
    let v0: u64;  // [bp-0x80]
    let v1: core::option::Option<&str>;  // [bp-0x78]
    let v2: core::fmt::rt::Argument;  // [bp-0x70]
    let v3: u128;  // [bp-0x70]
    let v4: core::fmt::Arguments;  // [bp-0x60], Other Possible Types: struct9
    let v5: i8;  // [bp-0x50]
    let v6: i8;  // [bp-0x40]
    let v7: u128;  // [bp-0x30]
    let v8: i8;  // [bp-0x20]
    let v10: u64;  // xmm0lq
    let v11: core::result::Result<usize, std::io::error::Error>;  // xmm0
    let v12: struct24;  // xmm1
    let v13: struct24;  // xmm2

    v0 = a3;
    v1 = a4;
    v4 = bat::printer::InteractivePrinter::print_header_component_indent(a1, a2);
    if &v4 != "\r" {
        v11 = *(&v4.field_0 as &i128);
        v12 = *(&v5 as &i128);
        v13 = *(&v6 as &i128);
        return struct80 {
            field_0: v11
            field_16: v12
            field_32: v13
            field_48: v7
            field_64: *(&v8 as &i128)
        };
    }
    v2 = core::fmt::rt::Argument {
        ty: &v0
    };
    v4 = core::fmt::Arguments {
        pieces: [&g_acea80, "\n"]
        args: [v3]
        fmt: 0
    };
    bat::output::OutputHandle::write_fmt(a0, a2, &v4);
    return v10;
}
