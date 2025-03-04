fn uu_readlink::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [sp-0x3de]
    let v1: i8;  // [sp-0x3dd]
    let v2: i32;  // [sp-0x3dc]
    let v3: struct24;  // [sp-0x3d8]
    let v4: i64;  // [sp-0x3b8]
    let v5: i64;  // [sp-0x3b0]
    let v6: i64;  // [sp-0x3a8]
    let v7: i64;  // [sp-0x3a0]
    let v8: iNone;  // [bp-0x398], Other Possible Types: struct32
    let v9: i64;  // [sp-0x388], Other Possible Types: Result<struct24, struct8>, struct64, struct16, char, struct24
    let v10: i64;  // [sp-0x380]
    let v11: i8;  // [bp-0x378]
    let v12: i8;  // [bp-0x368]
    let v13: i8;  // [bp-0x358]
    let v14: i64;  // [sp-0x348]
    let v15: i64;  // [sp-0x340]
    let v16: iNone;  // [sp-0x338]
    let v17: iNone;  // [sp-0x328]
    let v18: i64;  // [sp-0x318]
    let v19: struct24;  // [sp-0x310]
    let v20: struct24;  // [sp-0x2f8], Other Possible Types: int, struct712, struct56, struct64
    let v21: i64;  // [sp-0x2f0]
    let v22: i64;  // [sp-0x2e8]
    let v23: i32;  // [bp-0x2e0]
    let v25: iNone;  // xmm0
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v29: i8;  // bpl
    let v32: iNone;  // xmm0
    let v34: iNone;  // ymm0
    let v35: iNone;  // ymm0
    let v38: i64;  // rax
    let v39: i64;  // r14
    let v40: i32;  // r12d
    let v41: iNone;  // xmm0
    let v42: iNone;  // xmm0
    let v43: iNone;  // xmm0
    let v44: iNone;  // xmm0

    v20 = uu_readlink::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v20, a0, a1);
    if v14 == 0x8000000000000000 {
        v27 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
        return v27;
    }
    v18 = *(&v13 as &i64);
    v25 = *(&v11 as &i128);
    v17 = *(&v12 as &i128);
    v16 = v25;
    v14 = v9;
    v15 = v10;
    v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "zero") as i8;
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "silent") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "quiet");
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "verbose") as i8;
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "canonicalize");
    if v28 as u8 {
LABEL_468ed7:
        v2 = (v28 & -0x100 | 2) as u32;
        v29 = 0;
    } else {
        v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "canonicalize-existing");
        if !(!v28 as u8 && (v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "canonicalize-missing"), !v28 as u8)) {
            goto LABEL_468ed7;
        }
        v29 = vvar_205{reg 56} & -0x100 | 1;
        v2 = 0;
    }
    if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "canonicalize-existing") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "canonicalize-missing");
    }
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, "files");
    v9 = clap_builder::parser::error::MatchesError::unwrap("files", &v20);
    if !v9 || (v20 = struct64 {
    field_0: v30
    field_16: v31
    field_32: v9.field_32
    field_48: v9.field_48
}, v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v20), v32 = *(&v3.field_8 as &i128), v8 = v32, v5 == 0x8000000000000000) {
        v5 = 0;
        v6 = 8;
        v7 = 0;
    } else {
        v35 = (((v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as i128;
        if v7 {
            if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v14, "no-newline") as i32 {
            }
            v8 = struct32 {
                field_0: v6
                field_8: v8 + v7 * 24
                field_16: v9
                field_24: v10
            };
            v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
            if v38 {
                v39 = v38;
                if !v29 {
                    v40 = v2 as i8;
                } else {
                    do {
                        v20 = std::sys::os_str::bytes::Slice::to_owned(*((v39 + 8) as &i64), *((v39 + 16) as &i64));
                        v41 = *(&v20.field_0 as &i128);
                        *(&v3.field_0 as &struct24) = struct24 {
                            field_0: v41
                            field_16: v22
                        };
                        v9 = std::fs::read_link(&v3);
                        if v9 == 0x8000000000000000 {
                            goto LABEL_469370;
                        }
                        v42 = v9 as i128;
                        v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256;
                        v20 = v42;
                        v22 = *((&v9 as &char + 16) as &i64);
                        if !(!<core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v21, *((&v9 as &char + 16) as &i64), 11))) {
                            goto LABEL_469400;
                        }
                    } while ((v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8), v39));
                    goto LABEL_469368;
                }
                do {
                    v20 = std::sys::os_str::bytes::Slice::to_owned(*((v39 + 8) as &i64), *((v39 + 16) as &i64));
                    v43 = *(&v20.field_0 as &i128);
                    *(&v3.field_0 as &struct24) = struct24 {
                        field_0: v43
                        field_16: v22
                    };
                    v9 = uucore::features::fs::canonicalize(&v3, 0x1, v40 as u64);
                    if v9 == 0x8000000000000000 {
LABEL_469370:
                        if v0 {
                            v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v10, v39);
                            v19 = <T as alloc::string::ToString>::to_string(&v4);
                            *(&v23 as &i32) = 1;
                            v20 = v19;
                            goto LABEL_469400;
                        }
                        goto LABEL_469400;
                    }
                    v44 = *(&v9.field_0 as &i128);
                    v35 = (v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                    v20 = v44;
                    v22 = v9.field_16 as i64;
                    if <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_readlink::show(v21, v9.field_16 as i64, 11)) {
LABEL_469400:
                        return v27;
                    }
                    v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v8);
                } while (v39);
            }
LABEL_469368:
            return 0;
        }
    }
    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec();
    v20 = v9;
    *(&v23 as &i32) = 1;
    v27 = alloc::boxed::Box<T>::new(&v20);
    return v27;
}
