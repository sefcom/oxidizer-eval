fn uu_mktemp::Options::from(a1: &struct56) -> : struct76 {
    let a0: i64;  // rdi
    let v0: alloc::string::String;  // [bp-0xe0], Other Possible Types: core::fmt::Arguments, core::result::Result<alloc::string::String, std::env::VarError>
    let v1: alloc::string::String;  // [bp-0xe0], Other Possible Types: std::path::PathBuf
    let v2: Result<struct40, struct16>;  // [bp-0xe0], Other Possible Types: struct24
    let v3: std::path::PathBuf;  // [bp-0xe0], Other Possible Types: struct24
    let v4: u128;  // [bp-0xd8]
    let v5: iNone;  // [bp-0xd0]
    let v6: u128;  // [bp-0xb8]
    let v7: u64;  // [bp-0xb0]
    let v8: u64;  // [bp-0xa8]
    let v9: iNone;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: iNone;  // [bp-0x78]
    let v12: u64;  // [bp-0x68]
    let v13: struct24;  // [bp-0x60]
    let v14: core::fmt::Arguments;  // [bp-0x60]
    let v15: u128;  // [bp-0x58]
    let v16: u128;  // [bp-0x48]
    let v18: i64;  // rax
    let v19: u64;  // rax
    let v20: u64;  // rdx
    let v21: u8;  // al
    let v22: u8;  // al
    let v23: u8;  // al
    let v24: u64;  // rax
    let v25: u8;  // al

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tmpdir");
    v18 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap("tmpdir", &v0), a1);
    if v18 {
        v13 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(*((v18 + 8) as &i64), *((v18 + 16) as &i64));
    }
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "template");
    v19 = clap_builder::parser::error::MatchesError::unwrap("template", &v2);
    if v19 {
        v0 = std::env::var(a1, v20);
        if !(v0 as i8 & 1) && clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") {
            v3 = std::env::var_os();
        } else if v14 == 0x8000000000000000 {
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") {
                v14 = 0x8000000000000000;
                if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tmpdir") {
                    goto LABEL_4648c6;
                }
            }
            v3 = std::env::temp_dir();
        } else {
            v16 = v15;
        }
LABEL_4648c6:
        v6 = v14;
        v7 = v16;
        v0 = <alloc::string::String as core::clone::Clone>::clone(v19);
        v10 = v8;
        v9 = *(&v6 as &i128);
        v11 = *(&v0.vec.buf.inner.cap as &i128);
        v12 = v0.vec.len;
    } else {
        if v14 == 0x8000000000000000 {
            v1 = std::env::temp_dir();
        } else {
            v4 = v15;
            v0 = v14;
        }
        v8 = v5 as i64;
        v6 = v0;
        v7 = v1.inner.inner.inner.buf.inner.ptr.pointer.pointer;
        v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("tmp.XXXXXXXXXX");
        v12 = v2.field_16;
        v11 = *(&v2.field_0 as &i128);
        v9 = *(&v6 as &i128);
        v10 = v8;
    }
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "directory");
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dry-run");
    v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet");
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
    v24 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v0);
    if v24 {
        v1 = <alloc::string::String as core::clone::Clone>::clone(v24);
        v8 = v1.vec.len;
        v6 = v0 as i128;
    }
    v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t");
    return struct80 {
        field_0: v11
        field_16: v12
        field_24: v9
        field_40: v10
        field_48: *((&v0 as &char + 40) as &i128)
        field_64: v8
        field_72: v21
        field_73: v22
        field_74: v23
        field_75: v25
    };
}
