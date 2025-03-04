fn uu_ls::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x5c0], Other Possible Types: int
    let v1: i64;  // [sp-0x5c0]
    let v2: struct8;  // [bp-0x5a8], Other Possible Types: struct64, unsigned long
    let v3: iNone;  // [sp-0x568]
    let v4: struct24;  // [sp-0x530]
    let v5: struct24;  // [sp-0x518]
    let v6: struct24;  // [sp-0x500]
    let v7: i64;  // [bp-0x4e8], Other Possible Types: struct56, struct64, Result<struct208, struct16>, char
    let v8: i64;  // [sp-0x4e0]
    let v9: i64;  // [bp-0x4d8]
    let v10: iNone;  // [sp-0x3e8], Other Possible Types: unsigned long
    let v11: i64;  // [sp-0x3e0]
    let v12: i64;  // [sp-0x3d8]
    let v13: i8;  // [bp-0x3d0]
    let v14: struct712;  // [sp-0x2e8]
    let v16: i64;  // rdi
    let v17: i8;  // al
    let v18: i64;  // r15
    let v19: i64;  // rbx
    let v21: i64;  // rbx
    let v23: i64;  // rbx

    v14 = uu_ls::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v7, &v14, a0, a1);
    if v7 != 0x8000000000000000 {
        v3 = *(&v7 as &i448);
        v7 = uu_ls::Config::from(&v3);
        v18 = v7;
        v19 = v8;
        v21 = v19;
        if v18 == 0x8000000000000000 {
            return v21;
        }
        memcpy(&v13, &v7, 232);
        v10 = v18;
        v11 = v19;
        v12 = *((&v7 as &char + 16) as &i64);
        v7 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v3, _ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8);
        v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN5uu_ls7options5PATHS17hbdf78393493f0f48E, g_6131f8, &v7);
        if !v2 {
            v0 = uu_ls::uumain::uumain::{{closure}}();
        } else {
            v7 = struct64 {
                field_0: v22
                field_16: v2.field_16
                field_32: v2.field_32
                field_48: v2.field_48
            };
            v6 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v7);
            v0 = v6;
        }
        *(&v9 as &i64) = (&v0)[16] as i64;
        v7 = v1;
        v8 = (&v0)[8] as i64;
        v21 = v23;
        return v21;
    } else {
        v16 = v8;
        v17 = *((v16 + 213) as &i8);
        if (v17 & 29) == 12 {
            v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
            return v21;
        }
        if !v17 {
            v2 = struct8 {
                field_0: v16
            };
            v4 = <T as alloc::string::ToString>::to_string(&v2);
            v10 = *(&v4 as &i224);
            alloc::boxed::Box<T>::new(&v10);
        } else {
            v2 = struct8 {
                field_0: v16
            };
            v5 = <T as alloc::string::ToString>::to_string(&v2);
            v10 = *(&v5 as &i224);
            alloc::boxed::Box<T>::new(&v10);
        }
        return v21;
    }
}
