fn bat::printer::InteractivePrinter::print_horizontal_line_term(a0: i64, a1: i64, a2: void*, a3: i64) -> void {
    let v0: core::fmt::rt::Argument;  // [bp-0xf8]
    let v1: u128;  // [bp-0xf8]
    let v2: core::fmt::Arguments;  // [bp-0xe8]
    let v3: struct24;  // [bp-0xb8]
    let v4: Result<struct80, struct9>;  // [bp-0xa0]
    let v5: struct32;  // [bp-0x88]
    let v6: u8;  // [bp-0x78]
    let v7: struct9;  // [bp-0x70]
    let v8: struct32;  // [bp-0x60]
    let v9: struct32;  // [bp-0x50]
    let v10: u128;  // [bp-0x40]
    let v11: i8;  // [bp-0x30]

    v3 = alloc::slice::<impl [T]>::repeat("─", *((a1 + 0x100) as &i64));
    v6 = *((a3 + 16) as &i8);
    v5 = *(a3 as &i128);
    v4 = 9223372036854775810;
    v0 = core::fmt::rt::Argument {
        ty: &v3
    };
    v2 = core::fmt::Arguments {
        pieces: [&g_acea80, "\n"]
        args: [v1]
        fmt: 0
    };
    v7 = bat::output::OutputHandle::write_fmt(a2, &v2);
    if &v7 != "\r" {
        return struct80 {
            field_0: v7
            field_16: v8
            field_32: v9
            field_48: v10
            field_64: *(&v11 as &i128)
        };
    }
    return struct1 {
        field_0: 13
    };
}
