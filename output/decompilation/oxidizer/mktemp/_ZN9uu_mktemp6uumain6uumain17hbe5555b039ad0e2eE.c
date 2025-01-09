fn uu_mktemp::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x498]
    let v1: i64;  // [sp-0x488]
    let v2: i8;  // [bp-0x478]
    let v3: i8;  // [bp-0x470]
    let v4: i8;  // [bp-0x468]
    let v5: i64;  // [sp-0x460]
    let v6: i128;  // [sp-0x458]
    let v7: i128;  // [sp-0x448]
    let v8: i64;  // [sp-0x438]
    let v9: i608;  // [sp-0x428], Other Possible Types: struct24, struct32, struct76
    let v11: i8;  // [bp-0x3d8]
    let v12: i8;  // [bp-0x3d0]
    let v13: i64;  // [bp-0x3c8]
    let v14: i8;  // [bp-0x3b8]
    let v16: i8;  // [bp-0x3a0]
    let v17: i8;  // [bp-0x390]
    let v18: struct56;  // [bp-0x388]
    let v19: i128;  // [sp-0x348]
    let v20: i128;  // [sp-0x338]
    let v21: i128;  // [sp-0x328]
    let v22: i128;  // [sp-0x318]
    let v23: i64;  // [sp-0x300]
    let v24: i128;  // [sp-0x2f8]
    let v25: i5696;  // [sp-0x2e8], Other Possible Types: struct24, struct80, Result<struct24, struct8>, struct32, struct712
    let v26: i128;  // [bp-0x2d8]
    let v27: i64;  // [bp-0x2d0]
    let v28: i128;  // [sp-0x2c8]
    let v30: i64;  // r14
    let v32: i64;  // rax
    let v33: i64;  // rsi
    let v34: i8;  // r15b
    let v35: i8;  // bpl
    let v36: i128;  // xmm0
    let v39: i128;  // xmm0
    let v40: i64;  // r9
    let v41: i64;  // r8
    let v42: i128;  // xmm0
    let v43: i64;  // rsi
    let v44: i64;  // rdx
    let v45: i64;  // rcx
    let v46: i64;  // rax
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i64;  // rbx

    core::iter::traits::iterator::Iterator::collect(&v2, a0, a1);
    v25 = uu_mktemp::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v25, &v2);
    if v11 != 0x8000000000000000 {
        v18 = struct56 {
            field_0: v31
            field_16: v13
            field_32: v14
            field_48: v15
        };
        v9 = uu_mktemp::Options::from(&v18);
        v25 = std::env::var("POSIXLY_CORRECT");
        if !v25 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v18, _ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E, g_536940) as i8 {
            v32 = v4;
            if !v32 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/mktemp/src/mktemp.rs"); /* do not return */
            }
            v33 = v3;
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(*((v33 + v32 * 24 - 16) as &i64), *((v33 + v32 * 24 - 8) as &i64), *((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64)) as i8 {
                v27 = 9223372036854775814;
                alloc::boxed::Box<T>::new(&v25);
                return v49;
            }
        }
        v34 = *((&v9 as &char + 73) as &i8);
        v35 = *((&v9 as &char + 74) as &i8);
        v36 = v9;
        v25 = struct80 {
            field_0: v37
            field_16: v10
            field_32: *((&v9 as &char + 32) as &i128)
            field_48: *((&v9 as &char + 48) as &i128)
            field_64: v36
        };
        uu_mktemp::Params::from(&v11, &v25);
        if v5 == 0x8000000000000000 {
            v21 = (&v14)[8];
            v20 = (&v13)[8];
            v19 = v12;
            v28 = v21;
            v26 = v20;
            v25 = v19;
            alloc::boxed::Box<T>::new(&v25);
            return v49;
        }
        v39 = v12;
        v22 = v16;
        v21 = (&v14)[8];
        v20 = (&v13)[8];
        v19 = v39;
        v40 = v17;
        v6 = v19;
        v41 = v21;
        v8 = v21;
        v7 = v20;
        v13 = *((&v22 as &char + 8) as &i64);
        v42 = *((&v21 as &char + 8) as &i128);
        v11 = v42;
        v5 = v11;
        v43 = v6;
        v44 = *((&v6 as &char + 8) as &i64);
        v45 = *((&v7 as &char + 8) as &i64);
        if v34 {
            v1 = v0;
            v25 = uu_mktemp::dry_exec(v43, v44, v45, v41, v40, v1, v13);
        } else {
            v0 = v1;
            v25 = uu_mktemp::exec(v43, v44, v45, v41, v40, v1, v13, v1);
        }
        v46 = v25;
        v47 = *((&v25 as &char + 8) as &i128);
        if !v35 {
            if v46 != 0x8000000000000000 {
                vvar_517{stack -768} = v46;
                vvar_518{stack -760} = v47;
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v23));
                return v49;
            }
        } else {
            if v46 == 0x8000000000000000 {
                uu_mktemp::uumain::uumain::{{closure}}((((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47, ((((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v47 >> 96 CONCAT v47 >> 64 CONCAT v47 >> 96 CONCAT v47 >> 64));
            } else {
                v23 = v46;
                v24 = v47;
                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v23));
                return v49;
            }
        }
        return v49;
    } else {
        v30 = v12;
        if *((v30 + 213) as &i8) == 5 {
            v25 = clap_builder::util::flat_map::FlatMap<K,V>::iter(v30 + 32);
            v9 = v25;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v9)) {
                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("too many templates");
                v25 = v9;
                alloc::boxed::Box<T>::new(&v25);
                return v49;
            }
        }
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
        return v49;
    }
}
