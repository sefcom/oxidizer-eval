fn uu_ls::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [sp-0x5c0], Other Possible Types: struct_0 *, u64
    let v1: struct24;  // [bp-0x5c0]
    let v2: u128;  // [bp-0x5b8]
    let v3: struct56;  // [bp-0x5a8]
    let v4: struct24;  // [bp-0x568]
    let v5: u64;  // [bp-0x558]
    let v6: struct24;  // [bp-0x550]
    let v7: u64;  // [bp-0x540]
    let v8: struct24;  // [bp-0x538], Other Possible Types: struct56, u64
    let v9: struct16;  // [bp-0x538]
    let v10: i64;  // [bp-0x530], Other Possible Types: u64
    let v11: u64;  // [bp-0x528]
    let v12: u8;  // [bp-0x520]
    let v13: struct28;  // [bp-0x428], Other Possible Types: u64
    let v14: u64;  // [bp-0x420]
    let v15: u64;  // [bp-0x418]
    let v16: struct64;  // [bp-0x320]
    let v17: u8;  // [bp-0x2e0]
    let v19: i64;  // rdi
    let v20: u64;  // rax
    let v21: u64;  // rbx

    uu_ls::uu_app(&v17);
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    if (((0 ^ v9.field_0) & (0 ^ -(v8))) >> 63) as char {
        v19 = v10;
        if (*((v19 + 221) as &i8) & 29) == 12 {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
        }
        if *((v19 + 221) as &i8) {
            v0 = v19;
            v6 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            v13 = struct28 {
                field_0: v6.field_0
                field_16: v7
                field_24: 2
            };
            v20 = alloc::boxed::Box<T>::new(&v13) as u64;
        } else {
            v0 = v19;
            v4 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            v13 = struct28 {
                field_0: v4.field_0
                field_16: v5
                field_24: 1
            };
            v20 = alloc::boxed::Box<T>::new(&v13) as u64;
        }
        return v20;
    } else {
        v3 = v8;
        uu_ls::Config::from(&v9, &v3);
        v21 = v10;
        if v9.field_0 == 0x8000000000000000 {
            return v21;
        }
        memcpy(&v13 as u8, &v12, 240);
        v13 = v9.field_0;
        v14 = v21;
        v15 = v11;
        v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3, _ZN5uu_ls7options5PATHS17h978caca964396fddE.field_0, g_686720.field_0);
        v16 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17h978caca964396fddE.field_0, g_686720.field_0, &v8);
        if v16.field_0 as i64 {
            core::iter::traits::iterator::Iterator::collect(&v8, &v16);
            v2 = *((&v8.field_0 as &char + 8) as &i128);
            v0 = v8.field_0;
        } else {
            v0 = uu_ls::uumain::uumain::{{closure}}();
        }
        v8 = v1;
        v21 = uu_ls::list(&v8, &v13);
        return v21;
    }
}
