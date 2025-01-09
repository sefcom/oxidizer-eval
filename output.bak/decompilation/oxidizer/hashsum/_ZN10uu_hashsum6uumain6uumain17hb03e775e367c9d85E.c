fn uu_hashsum::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x72b]
    let v1: i8;  // [sp-0x72a]
    let v2: i8;  // [sp-0x729]
    let v3: i64;  // [sp-0x728]
    let v4: i64;  // [sp-0x720]
    let v5: i64;  // [sp-0x718]
    let v6: i128;  // [sp-0x710]
    let v7: i128;  // [sp-0x700]
    let v8: i64;  // [sp-0x6f0]
    let v9: Option<struct24>;  // [sp-0x6e8], Other Possible Types: i192
    let v10: i64;  // [sp-0x6d8]
    let v11: struct24;  // [sp-0x6c8], Other Possible Types: i192
    let v12: i64;  // [sp-0x6b0]
    let v13: i64;  // [sp-0x6a8]
    let v14: i64;  // [sp-0x6a0]
    let v15: i128;  // [sp-0x698]
    let v16: i8;  // [bp-0x688]
    let v17: i192;  // [sp-0x678], Other Possible Types: Option<struct24>, struct64, struct40, struct24
    let v18: struct40;  // [sp-0x630]
    let v19: i328;  // [sp-0x608], Other Possible Types: Result<struct40, struct8>, struct24, struct56, struct44, struct712
    let v20: i64;  // [sp-0x600]
    let v21: i64;  // [sp-0x5f8]
    let v22: i8;  // [bp-0x340]
    let v23: struct64;  // [sp-0x338], Other Possible Types: i512
    let v24: i8;  // [bp-0x2f8]
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v32: i8;  // bpl
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // r14
    let v37: i8;  // bpl
    let v38: i64;  // r12
    let v39: i64;  // rax
    let v40: i8;  // r13b
    let v41: i8;  // 4098
    let v42: i64;  // rax

    v17 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16);
    match v17 {
        Some(_) => {
            v10 = *((&v17 as &char + 16) as &i64);
        },
        None => {
            v19 = std::sys::os_str::bytes::Slice::to_owned("hashsum");
            v10 = v21;
        },
    }
    v9 = v17;
    v27 = std::path::Path::file_stem(*((&v9 as &char + 8) as &i64), v10);
    if !v27 {
        v28 = &g_465e49;
    }
    v11 = std::sys::os_str::bytes::Slice::to_string_lossy(v28, 7);
    v19 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
    *(&v17.field_0 as &struct24) = struct24 {
        field_0: v19
        field_16: v21
    };
    v18 = core::iter::traits::iterator::Iterator::chain(&v17, a0, a1);
    v19 = uu_hashsum::uu_app(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64));
    memcpy(&v24, &v19, 712);
    v32 = v22;
    *(&v17.field_0 as &struct40) = struct40 {
        field_0: v33
        field_16: *((&v18 as &char + 16) as &i128)
        field_32: *((&v18 as &char + 32) as &i64)
    };
    v19 = clap_builder::builder::command::Command::try_get_matches_from(&v24, &v17);
    if v4 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v34;
    }
    v8 = *((&v19 as &char + 48) as &i64);
    v7 = *((&v19 as &char + 32) as &i128);
    v6 = *((&v19 as &char + 16) as &i128);
    v4 = v19;
    v5 = v20;
    if !alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64)) as i8 {
LABEL_5774be:
        v34 = 0;
        v36 = 0x8000000000000000;
        if !v32 {
            goto LABEL_5774c5;
        }
    } else {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "length");
        v35 = clap_builder::parser::error::MatchesError::unwrap("length", &v19);
        if !v35 {
            goto LABEL_5774be;
        }
        v19 = uucore::features::checksum::calculate_blake2b_length(*(v35 as &i64));
        if v19 {
            return v34;
        }
        v36 = v21;
        if !v32 {
LABEL_5774c5:
            v19 = uucore::features::checksum::detect_algo(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), v34, v36);
            goto LABEL_5774e6;
        }
    }
    v19 = uu_hashsum::create_algorithm_from_flags(&v4);
LABEL_5774e6:
    v34 = v20;
    if !v3 {
        return v34;
    }
    v15 = *((&v19 as &char + 24) as &i128);
    v3 = v19;
    v12 = v3;
    v13 = v34;
    v14 = v21;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8;
    if !v1 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text");
    }
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "check") as i32;
    v38 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "status") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "strict") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "warn") as i8;
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "ignore-missing");
    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "quiet") as i32 | v38;
    if !v39 {
        if !(!v37) {
            goto LABEL_577626;
        }
        v41 = v0;
        v0 = v41 | v40;
        if !(!(!v41) || !(!v40)) {
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "no-names");
            if v19 != 2 {
                v42 = 0;
            }
            if !v42 {
                v42 = &g_469030;
            }
            v0 = *(v42 as &i8);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero");
            <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v14);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "tag");
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v23 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
            if !v23 {
                v19 = struct44 {
                    field_0: v3
                    field_8: v34
                    field_16: v47
                    field_24: v48
                    field_32: v49
                    field_40: v1
                    field_41: v50
                    field_42: v0
                    field_43: vvar_505{reg 56}
                };
                v34 = uu_hashsum::hashsum(&v19);
            } else {
                v19 = struct44 {
                    field_0: v3
                    field_8: v34
                    field_16: v43
                    field_24: v44
                    field_32: v45
                    field_40: v1
                    field_41: v46
                    field_42: v0
                    field_43: vvar_505{reg 56}
                };
                v34 = uu_hashsum::hashsum(&v19, &v23);
            }
            return v34;
        }
    } else if v37 {
LABEL_577626:
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text") as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8) != 1 {
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v17 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
            core::option::Option<T>::map_or_else(&v19, &v17);
            v34 = uucore::features::checksum::perform_checksum_validation(v20, v21 * 16 + v20, v3, v34, 1, *((&v15 as &char + 8) as &i64), (v38 & 4294967295 & 4294967295) * 0x1000000 | v40 * 0x10000 | v0 * 0x100000000 | (v2 & (v38 & 4294967295 ^ 1)) * 0x10000000000 | (v39 & 4294967295 & 4294967295) * 0x100 & 4294967295);
            return v34;
        }
    }
    alloc::boxed::Box<T>::new(1);
    return v34;
}
