fn uu_touch::determine_atime_mtime_change(a0: u32) -> u64 {
    let v0: Result<struct40, struct8>;  // [sp-0x48], Other Possible Types: i328
    let v3: i64;  // rax
    let v4: i64;  // rbp
    let v8: i64;  // rax
    let v12: i64;  // rax

    if !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "time") as i8 {
LABEL_5c2ff2:
        if !(!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag() as i8) {
            goto LABEL_5c300e;
        }
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag();
    } else {
        v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "time");
        v3 = clap_builder::parser::error::MatchesError::unwrap("time", &v0);
        if !v3 {
            goto LABEL_5c2ff2;
        }
        v4 = uu_touch::determine_atime_mtime_change::{{closure}}(*((v3 + 8) as &i64), *((v3 + 16) as &i64));
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag() as i8 {
LABEL_5c300e:
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag();
            v4 = v4 | -0x100 | 1;
            if !v8 {
                return 0;
            }
            v12 = v8 | -0x100 | 1 | -0x100 | 2 - (!(v4 & 255 & 255));
            return v12;
        } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag() as i8 {
            return v12;
        } else if v4 {
            if (v4 & 4294967295) != 1 {
                return v12;
            }
            return 0;
        }
    }
    return v12;
}
