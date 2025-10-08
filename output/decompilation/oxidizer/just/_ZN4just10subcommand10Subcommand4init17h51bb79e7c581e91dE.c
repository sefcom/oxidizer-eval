fn just::subcommand::Subcommand::init(a1: i64) -> : struct41 {
    let a0: i64;  // rdi
    let v0: core::fmt::rt::Argument;  // [bp-0xb8], Other Possible Types: u8
    let v1: u128;  // [bp-0xb1]
    let v2: i8;  // [bp-0xb0]
    let v3: iNone;  // [bp-0xa1], Other Possible Types: u64
    let v4: i8;  // [bp-0xa0]
    let v5: struct24;  // [bp-0x90]
    let v6: struct24;  // [bp-0x88]
    let v7: u128;  // [bp-0x80]
    let v8: u64;  // [bp-0x78]
    let v9: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x70]
    let v10: struct24;  // [bp-0x60]
    let v11: u128;  // [bp-0x58]
    let v12: iNone;  // [bp-0x48]
    let v13: struct24;  // [bp-0x20]
    let v15: core::fmt::rt::Argument;  // rax
    let v16: alloc::string::String;  // xmm1
    let v17: core::option::Option<u32>;  // rax
    let v18: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rcx
    let v19: core::fmt::rt::Argument;  // rax

    just::search::Search::init(&v0, a1 + 264);
    v15 = *(&v0 as &i64);
    v11 = *(&v2 as &i128);
    v12 = *(&v4 as &i128);
    if (((0 ^ v15) & (0 ^ -(v15))) >> 63) as char {
        v3 = v12;
        v1 = v11;
        v16 = *((&v1 as &char + 9) as &i128);
        return struct48 {
            field_0: 42
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_32: <UNKNOWN>
        };
    }
    v7 = v11;
    v9 = v12;
    v6 = v15;
    v10 = v5;
    if std::path::Path::is_file(v7 as i64, v8) {
        v3 = v8;
        v1 = *(&v6.field_0 as &i128);
        v17 = *((&v1 as &char + 8) as &i64);
        v18 = v3;
        return struct40 {
            field_0: 28
            field_1: <UNKNOWN>
            field_16: v18
            field_24: <UNKNOWN>
        };
    }
    v19 = std::fs::write(&v6);
    v0 = v19;
    if v19 {
        return struct40 {
            field_0: 55
            padding_1: <UNKNOWN>
            field_8: v19
            field_16: *(&v6.field_0 as &i128)
            field_32: v8
        };
    }
    if !*((a1 + 423) as &i8) {
        return struct1 {
            field_0: 56
        };
    }
    v13 = v7;
    eprintln!("Wrote justfile to `{}`", &v13);
    return struct1 {
        field_0: 56
    };
}
