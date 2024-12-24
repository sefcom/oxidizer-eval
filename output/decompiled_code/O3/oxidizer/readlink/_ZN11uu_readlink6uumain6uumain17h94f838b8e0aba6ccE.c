fn uu_readlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3de]
    let v1: i8;  // [sp-0x3dd]
    let v2: i32;  // [sp-0x3dc]
    let v3: struct24;  // [sp-0x3d8], Other Possible Types: i128
    let v4: i64;  // [sp-0x3b8]
    let v5: i192;  // [sp-0x3b0]
    let v6: i64;  // [sp-0x3a8]
    let v7: i64;  // [sp-0x3a0]
    let v8: i128;  // [bp-0x398]
    let v9: i64;  // [sp-0x390]
    let v10: i192;  // [sp-0x388], Other Possible Types: Result<struct24, struct16>, struct24, struct64
    let v11: i64;  // [sp-0x380]
    let v12: i64;  // [sp-0x348]
    let v13: i64;  // [sp-0x340]
    let v14: i128;  // [sp-0x338]
    let v15: i128;  // [sp-0x328]
    let v16: i64;  // [sp-0x318]
    let v17: struct24;  // [sp-0x310], Other Possible Types: i192
    let v18: i192;  // [sp-0x2f8], Other Possible Types: struct24, struct56, struct64, struct712
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i128;  // xmm0
    let v26: i64;  // rax
    let v27: i8;  // bpl
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i256;  // ymm0
    let v34: struct8;  // rax
    let v35: struct8;  // r14
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i64;  // r14

    v18 = uu_readlink::uu_app(a1, v22);
    v10 = clap_builder::builder::command::Command::try_get_matches_from(&v18, a0, a1);
    if v12 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        return v23;
    }
    v16 = *((&v10 as &char + 48) as &i64);
    v24 = *((&v10 as &char + 16) as &i128);
    v15 = *((&v10 as &char + 32) as &i128);
    v14 = v24;
    v12 = v10;
    v13 = v11;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "zero") as i8;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "silent") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "quiet");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "verbose") as i8;
    v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize");
    if v26 {
LABEL_4693a7:
        v2 = v26 | -0x100 | 2;
        v27 = 0;
    } else {
        v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-existing");
        if !(!v26) || !((v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-missing"), !v26 as i8)) {
            goto LABEL_4693a7;
        }
        v27 = vvar_207{reg 56} | -0x100 | 1;
        v2 = 0;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-missing");
    }
    v18 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v12, "files");
    v10 = clap_builder::parser::error::MatchesError::unwrap("files", &v18);
    if !v10 || (v18 = struct64 {
    field_0: v28
    field_16: v29
    field_32: *((&v10 as &char + 32) as &i128)
    field_48: *((&v10 as &char + 48) as &i128)
}, v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v18, v22), v30 = *((&v3 as &char + 8) as &i128), v8 = v30, v5 == 0x8000000000000000) {
        v5 = 0;
        v6 = 8;
        v7 = 0;
    } else {
        v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
        v5 = v3;
        if v7 {
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "no-newline") as i32 {
            }
            v8 = v6;
            v9 = v8 + (v7 + v7 * 2) * 8;
            v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v34 {
                v35 = v34;
                if v27 {
                    do {
                        v18 = std::sys::os_str::bytes::Slice::to_owned(*((v35 + 8) as &i64), *((v35 + 16) as &i64));
                        v36 = v18;
                        v3 = struct24 {
                            field_0: v36
                            field_16: v19
                        };
                        v10 = std::fs::read_link(&v3, v22);
                        if v10 == 0x8000000000000000 {
                            goto LABEL_469850;
                        }
                        v37 = v10;
                        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
                        v18 = v37;
                        v18.field_16 = (stack_base)[888] as i64;
                        v23 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v18.field_8, *((&v10 as &char + 16) as &i64), 11));
                        if !(!v26) || !((v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-missing"), !v26 as i8)) {
                            goto LABEL_4698d0;
                        }
                    } while (!(!v26) || !((v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v12, "canonicalize-missing"), !v26 as i8)));
                    goto LABEL_469831;
                }
                do {
                    v18 = std::sys::os_str::bytes::Slice::to_owned(*((v35 + 8) as &i64), *((v35 + 16) as &i64));
                    v38 = v18;
                    v3 = v38;
                    v3.field_16 = v18.field_16;
                    uucore::features::fs::canonicalize();
                    if v10 == 0x8000000000000000 {
LABEL_469850:
                        if v0 {
                            v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v11, v40);
                            v17 = <T as alloc::string::ToString>::to_string(&v4, v22);
                            v18 = v17;
                            v23 = alloc::boxed::Box<T>::new(&v18);
                            return v23;
                        }
                        v23 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                        goto LABEL_4698fb;
                    }
                    v39 = v10;
                    v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                    v18 = v39;
                    v18.field_16 = (stack_base)[888] as i64;
                    v23 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v18.field_8, *((&v10 as &char + 16) as &i64), 11));
                    if v23 {
LABEL_4698d0:
LABEL_4698fb:
                        return v23;
                    }
                    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                } while (v35);
            }
LABEL_469831:
            return 0;
        }
    }
    v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v18 = v10;
    v23 = alloc::boxed::Box<T>::new(&v18);
    return v23;
}
