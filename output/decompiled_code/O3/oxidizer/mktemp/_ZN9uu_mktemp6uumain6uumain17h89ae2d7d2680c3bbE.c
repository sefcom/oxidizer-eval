fn uu_mktemp::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x498]
    let v1: i64;  // [sp-0x488]
    let v2: i8;  // [bp-0x478]
    let v3: i8;  // [bp-0x470]
    let v4: i8;  // [bp-0x468]
    let v5: i64;  // [sp-0x460]
    let v6: i128;  // [sp-0x458]
    let v7: i128;  // [sp-0x448]
    let v8: i64;  // [sp-0x438]
    let v9: i8;  // [bp-0x428], Other Possible Types: struct40
    let v10: i8;  // [bp-0x420]
    let v11: i8;  // [bp-0x418]
    let v12: i8;  // [bp-0x408]
    let v13: i8;  // [bp-0x3f8]
    let v14: i8;  // [bp-0x3f0]
    let v15: i8;  // [bp-0x3e0]
    let v16: i608;  // [sp-0x3d8], Other Possible Types: struct24, struct76
    let v17: i128;  // [sp-0x388]
    let v18: i128;  // [sp-0x378]
    let v19: i128;  // [sp-0x368]
    let v20: i64;  // [sp-0x358]
    let v21: i128;  // [sp-0x348]
    let v22: i128;  // [sp-0x338]
    let v23: i128;  // [sp-0x328]
    let v24: i128;  // [sp-0x318]
    let v25: i64;  // [sp-0x300]
    let v26: i128;  // [sp-0x2f8]
    let v27: i192;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct24, struct8>, struct8, struct712, struct28
    let v28: i128;  // [bp-0x2d8]
    let v29: i64;  // [bp-0x2d0]
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v33: i64;  // rcx
    let v34: i64;  // r14
    let v35: i128;  // xmm0
    let v36: i64;  // rax
    let v38: i64;  // rdx
    let v39: i64;  // rsi
    let v40: i64;  // rax
    let v41: i64;  // rax
    let v42: i64;  // rsi
    let v43: i64;  // rdx
    let v44: i8;  // r15b
    let v45: i8;  // bpl
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i64;  // r9
    let v51: i64;  // r8
    let v52: i128;  // xmm0
    let v53: i64;  // rsi
    let v54: i64;  // rdx
    let v55: i64;  // rcx
    let v56: i64;  // rax
    let v57: i128;  // xmm0
    let v58: i256;  // ymm0
    let v59: i256;  // ymm0

    core::iter::traits::iterator::Iterator::collect(&v2, a0, a1);
    v27 = uu_mktemp::uu_app(v31, v32);
    clap_builder::builder::command::Command::try_get_matches_from(&v9, &v27, &v2, v33);
    if v9 != 0x8000000000000000 {
        v20 = v13;
        v35 = v9;
        v19 = v12;
        v18 = v11;
        v17 = v35;
        v16 = uu_mktemp::Options::from(&v17);
        v27 = std::env::var("POSIXLY_CORRECT");
        if !v27 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v17, _ZN9uu_mktemp12ARG_TEMPLATE17h69e568618f46e97eE, g_536180) as i8 {
            v41 = v4;
            if !v41 {
                core::option::unwrap_failed(); /* do not return */
            }
            v42 = v3;
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(*((v42 + (v41 + (v41 << 1) << 3) - 16) as &i64), *((v42 + (v41 + (v41 << 1) << 3) - 8) as &i64), *((&v16 as &char + 8) as &i64), *((&v16 as &char + 16) as &i64)) as i8 {
                v29 = 9223372036854775814;
                v40 = alloc::boxed::Box<T>::new(&v27);
                return v40;
            }
        }
        v44 = *((&v16 as &char + 73) as &i8);
        v45 = *((&v16 as &char + 74) as &i8);
        v46 = v16;
        v27.64 = vvar_220{reg 224};
        v47 = v16;
        v27.48 = (stack_base)[936] as i128;
        v27.32 = (stack_base)[952] as i128;
        v28 = *((&v16 as &char + 16) as &i128);
        v27 = v47;
        v9 = uu_mktemp::Params::from(&v27, v43);
        if v5 == 0x8000000000000000 {
            v23 = (&v12)[8];
            v22 = *((&v9 as &char + 24) as &i128);
            v21 = *((&v9 as &char + 8) as &i128);
            v27.32 = vvar_466{stack -808};
            v28 = v22;
            v27 = v21;
            v40 = alloc::boxed::Box<T>::new(&v27);
            return v40;
        }
        v49 = *((&v9 as &char + 8) as &i128);
        v24 = v14;
        v23 = (&v12)[8];
        v22 = *((&v9 as &char + 24) as &i128);
        v21 = v49;
        v50 = v15;
        v6 = v49;
        v51 = v23;
        v8 = v23;
        v7 = v22;
        v9.16 = (stack_base)[784] as i64;
        v52 = *((&v23 as &char + 8) as &i128);
        v9 = v52;
        v5 = v9;
        v53 = v6;
        v54 = *((&v6 as &char + 8) as &i64);
        v55 = *((&v7 as &char + 8) as &i64);
        if v44 {
            v1 = v0;
            v27 = uu_mktemp::dry_exec(v53, v54, v55, v51, v50, v1, v11);
        } else {
            v0 = v1;
            v27 = uu_mktemp::exec(v53, v54, v55, v51, v50, v1, v11, v1);
        }
        v56 = v27;
        v57 = *((&v27 as &char + 8) as &i128);
        v59 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
        if !v45 {
            if v56 == 0x8000000000000000 {
                v40 = v59;
            } else {
                vvar_533{stack -768} = v56;
                vvar_534{stack -760} = v57;
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v25, v31, v32));
                return v40;
            }
        } else {
            if v56 == 0x8000000000000000 {
                v40 = uu_mktemp::uumain::uumain::{{closure}}(v59, v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v57 >> 96 CONCAT v57 >> 64 CONCAT v57 >> 96 CONCAT v57 >> 64));
            } else {
                v25 = v56;
                v26 = v57;
                v40 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v25, v31, v32));
                return v40;
            }
        }
        return v40;
    } else {
        v34 = v10;
        if *((v34 + 213) as &i8) == 5 {
            v36 = *((v34 + 40) as &i64);
            v38 = *((v34 + 48) as &i64) + v36;
            v39 = *((v34 + 72) as &i64) * 32 + *((v34 + 64) as &i64);
            v27 = struct8 {
                field_0: v36
            };
            v27.8 = *((v34 + 48) as &i64) + v36;
            v27.16 = vvar_135{reg 24};
            *(&v29 as &struct712) = *((v34 + 72) as &i64) * 32 + v27.16;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v27, v39, v38) as i32) {
                v16 = <T as alloc::slice::hack::ConvertVec>::to_vec("too many templates");
                v27 = struct28 {
                    field_0: v16
                    field_16: *((&v16 as &char + 16) as &i64)
                    field_24: 1
                };
                v40 = alloc::boxed::Box<T>::new(&v27);
                return v40;
            }
        }
        v40 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
        return v40;
    }
}
