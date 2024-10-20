fn uu_shred::get_size(a0: i64) -> u64 {
    let v0: Arguments;  // [bp-0xf0]
    let v1: Argument;  // [sp-0xc0], Other Possible Types: i64
    let v2: i64;  // [sp-0xb8]
    let v3: i64;  // [sp-0xb0]
    let v4: i8;  // [sp-0xa8]
    let v5: i64;  // [bp-0xa0], Other Possible Types: struct8
    let v6: i64;  // [sp-0x98]
    let v7: i64;  // [sp-0x90]
    let v8: i8;  // [sp-0x88]
    let v9: i16;  // [sp-0x80]
    let v10: i8;  // [sp-0x7e]
    let v11: struct32;  // [sp-0x78], Other Possible Types: i256
    let v12: Argument;  // [bp-0x58]
    let v13: String;  // [sp-0x40]
    let v16: i64;  // r14
    let v17: i64;  // r15
    let v18: i64;  // rdx

    if *(a0 as &i64) == 0x8000000000000000 {
        return 0;
    }
    v16 = *((a0 + 8) as &i64);
    v17 = *((a0 + 16) as &i64);
    v9 = 0;
    v10 = 0;
    v5 = struct8 {
        field_0: 0
    };
    v7 = 0;
    v11 = uucore::parser::parse_size::Parser::parse(&v5, v16, v17);
    if v11 != 3 {
        v5 = uucore::util_name();
        v6 = v18;
        v1 = Argument {
            value: &v5
            formatter: <&T as core::fmt::Display>::fmt
        };
        v0 = Arguments {
            pieces: [&g_4ef7b0, ": "]
            args: [&v1]
            fmt: None
        };
        std::io::stdio::_eprint(&v0);
        v5 = 0;
        v6 = v16;
        v7 = v17;
        v8 = 1;
        v1 = Argument {
            value: &v5
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v0 = Arguments {
            pieces: ["invalid file size: ", "\n"]
            args: [&v1]
            fmt: None
        };
        std::io::stdio::_eprint(&v0);
        std::process::exit(1); /* do not return */
    }
    if *((&v11 as &char + 24) as &i64) {
        v1 = 0;
        v2 = v16;
        v3 = v17;
        v4 = 1;
        v12 = Argument {
            value: &v1
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v0 = Arguments {
            pieces: [&anon.edec59db3b863b6761f2fcbb7c5018ad.77.llvm.1026247603497507326, ": Value too large for defined data type"]
            args: [&v12]
            fmt: None
        };
        v13 = alloc::fmt::format::format_inner(&v0);
    } else {
        return 1;
    }
}
