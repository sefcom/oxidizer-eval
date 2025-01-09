fn uu_readlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3de]
    let v1: i8;  // [sp-0x3dd]
    let v2: i32;  // [sp-0x3dc]
    let v3: struct24;  // [sp-0x3d8], Other Possible Types: i192
    let v4: i64;  // [sp-0x3b8]
    let v5: i64;  // [sp-0x3b0], Other Possible Types: struct24
    let v6: i64;  // [sp-0x3a8]
    let v7: i64;  // [sp-0x3a0]
    let v8: i64;  // [bp-0x398]
    let v9: i64;  // [sp-0x390]
    let v10: i64;  // [bp-0x388], Other Possible Types: struct16, struct64, struct24
    let v11: i64;  // [sp-0x380]
    let v12: i8;  // [bp-0x378]
    let v13: i8;  // [bp-0x368]
    let v14: i8;  // [bp-0x358]
    let v15: i64;  // [sp-0x348]
    let v16: i64;  // [sp-0x340]
    let v17: i128;  // [sp-0x338]
    let v18: i128;  // [sp-0x328]
    let v19: i64;  // [sp-0x318]
    let v20: struct24;  // [sp-0x310]
    let v21: i128;  // [sp-0x2f8], Other Possible Types: struct24, struct712, struct64, struct56
    let v22: i64;  // [sp-0x2f0]
    let v23: i64;  // [sp-0x2e8]
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v28: i64;  // rax
    let v29: i8;  // bpl
    let v32: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v38: struct8;  // rax
    let v39: struct8;  // r14
    let v40: i32;  // r12d
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0

    v21 = uu_readlink::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v10, &v21, a0, a1);
    if v15 == 0x8000000000000000 {
        v25 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        return v25;
    }
    v19 = v14;
    v26 = v12;
    v18 = v13;
    v17 = v26;
    v15 = v10;
    v16 = v11;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "zero") as i8;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "silent") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "quiet");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "verbose") as i8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize");
    if v28 {
LABEL_468ed7:
        v2 = v28 & -0x100 | 2;
        v29 = 0;
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-existing");
        if !(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-missing"), !v28 as i8)) {
            goto LABEL_468ed7;
        }
        v29 = vvar_207{reg 56} & -0x100 | 1;
        v2 = 0;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-missing");
    }
    v21 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, "files");
    v10 = clap_builder::parser::error::MatchesError::unwrap("files", &v21);
    if !v10 || (v21 = struct64 {
    field_0: v30
    field_16: v31
    field_32: *((&v10 as &char + 32) as &i128)
    field_48: *((&v10 as &char + 48) as &i128)
}, v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21), v32 = *((&v3 as &char + 8) as &i128), v8 = v32, v5 == 0x8000000000000000) {
        v5 = 0;
        v6 = 8;
        v7 = 0;
    } else {
        v35 = (((v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
        v5 = v3;
        if v7 {
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "no-newline") as i32 {
            }
            v8 = v6;
            v9 = v8 + v7 * 24;
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            if v38 {
                v39 = v38;
                if !v29 {
                    v40 = v2;
                } else {
                    do {
                        v21 = std::sys::os_str::bytes::Slice::to_owned(*((v39 + 8) as &i64), *((v39 + 16) as &i64));
                        v41 = v21;
                        *(&v3.field_0 as &struct24) = struct24 {
                            field_0: v41
                            field_16: v23
                        };
                        v10 = std::fs::read_link(&v3);
                        if v10 == 0x8000000000000000 {
                            goto LABEL_469370;
                        }
                        v42 = v10;
                        v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
                        v21 = v42;
                        v23 = *((&v10 as &char + 16) as &i64);
                        if !(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-missing"), !v28 as i8)) {
                            goto LABEL_469400;
                        }
                    } while (!(!v28) || !((v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v15, "canonicalize-missing"), !v28 as i8)));
                    goto LABEL_469368;
                }
                do {
                    v21 = std::sys::os_str::bytes::Slice::to_owned(*((v39 + 8) as &i64), *((v39 + 16) as &i64));
                    v43 = v21;
                    *(&v3.field_0 as &struct24) = struct24 {
                        field_0: v43
                        field_16: v23
                    };
                    v10 = uucore::features::fs::canonicalize(&v3, 0x1, v40);
                    if v10 == 0x8000000000000000 {
LABEL_469370:
                        if !v0 {
                            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
                        } else {
                            v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v11, v39);
                            v20 = <T as alloc::string::ToString>::to_string(&v4);
                            alloc::boxed::Box<T>::new(&v21);
                            goto LABEL_469400;
                        }
                        goto LABEL_469400;
                    }
                    v44 = v10;
                    v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
                    v21 = v44;
                    v23 = *((&v10 as &char + 16) as &i64);
                    if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v22, *((&v10 as &char + 16) as &i64), 11)) {
LABEL_469400:
                        return v25;
                    }
                    v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                } while (v39);
            }
LABEL_469368:
            v25 = 0;
            return 0;
        }
    }
    v10 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v21 = v10;
    alloc::boxed::Box<T>::new(&v21);
    return v25;
}
