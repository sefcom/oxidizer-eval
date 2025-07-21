fn uu_mktemp::Options::from(a1: &struct56) -> : struct76 {
    let a0: u64;  // rsi
    let v0: struct24;  // [bp-0xf8], Other Possible Types: core::result::Result<alloc::string::String, std::env::VarError>
    let v1: std::path::PathBuf;  // [bp-0xf8], Other Possible Types: struct24, u192
    let v2: u128;  // [bp-0xf8]
    let v3: u64;  // [bp-0xf8]
    let v4: Result<struct40, struct16>;  // [bp-0xf8]
    let v5: struct24;  // [bp-0xf8]
    let v6: u128;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xc8], Other Possible Types: u128
    let v10: u64;  // [bp-0xb8]
    let v11: alloc::string::String;  // [bp-0xa8], Other Possible Types: u64
    let v12: u128;  // [bp-0xa8]
    let v13: u64;  // [bp-0xa0]
    let v14: u64;  // [bp-0x98]
    let v15: u64;  // [bp-0x88]
    let v16: u128;  // [bp-0x88]
    let v17: u128;  // [bp-0x80]
    let v18: u64;  // [bp-0x78]
    let v19: u128;  // [bp-0x68]
    let v20: u64;  // [bp-0x58]
    let v21: struct24;  // [bp-0x48]
    let v22: u64;  // [bp-0x48]
    let v24: &u64;  // rax
    let v25: u64;  // rax
    let v26: u64;  // rcx
    let v27: u8;  // al
    let v28: u8;  // al
    let v29: u8;  // al
    let v30: u64;  // rax
    let v31: u8;  // al
    let v32: i64;  // rdi

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "tmpdir");
    v24 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&g_41f0d1, 6, &v0), a0);
    if v24 {
        v21 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v24);
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "template");
    v25 = clap_builder::parser::error::MatchesError::unwrap("template", &v4);
    if v25 {
        v0 = std::env::var("TMPDIR");
        if !v0 as i64 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8 {
            v1 = std::env::var_os("TMPDIR");
            v22 = v1.field_0;
            v26 = v22;
            if !(v26 == 0x8000000000000000) {
                goto LABEL_4bec99;
            }
        } else if v22 == 0x8000000000000000 && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8 || (v22 = 0x8000000000000000, clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "tmpdir") as i8)) {
            v1 = std::env::temp_dir();
            v26 = v3;
LABEL_4bec99:
            v22 = v26;
            v19 = *((&v1 as &char + 8) as &i128);
        }
        v15 = v22;
        v17 = v19;
        v11 = <alloc::string::String as core::clone::Clone>::clone(v25);
        v10 = v18;
        v8 = *(&v15 as &i128);
        v2 = *(&v11.vec.buf.cap as &i128);
        v7 = v14;
    } else {
        if v22 == 0x8000000000000000 {
            v5 = core::ops::function::FnOnce::call_once();
        } else {
            v6 = *(&v21.field_8 as &i128);
            v3 = v22;
        }
        v14 = v7;
        v11 = v3;
        v13 = v5.field_8;
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("tmp.XXXXXXXXXX");
        v7 = v10;
        v2 = *(&v8.field_0 as &i128);
        v8 = *(&v11 as &i128);
        v10 = v14;
    }
    v20 = v10;
    v19 = v8;
    v18 = v7;
    v16 = *(&v3 as &i128);
    v27 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "directory") as i32;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dry-run") as i32;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quiet") as i32;
    v14 = v20;
    v12 = v19;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "suffix");
    v30 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v0);
    if v30 {
        v0 = core::ops::function::FnOnce::call_once(v30);
        v10 = v7;
        v8 = *(&v0.field_0 as &i128);
    }
    v31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8;
    *((v32 + 16) as &u64) = v18;
    *(v32 as &u128) = v16;
    *((v32 + 72) as &u8) = v27;
    *((v32 + 73) as &u8) = v28;
    *((v32 + 74) as &u8) = v29;
    *((v32 + 24) as &u128) = v12;
    *((v32 + 40) as &u64) = v14;
    *((v32 + 48) as &u128) = v8;
    *((v32 + 64) as &u64) = v10;
    *((v32 + 75) as &u8) = v31;
    return;
}
