fn uu_hashsum::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x72b]
    let v1: i8;  // [sp-0x72a]
    let v2: i8;  // [sp-0x729]
    let v3: i64;  // [sp-0x728]
    let v4: i64;  // [sp-0x720]
    let v5: i64;  // [sp-0x718]
    let v6: iNone;  // [sp-0x710]
    let v7: iNone;  // [sp-0x700]
    let v8: i64;  // [sp-0x6f0]
    let v9: Option<struct24>;  // [sp-0x6e8]
    let v10: i64;  // [sp-0x6d8]
    let v11: struct24;  // [sp-0x6c8]
    let v12: i64;  // [sp-0x6b0]
    let v13: i64;  // [sp-0x6a8]
    let v14: i64;  // [sp-0x6a0]
    let v15: iNone;  // [sp-0x698]
    let v16: i8;  // [bp-0x688]
    let v17: struct40;  // [bp-0x678], Other Possible Types: struct64, struct24, Option<struct24>
    let v18: struct40;  // [sp-0x630]
    let v19: i64;  // [sp-0x608], Other Possible Types: struct24, int, struct56, Result<struct40, struct8>, struct712
    let v20: iNone;  // [sp-0x608], Other Possible Types: Result<struct16, struct32>, struct40
    let v21: i64;  // [sp-0x600]
    let v22: i64;  // [sp-0x5f8]
    let v23: i8;  // [bp-0x340]
    let v24: struct64;  // [sp-0x338]
    let v25: i8;  // [bp-0x2f8]
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v31: i8;  // bpl
    let v33: i64;  // rax
    let v34: i64;  // rbx
    let v37: i8;  // r13b
    let v38: i8;  // 4098
    let v39: i64;  // rax
    let v40: i64;  // rcx
    let v45: i64;  // rbx

    v27 = 0x8000000000000000;
    v17 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v16);
    match v17 {
        Some(_) => {
            v10 = *((&v17 as &char + 16) as &i64);
        },
        None => {
            v19 = std::sys::os_str::bytes::Slice::to_owned("hashsum");
            v10 = v22;
        },
    }
    v9 = v17;
    v28 = std::path::Path::file_stem(*((&v9 as &char + 8) as &i64), v10);
    v11 = std::sys::os_str::bytes::Slice::to_string_lossy((v28 ? v28 : &g_465e49), 7);
    v19 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v9);
    v17 = v19;
    v18 = core::iter::traits::iterator::Iterator::chain(&v17, a0, a1);
    v19 = uu_hashsum::uu_app(v11.field_8, v11.field_16);
    memcpy(&v25, &v19, 712);
    v31 = v23;
    *(&v17.field_0 as &struct40) = struct40 {
        field_0: v32
        field_16: *(&v18.field_16 as &i128)
        field_32: v18.field_32
    };
    clap_builder::builder::command::Command::try_get_matches_from(&v19, &v25, &v17);
    if v4 == 0x8000000000000000 {
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        return v45;
    }
    v8 = *((&v19.field_0 as &char + 48) as &i64);
    v7 = *((&v19.field_0 as &char + 32) as &i128);
    v6 = *((&v19.field_0 as &char + 16) as &i128);
    v4 = v19;
    v5 = v21;
    if !alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v11.field_8, v11.field_16) as i8 {
LABEL_5774be:
        v34 = 0;
        if !v31 {
            goto LABEL_5774c5;
        }
    } else {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "length");
        v33 = clap_builder::parser::error::MatchesError::unwrap("length", &v19);
        if !v33 {
            goto LABEL_5774be;
        }
        v19 = uucore::features::checksum::calculate_blake2b_length(*(v33 as &i64));
        v34 = v21;
        v27 = v22;
        if v19 {
            return v45;
        }
        if !v31 {
LABEL_5774c5:
            v20 = uucore::features::checksum::detect_algo(v11.field_8, v11.field_16, v34, v27);
            goto LABEL_5774e6;
        }
    }
    v20 = uu_hashsum::create_algorithm_from_flags(&v4);
LABEL_5774e6:
    if !v3 {
        return v45;
    }
    v15 = (&v20)[24] as i128;
    v3 = v19;
    v12 = v3;
    v13 = v21;
    v14 = v22;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8;
    if !v1 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "strict") as i8;
    v2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "warn") as i8;
    v37 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "quiet") as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "status") as i32;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "ignore-missing") as i8 {
        v38 = v0;
        v0 = v38 | v37;
        if !(!(!v38) || !(!v37)) {
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, "no-names");
            match v19 {
                Err(v39) => {
                },
                Ok(_) => {
                    v39 = 0;
                },
            }
            v40 = (v39 ? v39 : &g_469030);
            v0 = *(v40 as &i8);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "zero");
            <alloc::boxed::Box<F,A> as core::ops::function::Fn<Args>>::call(&v14);
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "tag");
            v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
            v24 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
            if !v24.field_0 as i64 {
                v19 = *(&v3 as &i352);
                uu_hashsum::hashsum(&v19);
            } else {
                v19 = *(&v3 as &i352);
                uu_hashsum::hashsum(&v19, &v24);
            }
            return v45;
        }
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "check") as i32 && (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "text") as i32 | clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v4, "binary") as i8) != 1 {
        v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v4, "file");
        v17 = clap_builder::parser::error::MatchesError::unwrap("file", &v19);
        core::option::Option<T>::map_or_else(&v19, &v17);
LABEL_577741:
        return v45;
    }
    alloc::boxed::Box<T>::new(1);
    goto LABEL_577741;
}
