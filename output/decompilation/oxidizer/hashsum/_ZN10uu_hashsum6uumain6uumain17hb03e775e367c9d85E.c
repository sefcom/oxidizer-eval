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
    let v9: i192;  // [sp-0x6e8], Other Possible Types: Option<struct24>
    let v10: i64;  // [sp-0x6d8]
    let v11: i192;  // [sp-0x6c8], Other Possible Types: struct24
    let v12: i64;  // [sp-0x6b0]
    let v13: i64;  // [sp-0x6a8]
    let v14: i64;  // [sp-0x6a0]
    let v15: i128;  // [sp-0x698]
    let v16: i8;  // [bp-0x688]
    let v17: i512;  // [sp-0x678], Other Possible Types: struct64, Option<struct24>, struct24, struct40
    let v18: struct40;  // [sp-0x630]
    let v19: i352;  // [sp-0x608], Other Possible Types: struct24, Result<struct40, struct8>, struct56, struct712, struct40
    let v20: i64;  // [sp-0x600]
    let v21: i64;  // [sp-0x5f8]
    let v22: i8;  // [bp-0x340]
    let v23: struct64;  // [sp-0x338], Other Possible Types: i512
    let v24: i8;  // [bp-0x2f8]
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v32: i8;  // bpl
    let v34: i64;  // rax
    let v36: i64;  // r14
    let v37: i64;  // rbx
    let v39: i64;  // r12
    let v40: i64;  // rax
    let v41: i8;  // r13b
    let v42: i8;  // 4098
    let v43: i64;  // rax
    let v48: i64;  // rbx

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
    v17 = v19;
    v18 = core::iter::traits::iterator::Iterator::chain(&v17, a0, a1);
    v19 = uu_hashsum::uu_app(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64));
    memcpy(&v24, &v19, 712);
    v32 = v22;
    *(&v17.field_0 as &struct40) = struct40 {
        field_0: v33
        field_16: *((&v18 as &char + 16) as &i128)
        field_32: *((&v18 as &char + 32) as &i64)
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v19, &v24, &v17);
    if v4 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v48;
    }
    v8 = *((&v19 as &char + 48) as &i64);
    v7 = *((&v19 as &char + 32) as &i128);
    v6 = *((&v19 as &char + 16) as &i128);
    v4 = v19;
    v5 = v20;
    if !alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64)) as i8 {
LABEL_5774be:
        v36 = 0x8000000000000000;
        if !v32 {
            goto LABEL_5774c5;
        }
    } else {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "length");
        v34 = clap_builder::parser::error::MatchesError::unwrap("length", &v19);
        if !v34 {
            goto LABEL_5774be;
        }
        v19 = uucore::features::checksum::calculate_blake2b_length(*(v34 as &i64));
        if v19 {
            return v48;
        }
        v36 = v21;
        if !v32 {
LABEL_5774c5:
            v19 = uucore::features::checksum::detect_algo(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), 0, v36);
            goto LABEL_5774e6;
        }
    }
    v19 = uu_hashsum::create_algorithm_from_flags(&v4);
LABEL_5774e6:
    v37 = v20;
    if !v3 {
        return v48;
    }
    v15 = *((&v19 as &char + 24) as &i128);
    v3 = v19;
    v12 = v3;
    v13 = v37;
    v14 = v21;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8;
    if !v1 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text");
    }
    v39 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "status") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "strict") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "warn") as i8;
    v40 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "ignore-missing");
    v41 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "quiet") as i32 | v39;
    if !v40 {
        v42 = v0;
        v0 = v42 | v41;
        if !(!(!v42) || !(!v41)) {
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "no-names");
            match v19 {
                Ok(_) => {
                    v43 = 0;
                },
                Err(_) => {
                },
            }
            if !v43 {
                v43 = &g_469030;
            }
            v0 = *(v43 as &i8);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero");
            <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v14);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "tag");
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v23 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
            if !v23 {
                v19 = v3;
                uu_hashsum::hashsum(&v19);
            } else {
                v19 = v3;
                uu_hashsum::hashsum(&v19, &v23);
            }
            return v48;
        }
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "check") as i32 && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text") as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8) != 1 {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
        v17 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
        core::option::Option<T>::map_or_else(&v19, &v17);
        uucore::features::checksum::perform_checksum_validation(v20, v21 * 16 + v20, v3, v37, 1, *((&v15 as &char + 8) as &i64), (v39 & 4294967295 & 4294967295) * 0x1000000 | v41 * 0x10000 | v0 * 0x100000000 | (v2 & (v39 & 4294967295 ^ 1)) * 0x10000000000 | (v40 & 4294967295 & 4294967295) * 0x100 & 4294967295);
LABEL_577741:
        return v48;
    }
    alloc::boxed::Box<T>::new(1);
    goto LABEL_577741;
}
