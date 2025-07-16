fn uu_mktemp::Options::from(a1: i64) -> : struct76 {
    let a0: u64;  // rsi
    let v0: Result<struct40, struct16>;  // [bp-0xf8], Other Possible Types: std::path::PathBuf, struct24, u128
    let v1: struct24;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf8]
    let v3: u192;  // [sp-0xf8]
    let v4: Result<struct40, struct16>;  // [bp-0xf8]
    let v5: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xf8]
    let v6: u128;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: struct24;  // [bp-0xc8]
    let v9: u128;  // [bp-0xc8]
    let v10: u128;  // [bp-0xc8]
    let v11: u64;  // [bp-0xb8]
    let v12: std::sys::os_str::bytes::Buf;  // [bp-0xa8], Other Possible Types: u64
    let v13: u128;  // [bp-0xa8]
    let v14: u64;  // [bp-0xa0]
    let v15: u64;  // [bp-0x98]
    let v16: u64;  // [bp-0x88]
    let v17: u128;  // [bp-0x88]
    let v18: u128;  // [bp-0x88]
    let v19: u64;  // [bp-0x78]
    let v20: u128;  // [bp-0x68]
    let v21: u64;  // [bp-0x58]
    let v22: struct24;  // [bp-0x48]
    let v23: u64;  // [bp-0x48]
    let v25: &u64;  // rax
    let v26: u64;  // rax
    let v27: u64;  // rcx
    let v28: u8;  // al
    let v29: u8;  // al
    let v30: u8;  // al
    let v31: u64;  // rax
    let v32: u8;  // al
    let v33: i64;  // rdi

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "tmpdir");
    v25 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&g_41f0d1, 6, &v0), a0);
    if v25 {
        v22 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v25);
    }
    v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "template");
    v26 = clap_builder::parser::error::MatchesError::unwrap("template", &v4);
    if v26 {
        v5 = std::env::var("TMPDIR");
        if !v5 as i64 && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8 {
            v1 = std::env::var_os("TMPDIR");
            v23 = v1.field_0;
            v27 = v23;
            if !(v27 == 0x8000000000000000) {
                goto LABEL_4bec99;
            }
        } else if v23 != 0x8000000000000000 {
            memcpy(&v20, &v22 as u8, 16);
        } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8 || (v23 = 0x8000000000000000, clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "tmpdir") as i8) {
            v0 = std::env::temp_dir();
            v27 = v2;
LABEL_4bec99:
            v23 = v27;
            memcpy(&v20, &v3, 16);
        }
        v16 = v23;
        v17 = v17 & 0xffffffffffffffff0000000000000000 | v16;
        memcpy(&v17, &v20, 16);
        v12 = <alloc::string::String as core::clone::Clone>::clone(v26);
        v11 = v19;
        v9 = v17;
        memcpy(&v1, &v12, 16);
        v7 = v15;
    } else {
        if v23 == 0x8000000000000000 {
            v1 = core::ops::function::FnOnce::call_once();
        } else {
            v6 = *(&v22.field_8 as &i128);
            v2 = v23;
        }
        v15 = v7;
        v12 = v2;
        v14 = v1.field_8;
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("tmp.XXXXXXXXXX");
        v7 = v11;
        v0 = *(&v8.field_0 as &i128);
        memcpy(&v8, &v12, 16);
        v11 = v15;
    }
    v21 = v11;
    v20 = v9;
    v19 = v7;
    memcpy(&v17, &v2, 16);
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "directory") as i32;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "dry-run") as i32;
    v30 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "quiet") as i32;
    v15 = v21;
    v13 = v20;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "suffix");
    v31 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v0);
    if v31 {
        v0 = core::ops::function::FnOnce::call_once(v31);
        v11 = v7;
        memcpy(&v0, &v0, 16);
    }
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "t") as i8;
    *((v33 + 16) as &u64) = v19;
    *(v33 as &u128) = v18;
    *((v33 + 72) as &u8) = v28;
    *((v33 + 73) as &u8) = v29;
    *((v33 + 74) as &u8) = v30;
    *((v33 + 24) as &u128) = v13;
    *((v33 + 40) as &u64) = v15;
    *((v33 + 48) as &u128) = v10;
    *((v33 + 64) as &u64) = v11;
    *((v33 + 75) as &u8) = v32;
    return;
}
