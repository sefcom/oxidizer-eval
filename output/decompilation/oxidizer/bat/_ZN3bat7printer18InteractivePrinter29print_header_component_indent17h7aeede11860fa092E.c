fn bat::printer::InteractivePrinter::print_header_component_indent(a0: u64, a1: i64, a2: void*) -> void {
    let v0: core::fmt::rt::Argument;  // [bp-0xe0], Other Possible Types: u128
    let v1: core::fmt::rt::Argument;  // [bp-0xe0], Other Possible Types: u128
    let v2: u128;  // [bp-0xd0]
    let v3: core::fmt::rt::Argument;  // [bp-0xd0]
    let v4: core::fmt::Arguments;  // [bp-0xc0], Other Possible Types: u64
    let v5: i64;  // [bp-0xb8]
    let v6: i64;  // [bp-0xb0]
    let v7: struct24;  // [bp-0xa8]
    let v10: core::fmt::Arguments;  // [bp-0x78], Other Possible Types: struct24
    let v11: struct24;  // [bp-0x48]
    let v13: struct24;  // r13

    if bat::style::StyleComponents::grid(192 + *((a1 + 0x200) as &i64)) {
        v13 = *((a1 + 528) as &i64);
        v11 = alloc::slice::<impl [T]>::repeat(" ", v13);
        v4 = 0x8000000000000000;
        v5 = (!v13 ? 1 : &g_480ea4);
        v6 = (v13) * 4;
        v7 = 9223372036854775810;
        v1 = core::fmt::rt::Argument {
            ty: &v11
        };
        v3 = core::fmt::rt::Argument {
            ty: &v4
        };
        v10 = core::fmt::Arguments {
            pieces: [&g_485820, &g_485830]
            args: [v0, v2]
            fmt: 0
        };
        bat::output::OutputHandle::write_fmt(a0, a2, &v10);
    } else {
        v10 = alloc::slice::<impl [T]>::repeat(" ", *((a1 + 528) as &i64));
        v0 = core::fmt::rt::Argument {
            ty: &v10
        };
        v4 = core::fmt::Arguments {
            pieces: [&g_47f780]
            args: [v1]
            fmt: 0
        };
        bat::output::OutputHandle::write_fmt(a0, a2, &v4);
    }
    return;
}
