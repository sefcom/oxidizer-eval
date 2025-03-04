fn uu_mktemp::Options::from(a0: &struct76, a1: &struct56) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0xf8], Other Possible Types: struct24, unsigned long
    let v1: struct24;  // [sp-0xf8], Other Possible Types: int, Option<struct24>
    let v2: iNone;  // [bp-0xf0], Other Possible Types: unsigned long, struct24
    let v3: i64;  // [sp-0xe8]
    let v4: iNone;  // [sp-0xc8], Other Possible Types: struct24
    let v5: i64;  // [bp-0xc8], Other Possible Types: struct24, int
    let v6: i64;  // [sp-0xb8]
    let v7: i64;  // [sp-0xa8], Other Possible Types: struct24, int
    let v8: i64;  // [sp-0xa0]
    let v9: i64;  // [sp-0x98]
    let v10: Option<struct24>;  // [sp-0x88], Other Possible Types: unsigned long
    let v11: iNone;  // [bp-0x80]
    let v12: i64;  // [sp-0x78]
    let v13: iNone;  // [sp-0x68], Other Possible Types: struct24
    let v14: i64;  // [sp-0x58]
    let v15: i64;  // [sp-0x48], Other Possible Types: struct24
    let v17: i64;  // rax
    let v18: i64;  // rax
    let v19: i64;  // rcx
    let v23: i64;  // rax

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "tmpdir");
    v17 = core::option::Option<T>::or_else(clap_builder::parser::error::MatchesError::unwrap(&g_41f0d1, 6, &v0), a1);
    if !v17 {
        v15 = 0x8000000000000000;
    } else {
        v15 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v17);
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "template");
    v18 = clap_builder::parser::error::MatchesError::unwrap("template", &v0);
    if v18 {
        v0 = std::env::var("TMPDIR");
        if v0 {
            goto LABEL_4bec40;
        }
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8 {
            v1 = std::env::var_os("TMPDIR");
            v19 = v0;
            if v19 == 0x8000000000000000 {
                goto LABEL_4beca6;
            }
LABEL_4bec99:
            v13 = (&v1)[8] as i128;
LABEL_4beca6:
        } else {
LABEL_4bec40:
            v19 = v15;
            if v19 != 0x8000000000000000 {
                v13 = *(&v15.field_8 as &i128);
                goto LABEL_4becbe;
            }
            if !(clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8 || (v19 = 0x8000000000000000, clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a1, "tmpdir") as i8)) {
                goto LABEL_4becbe;
            }
            v1 = std::env::temp_dir();
            v19 = v0;
            goto LABEL_4bec99;
        }
LABEL_4becbe:
        v10 = v19;
        v11 = v13;
        v7 = <alloc::string::String as core::clone::Clone>::clone(v18);
        v6 = v12;
        *(&v4 as &i128) = *(&v10 as &i128);
        v0 = v7;
    } else {
        if v2 != 0x8000000000000000 {
            *(&v2 as &i128) = *(&v15.field_8 as &i128);
            v2 = v15;
        } else {
            v2 = core::ops::function::FnOnce::call_once();
        }
        v9 = v3;
        v7 = v2;
        v8 = (&v2)[8] as i64;
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("tmp.XXXXXXXXXX");
        v0 = v4;
        *(&v4 as &i128) = *(&v7 as &i128);
        v6 = v9;
    }
    v13 = v4;
    v10 = v1;
    v9 = v14;
    v7 = v13;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "suffix");
    v23 = clap_builder::parser::error::MatchesError::unwrap("suffix", &v0);
    if !v23 {
        *(&v5 as &i64) = 0x8000000000000000;
    } else {
        v0 = core::ops::function::FnOnce::call_once(v23);
        v5 = v0;
    }
    *((a0 + 16) as &unsigned long) = v12;
    *(a0 as &i128) = v10 as i128;
    *((a0 + 72) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "directory") as i32;
    *((a0 + 73) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "dry-run") as i32;
    *((a0 + 74) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "quiet") as i32;
    *((a0 + 24) as &i128) = v7 as i128;
    *((a0 + 40) as &unsigned long) = v9;
    *((a0 + 48) as &i128) = v5 as i128;
    *((a0 + 64) as &unsigned long) = v6;
    *((a0 + 75) as &i8) = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a1, "t") as i8;
    return a0;
}
