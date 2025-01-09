fn uu_mktemp::Options::from(a0: &struct76, a1: &struct56) -> u64 {
    let v0: i64;  // [sp-0xf8], Other Possible Types: Result<struct40, struct8>, struct24, Option<struct24>
    let v1: i128;  // [bp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: i128;  // [sp-0xc8], Other Possible Types: struct24
    let v4: i64;  // [sp-0xb8]
    let v5: i128;  // [sp-0xa8], Other Possible Types: struct24
    let v6: i64;  // [sp-0xa0]
    let v7: i64;  // [sp-0x98]
    let v8: i64;  // [sp-0x88], Other Possible Types: Option<struct24>
    let v9: i128;  // [bp-0x80]
    let v10: i64;  // [sp-0x78]
    let v11: i128;  // [sp-0x68], Other Possible Types: struct24
    let v12: i64;  // [sp-0x58]
    let v13: i192;  // [sp-0x48], Other Possible Types: struct24
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rcx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tmpdir");
    v15 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&g_41f0d1, 6, &v0), a1);
    if !v15 {
        v13 = 0x8000000000000000;
    } else {
        v13 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v15);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "template");
    v16 = clap_builder::parser::error::MatchesError::unwrap("template", &v0);
    if v16 {
        v0 = std::env::var("TMPDIR");
        if v0 {
            goto LABEL_4bec40;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8 {
            v0 = std::env::var_os("TMPDIR");
            v17 = v0;
            if v17 == 0x8000000000000000 {
                goto LABEL_4beca6;
            }
LABEL_4bec99:
            v11 = *((&v0 as &char + 8) as &i128);
LABEL_4beca6:
        } else {
LABEL_4bec40:
            v17 = v13;
            if v17 != 0x8000000000000000 {
                v11 = *((&v13 as &char + 8) as &i128);
                goto LABEL_4becbe;
            }
            if !(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8) && !((v17 = 0x8000000000000000, clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tmpdir") as i8)) {
                goto LABEL_4becbe;
            }
            v0 = std::env::temp_dir();
            goto LABEL_4bec99;
        }
LABEL_4becbe:
        v8 = v17;
        v9 = v11;
        v5 = <alloc::string::String as core::clone::Clone>::clone(v16);
        v4 = v10;
        v3 = v8;
        v0 = v5;
    } else {
        if v0 != 0x8000000000000000 {
            v1 = *((&v13 as &char + 8) as &i128);
            v0 = v13;
        } else {
            v0 = core::ops::function::FnOnce::call_once();
        }
        v7 = v2;
        v5 = v0;
        v6 = *((&v0 as &char + 8) as &i64);
        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("tmp.XXXXXXXXXX");
        v0 = v3;
        v3 = v5;
        v4 = v7;
    }
    v11 = v3;
    v8 = v0;
    v7 = v12;
    v5 = v11;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
    if !clap_builder::parser::error::MatchesError::unwrap("suffix", &v0) {
        v3 = 0x8000000000000000;
    } else {
        core::ops::function::FnOnce::call_once();
        v4 = v2;
        v3 = v0;
    }
    *((a0 + 16) as &i64) = v10;
    *(a0 as &i192) = v8;
    *((a0 + 72) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "directory") as i32;
    *((a0 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dry-run") as i32;
    *((a0 + 74) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i32;
    *((a0 + 24) as &i128) = v5;
    *((a0 + 40) as &i64) = v7;
    *((a0 + 48) as &i128) = v3;
    *((a0 + 64) as &i64) = v4;
    *((a0 + 75) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8;
    return a0;
}
