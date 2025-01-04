fn uu_hashsum::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x72b]
    let v1: i8;  // [sp-0x72a]
    let v2: i8;  // [sp-0x729]
    let v3: i64;  // [sp-0x728]
    let v4: i64;  // [sp-0x720]
    let v5: i64;  // [sp-0x718]
    let v6: i128;  // [sp-0x710]
    let v7: i128;  // [sp-0x700]
    let v8: i64;  // [sp-0x6f0]
    let v9: i128;  // [sp-0x6e8]
    let v10: i64;  // [sp-0x6d8]
    let v11: i192;  // [sp-0x6c8], Other Possible Types: struct24
    let v12: i64;  // [sp-0x6b0]
    let v13: i64;  // [sp-0x6a8]
    let v14: i64;  // [sp-0x6a0]
    let v15: i128;  // [sp-0x698]
    let v16: i8;  // [bp-0x688]
    let v17: i512;  // [sp-0x678], Other Possible Types: Option<struct24>, struct64
    let v18: i128;  // [bp-0x668]
    let v19: i64;  // [sp-0x658]
    let v20: i320;  // [sp-0x630], Other Possible Types: struct40
    let v21: i64;  // [sp-0x608], Other Possible Types: Result<struct40, struct24>, struct24, struct56, struct712
    let v22: i64;  // [sp-0x600]
    let v23: i64;  // [sp-0x5f8]
    let v24: i8;  // [bp-0x340]
    let v25: struct64;  // [sp-0x338], Other Possible Types: i512
    let v26: i8;  // [bp-0x2f8]
    let v29: i64;  // rdx
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v36: i8;  // bpl
    let v37: i128;  // xmm0
    let v38: i64;  // r8
    let v39: i64;  // r9
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // rdx
    let v43: i64;  // rdx
    let v44: i64;  // rcx
    let v45: i64;  // r14
    let v46: i8;  // bpl
    let v47: i64;  // r12
    let v48: i64;  // rax
    let v49: i8;  // r13b
    let v50: i8;  // 4098
    let v51: i64;  // rax
    let v52: i64;  // rsi

    v17 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16);
    match v17 {
        Some(_) => {
            v10 = *((&v17 as &char + 16) as &i64);
        },
        None => {
            v21 = std::sys::os_str::bytes::Slice::to_owned("hashsum");
            v10 = v23;
        },
    }
    v9 = v17;
    v31 = std::path::Path::file_stem(*((&v9 as &char + 8) as &i64), v10, v29, v30);
    if !v31 {
        v32 = &g_465e49;
    }
    v11 = std::sys::os_str::bytes::Slice::to_string_lossy(v32, 7);
    v21 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
    v17 = v21;
    v20 = core::iter::traits::iterator::Iterator::chain(&v17, a0, a1);
    v21 = uu_hashsum::uu_app(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64));
    memcpy(&v26, &v21, 712);
    v36 = v24;
    v19 = *((&v20 as &char + 32) as &i64);
    v37 = v20;
    v18 = *((&v20 as &char + 16) as &i128);
    v17 = v37;
    v21 = clap_builder::builder::command::Command::try_get_matches_from(&v26, &v17, v30, v38, v39);
    if v4 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v40;
    }
    v8 = *((&v21 as &char + 48) as &i64);
    v7 = *((&v21 as &char + 32) as &i128);
    v6 = *((&v21 as &char + 16) as &i128);
    v4 = v21;
    v5 = v22;
    if !alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64)) as i8 {
LABEL_5774be:
        v40 = 0;
        v45 = 0x8000000000000000;
        if !v36 {
            goto LABEL_5774c5;
        }
    } else {
        v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "length");
        v41 = clap_builder::parser::error::MatchesError::unwrap("length", &v21);
        if !v41 {
            goto LABEL_5774be;
        }
        v21 = uucore::features::checksum::calculate_blake2b_length(*(v41 as &i64), v42);
        if v21 {
            return v40;
        }
        v45 = v23;
        if !v36 {
LABEL_5774c5:
            v21 = uucore::features::checksum::detect_algo(*((&v11 as &char + 8) as &i64), *((&v11 as &char + 16) as &i64), v40, v45);
            goto LABEL_5774e6;
        }
    }
    v21 = uu_hashsum::create_algorithm_from_flags(&v4, v43, v44, v38);
LABEL_5774e6:
    v40 = v22;
    if !v3 {
        return v40;
    }
    v15 = *((&v21 as &char + 24) as &i128);
    v3 = v21;
    v12 = v3;
    v13 = v40;
    v14 = v23;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8;
    if !v1 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text");
    }
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "check") as i32;
    v47 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "status") as i32;
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "strict") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "warn") as i8;
    v48 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "ignore-missing");
    v49 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "quiet") as i32 | v47;
    if !v48 {
        if !(!v46) {
            goto LABEL_577626;
        }
        v50 = v0;
        v0 = v50 | v49;
        if !(!(!v50) || !(!v49)) {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "no-names");
            if v21 != 2 {
                v51 = 0;
            }
            if !v51 {
                v51 = &g_469030;
            }
            v0 = *(v51 as &i8);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero");
            <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v14);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "tag");
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v25 = clap_builder::parser::error::MatchesError::unwrap("file", &v21);
            if !v25 {
                v21 = v3;
                v40 = uu_hashsum::hashsum(&v21, v52, v42, v30, v38, v39);
            } else {
                v21 = v3;
                v40 = uu_hashsum::hashsum(&v21, &v25, v42, v30, v38, v39);
            }
            return v40;
        }
    } else if v46 {
LABEL_577626:
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text") as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8) != 1 {
            v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v17 = clap_builder::parser::error::MatchesError::unwrap("file", &v21);
            core::option::Option<T>::map_or_else(&v21, &v17, v42);
            v40 = uucore::features::checksum::perform_checksum_validation(v22, v23 * 16 + v22, v3, v40, 1, *((&v15 as &char + 8) as &i64), (v47 & 4294967295 & 4294967295) * 0x1000000 | v49 * 0x10000 | v0 * 0x100000000 | (v2 & (v47 & 4294967295 ^ 1)) * 0x10000000000 | (v48 & 4294967295 & 4294967295) * 0x100 & 4294967295);
            return v40;
        }
    }
    alloc::boxed::Box<T>::new(1);
    return v40;
}
