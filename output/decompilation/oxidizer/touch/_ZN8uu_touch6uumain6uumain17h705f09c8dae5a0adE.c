fn uu_touch::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x438]
    let v4: u64;  // [bp-0x428]
    let v6: Result<struct56, struct16>;  // [bp-0x418], Other Possible Types: struct48, u128
    let v7: struct56;  // [bp-0x418], Other Possible Types: struct64
    let v8: struct64;  // [bp-0x418]
    let v9: u64;  // [bp-0x408]
    let v10: struct56;  // [bp-0x3d0]
    let v11: u128;  // [bp-0x398]
    let v13: u64;  // [bp-0x388]
    let v14: Result<struct24, struct24>;  // [bp-0x380]
    let v15: u64;  // [bp-0x378]
    let v16: u32;  // [bp-0x370]
    let v17: struct52;  // [bp-0x368], Other Possible Types: u128
    let v18: u64;  // [bp-0x358]
    let v19: u128;  // [bp-0x350]
    let v20: u64;  // [bp-0x340]
    let v21: struct64;  // [bp-0x338]
    let v22: std::sys::os_str::bytes::Buf;  // [bp-0x2f8], Other Possible Types: struct56, Result<struct40, struct16>, u8
    let v23: Result<struct12, struct16>;  // [bp-0x2f8], Other Possible Types: std::sys::os_str::bytes::Buf
    let v25: u64;  // [bp-0x2e8]
    let v26: u128;  // [bp-0x2e0]
    let v27: u64;  // [bp-0x2d0]
    let v28: u8;  // [bp-0x2c8]
    let v29: u8;  // [bp-0x2c7]
    let v30: u8;  // [bp-0x2c6]
    let v31: u8;  // [bp-0x2c5]
    let v33: u8;  // al
    let v34: u64;  // rbx
    let v35: i64;  // r14
    let v36: i64;  // rax
    let v37: u64;  // rax
    let v38: u8;  // al
    let v39: u8;  // al
    let v40: u64;  // rax

    uu_touch::uu_app(&v22);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v22, a0, a1);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64));
        },
        Ok(v10) => {
            v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE.__0, g_710d40.__0);
            v7 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch9ARG_FILES17h3d59eb602f5bfe9bE.__0, g_710d40.__0, &v22);
            if v7.field_0 as i64 {
                v21 = v8;
                v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v21);
                v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN8uu_touch7options8NO_DEREF17h87e2d6a561434778E.__0, g_711590.__0) as i32 as i8;
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE.__0, g_7115d0.__0);
                v35 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9REFERENCE17h77df47f4ac86215eE.__0, g_7115d0.__0, &v22);
                v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E.__0, g_7115e0.__0);
                v36 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources9TIMESTAMP17h7271dcbbfda0a8a3E.__0, g_7115e0.__0, &v22);
                if v35 {
                    v22 = std::sys::os_str::bytes::Slice::to_owned(*((v35 + 8) as &i64), *((v35 + 16) as &i64));
                    v4 = v25;
                    v0 = *(&v22.inner.buf.cap as &i128) as u128;
LABEL_573ca8:
                    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E.__0, g_7115c0.__0);
                    v37 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_touch7options7sources4DATE17h12ee10ec74f71cb0E.__0, g_7115c0.__0, &v22);
                    if v37 {
                        v23 = <alloc::string::String as core::clone::Clone>::clone(v37);
                        v13 = v25;
                        v11 = *(&v23.inner.buf.cap as &i128);
                    }
                    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN8uu_touch7options9NO_CREATE17hab80ce86436bd515E.__0, g_711580.__0) as i32 as i8;
                    v18 = v4;
                    v17 = v0;
                    v9 = v13;
                    v6 = v11;
                    v39 = uu_touch::determine_atime_mtime_change(&v10) as i8;
                    v28 = v38;
                    v29 = v33;
                    v26 = v17;
                    v27 = v18;
                    v22 = v6;
                    v25 = v9;
                    v31 = v39;
                    v30 = 0;
                    v17 = uu_touch::touch(v15, v16);
                    v40 = v17.field_0;
                    if v40 == 9223372036854775812 {
                        return 0;
                    }
                    v6 = struct48 {
                        field_0: v40
                        field_8: *(&v17.field_8 as &i128)
                        field_24: v19
                        field_40: v20
                    };
                    v34 = alloc::boxed::Box<T>::new(&v6);
                } else if !(v36) || (v23 = uu_touch::parse_timestamp(*((v36 + 8) as &i64), *((v36 + 16) as &i64)), !v23 as i64) {
                    goto LABEL_573ca8;
                }
            } else {
                v34 = uu_touch::uumain::uumain::{{closure}}();
            }
            return v34;
        },
    }
}
