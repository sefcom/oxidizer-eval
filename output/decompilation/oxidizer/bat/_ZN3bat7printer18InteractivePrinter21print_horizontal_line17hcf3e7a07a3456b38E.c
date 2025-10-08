fn bat::printer::InteractivePrinter::print_horizontal_line(a0: i64, a1: i64, a2: u64, a3: i32) -> void {
    let v0: Option<struct248>;  // [bp-0x144]
    let v1: Option<struct80>;  // [bp-0x140], Other Possible Types: struct24, struct9, struct_2 *
    let v2: struct16;  // [bp-0x138]
    let v3: i64;  // [bp-0x130], Other Possible Types: u64
    let v4: u64;  // [bp-0x128]
    let v5: i64;  // [bp-0x120]
    let v6: u64;  // [bp-0x118]
    let v7: struct72;  // [bp-0x110], Other Possible Types: u128
    let v8: u128;  // [bp-0x100]
    let v9: core::fmt::Arguments;  // [bp-0xe8], Other Possible Types: u128
    let v10: u64;  // [bp-0xd8]
    let v12: u128;  // [bp-0xb8]
    let v13: u64;  // [bp-0xa8]
    let v14: u64;  // [bp-0xa0]
    let v15: u128;  // [bp-0x88]
    let v16: u8;  // [bp-0x78]
    let v17: core::fmt::rt::Argument;  // [bp-0x70]
    let v18: u128;  // [bp-0x70]
    let v19: struct24;  // [bp-0x60]
    let v20: struct24;  // [bp-0x48]
    let v22: struct16;  // rbp
    let v23: struct24;  // xmm0
    let v24: iNone;  // xmm1
    let v26: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // xmm0
    let v27: core::fmt::Arguments;  // xmm1

    v0 = a3;
    v22 = *((a1 + 528) as &i64);
    if v22 {
        v19 = alloc::slice::<impl [T]>::repeat("─", ~(v22) + *((*((a1 + 0x200) as &i64) + 0x100) as &i64));
        v1 = alloc::slice::<impl [T]>::repeat("─", v22);
        v10 = v3;
        v9 = v1.field_0;
        v1 = &v9;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &v0;
        v4 = <char as core::fmt::Display>::fmt;
        v5 = &v19;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = struct40 {
            field_0: "\x01\x00\x00"
            field_16: &v1
            field_24: 3
        };
        v20 = core::option::Option<T>::map_or_else(None, a2, &v12);
        v16 = *((a1 + 560) as &i8);
        v15 = *((a1 + 544) as &i128);
        v12 = v20.field_0;
        v13 = v20.field_16;
        v14 = 9223372036854775810;
        v17 = core::fmt::rt::Argument {
            ty: &v12 as u320
        };
        v9 = core::fmt::Arguments {
            pieces: [&g_acea80, "\n"]
            args: [v18]
            fmt: 0
        };
        v1 = bat::output::OutputHandle::write_fmt(a2, &v9);
        if &v1 != "\r" {
            v23 = *(&v1.field_0 as &i128);
            v24 = *(&v3 as &i128);
            return struct80 {
                field_0: v23
                field_16: v24
                field_32: *(&v5 as &i128)
                field_48: v7
                field_64: v8
            };
        }
    } else {
        v1 = bat::printer::InteractivePrinter::print_horizontal_line_term(*((a1 + 0x200) as &i64), a2, a1 + 544);
        if &v1 != "\r" {
            v26 = v1 as i128;
            v27 = *((&v1 as &char + 16) as &i128);
            return struct80 {
                field_0: v26
                field_16: v27
                field_32: *((&v1 as &char + 32) as &i128)
                field_48: v7
                field_64: v8
            };
        }
    }
    return struct1 {
        field_0: 13
    };
}
