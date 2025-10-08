fn uu_numfmt::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x458]
    let v1: std::io::stdio::Stdin;  // [bp-0x458]
    let v2: struct32;  // [bp-0x448]
    let v3: struct56;  // [bp-0x440]
    let v4: u64;  // [bp-0x438]
    let v5: iNone;  // [bp-0x408], Other Possible Types: core::fmt::Arguments
    let v6: u64;  // [bp-0x3f8]
    let v7: struct16;  // [bp-0x3f0], Other Possible Types: struct32
    let v8: struct56;  // [bp-0x3f0], Other Possible Types: u64
    let v9: u64;  // [bp-0x3e8]
    let v10: core::fmt::rt::Argument;  // [bp-0x3e0]
    let v11: core::fmt::rt::Argument;  // [bp-0x3d0]
    let v12: u8;  // [bp-0x3c8]
    let v13: struct64;  // [bp-0x320]
    let v14: std::io::stdio::Stdout;  // [bp-0x2e0], Other Possible Types: struct32, struct56, struct712, struct9
    let v15: struct197;  // [bp-0x2e0]
    let v16: u64;  // [bp-0x2c8]
    let v17: struct32;  // [bp-0x2c0]
    let v19: u64;  // rdi
    let v21: void*;  // rax
    let v22: u8;  // dl

    v14 = uu_numfmt::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    v19 = v9;
    if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    }
    v3 = v8;
    v15 = uu_numfmt::parse_options(&v3);
    if v15.field_0 as i64 == 2 {
        v5 = *((&v15.field_0 as &char + 8) as &i128);
        v6 = v16;
        v14 = struct32 {
            field_0: 1
            field_8: *((&v15.field_0 as &char + 8) as &i128)
            field_24: v6
        };
        return alloc::boxed::Box<T>::new(&v14) as u64;
    }
    v0 = v15.field_16;
    v2 = v17;
    memcpy(&v12, &v15 as u8, 168);
    v5 = v0;
    v10 = v5;
    v11 = v2;
    v7 = v15.field_0 as i64;
    v9 = *((&v15.field_0 as &char + 8) as &i64);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3);
    v13 = clap_builder::parser::error::MatchesError::unwrap(&v14);
    if v13.field_0 as i64 {
        v21 = uu_numfmt::handle_args(&v13, &v7);
        if v21 {
            goto LABEL_463ac6;
        }
    } else {
        v1 = std::io::stdio::stdin();
        v14 = struct9 {
            field_0: std::io::stdio::Stdin::lock(&v1 as u128) as u64
            field_8: v22 & 1
        };
        v21 = uu_numfmt::handle_buffer(&v14, &v7);
        if v21 {
LABEL_463ac6:
            v14 = std::io::stdio::stdout();
            core::result::Result<T,E>::expect(<std::io::stdio::Stdout as std::io::Write>::flush(&v14));
        }
    }
    return v21;
}
