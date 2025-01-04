fn uu_readlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3de]
    let v1: i8;  // [sp-0x3dd]
    let v2: i32;  // [sp-0x3dc]
    let v3: i128;  // [sp-0x3d8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3c8]
    let v5: i64;  // [sp-0x3b8]
    let v6: i64;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a8]
    let v8: i64;  // [sp-0x3a0]
    let v9: i64;  // [bp-0x398]
    let v10: i64;  // [sp-0x390]
    let v11: i512;  // [sp-0x388], Other Possible Types: Result<struct56, struct16>, struct64, struct24
    let v12: i64;  // [sp-0x380]
    let v13: i64;  // [sp-0x348]
    let v14: i64;  // [sp-0x340]
    let v15: i128;  // [sp-0x338]
    let v16: i128;  // [sp-0x328]
    let v17: i64;  // [sp-0x318]
    let v18: struct24;  // [sp-0x310], Other Possible Types: i192
    let v19: i128;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct64, struct56
    let v20: i64;  // [sp-0x2f0]
    let v21: i64;  // [sp-0x2e8]
    let v24: i64;  // rdx
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v28: i64;  // rax
    let v29: i8;  // bpl
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v36: struct8;  // rax
    let v37: struct8;  // r14
    let v38: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i64;  // r14

    v19 = uu_readlink::uu_app(a1, v24);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if v13 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
        return v25;
    }
    v17 = *((&v11 as &char + 48) as &i64);
    v26 = *((&v11 as &char + 16) as &i128);
    v16 = *((&v11 as &char + 32) as &i128);
    v15 = v26;
    v13 = v11;
    v14 = v12;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "zero") as i8;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "silent") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "quiet");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "verbose") as i8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize");
    if v28 {
LABEL_468ed7:
        v2 = v28 | -0x100 | 2;
        v29 = 0;
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-existing");
        if !(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-missing"), !v28 as i8)) {
            goto LABEL_468ed7;
        }
        v29 = vvar_207{reg 56} | -0x100 | 1;
        v2 = 0;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-missing");
    }
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, "files");
    v11 = clap_builder::parser::error::MatchesError::unwrap("files", &v19);
    if !v11 || (v19 = struct64 {
    field_0: v30
    field_16: v31
    field_32: *((&v11 as &char + 32) as &i128)
    field_48: *((&v11 as &char + 48) as &i128)
}, v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v19, v24), v32 = *((&v3 as &char + 8) as &i128), v9 = v32, v6 == 0x8000000000000000) {
        v6 = 0;
        v7 = 8;
        v8 = 0;
    } else {
        v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
        v6 = v3;
        if v8 {
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "no-newline") as i32 {
            }
            v9 = v7;
            v10 = v9 + v8 * 24;
            v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v36 {
                v37 = v36;
                if v29 {
                    do {
                        v19 = std::sys::os_str::bytes::Slice::to_owned(*((v37 + 8) as &i64), *((v37 + 16) as &i64));
                        v38 = v19;
                        v3 = struct24 {
                            field_0: v38
                            field_16: v21
                        };
                        v11 = std::fs::read_link(&v3, v24);
                        if v11 == 0x8000000000000000 {
                            goto LABEL_469370;
                        }
                        v39 = v11;
                        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                        v19 = v39;
                        v21 = *((&v11 as &char + 16) as &i64);
                        v25 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v20, *((&v11 as &char + 16) as &i64), 11));
                        if !(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-missing"), !v28 as i8)) {
                            goto LABEL_4693f0;
                        }
                    } while (!(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v13, "canonicalize-missing"), !v28 as i8)));
                    goto LABEL_469351;
                }
                do {
                    v19 = std::sys::os_str::bytes::Slice::to_owned(*((v37 + 8) as &i64), *((v37 + 16) as &i64));
                    v40 = v19;
                    v3 = v40;
                    v4 = v21;
                    uucore::features::fs::canonicalize();
                    if v11 == 0x8000000000000000 {
LABEL_469370:
                        if v0 {
                            v5 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v12, v42);
                            v18 = <T as alloc::string::ToString>::to_string(&v5, v24);
                            v19 = v18;
                            v25 = alloc::boxed::Box<T>::new(&v19);
                            return v25;
                        }
                        v25 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                        goto LABEL_46941b;
                    }
                    v41 = v11;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
                    v19 = v41;
                    v21 = *((&v11 as &char + 16) as &i64);
                    v25 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v20, *((&v11 as &char + 16) as &i64), 11));
                    if v25 {
LABEL_4693f0:
LABEL_46941b:
                        return v25;
                    }
                    v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                } while (v37);
            }
LABEL_469351:
            return 0;
        }
    }
    v11 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v19 = v11;
    v25 = alloc::boxed::Box<T>::new(&v19);
    return v25;
}
