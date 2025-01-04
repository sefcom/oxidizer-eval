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
    let v9: i128;  // [sp-0x428], Other Possible Types: struct76, struct24
    let v10: i128;  // [sp-0x418]
    let v11: i128;  // [sp-0x3d8], Other Possible Types: Result<struct56, struct16>, struct40
    let v12: i64;  // [sp-0x3c8]
    let v13: i8;  // [bp-0x3a0]
    let v14: i8;  // [bp-0x390]
    let v15: i128;  // [sp-0x388]
    let v16: i128;  // [sp-0x378]
    let v17: i128;  // [sp-0x368]
    let v18: i64;  // [sp-0x358]
    let v19: i128;  // [sp-0x348]
    let v20: i128;  // [sp-0x338]
    let v21: i128;  // [sp-0x328]
    let v22: i128;  // [sp-0x318]
    let v23: i64;  // [sp-0x300]
    let v24: i128;  // [sp-0x2f8]
    let v25: i128;  // [sp-0x2e8], Other Possible Types: struct24, Result<struct24, struct8>, struct32, struct712
    let v26: i128;  // [bp-0x2d8]
    let v27: i64;  // [bp-0x2d0]
    let v28: i128;  // [sp-0x2c8]
    let v29: i128;  // [sp-0x2b8]
    let v30: i128;  // [sp-0x2a8]
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v34: i64;  // rcx
    let v35: i64;  // r14
    let v36: i128;  // xmm0
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i8;  // r15b
    let v42: i8;  // bpl
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i64;  // r9
    let v48: i64;  // r8
    let v49: i128;  // xmm0
    let v50: i64;  // rsi
    let v51: i64;  // rdx
    let v52: i64;  // rcx
    let v53: i64;  // rax
    let v54: i128;  // xmm0
    let v55: i256;  // ymm0
    let v56: i256;  // ymm0

    core::iter::traits::iterator::Iterator::collect(&v2, a0, a1);
    v25 = uu_mktemp::uu_app(v32, v33);
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v25, &v2, v34);
    match v11 {
        Ok(_) => {
            v18 = *((&v11 as &char + 48) as &i64);
            v36 = v11;
            v17 = *((&v11 as &char + 32) as &i128);
            v16 = *((&v11 as &char + 16) as &i128);
            v15 = v36;
            v9 = uu_mktemp::Options::from(&v15);
            v25 = std::env::var("POSIXLY_CORRECT");
            if !v25 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v15, _ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E, g_536940) as i8 {
                v38 = v4;
                if !v38 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v39 = v3;
                if !<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(*((v39 + v38 * 24 - 16) as &i64), *((v39 + v38 * 24 - 8) as &i64), *((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64)) as i8 {
                    v27 = 9223372036854775814;
                    v37 = alloc::boxed::Box<T>::new(&v25);
                    return v37;
                }
            }
            v41 = *((&v9 as &char + 73) as &i8);
            v42 = *((&v9 as &char + 74) as &i8);
            v43 = v10;
            v30 = v43;
            v44 = v9;
            v29 = *((&v9 as &char + 48) as &i128);
            v28 = *((&v9 as &char + 32) as &i128);
            v26 = v10;
            v25 = v44;
            v11 = uu_mktemp::Params::from(&v25, v40);
            if v5 == 0x8000000000000000 {
                v21 = *((&v11 as &char + 40) as &i128);
                v20 = *((&v11 as &char + 24) as &i128);
                v19 = *((&v11 as &char + 8) as &i128);
                v28 = v21;
                v26 = v20;
                v25 = v19;
                v37 = alloc::boxed::Box<T>::new(&v25);
                return v37;
            }
            v46 = *((&v11 as &char + 8) as &i128);
            v22 = v13;
            v21 = *((&v11 as &char + 40) as &i128);
            v20 = *((&v11 as &char + 24) as &i128);
            v19 = v46;
            v47 = v14;
            v6 = v46;
            v48 = v21;
            v8 = v21;
            v7 = v20;
            v12 = *((&v22 as &char + 8) as &i64);
            v49 = *((&v21 as &char + 8) as &i128);
            v11 = v49;
            v5 = v11;
            v50 = v6;
            v51 = *((&v6 as &char + 8) as &i64);
            v52 = *((&v7 as &char + 8) as &i64);
            if v41 {
                v1 = v0;
                v25 = uu_mktemp::dry_exec(v50, v51, v52, v48, v47, v1, v12);
            } else {
                v0 = v1;
                v25 = uu_mktemp::exec(v50, v51, v52, v48, v47, v1, v12, v1);
            }
            v53 = v25;
            v54 = *((&v25 as &char + 8) as &i128);
            v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u128 as u256;
            if !v42 {
                if v53 == 0x8000000000000000 {
                    v37 = v56 as i64;
                } else {
                    vvar_537{stack -768} = v53;
                    vvar_538{stack -760} = v54;
                    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v23, v32, v33));
                    return v37;
                }
            } else {
                if v53 == 0x8000000000000000 {
                    v37 = uu_mktemp::uumain::uumain::{{closure}}(v56 as i64, (v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v54 >> 96) as i32 CONCAT (v54 >> 64) as i32 CONCAT (v54 >> 96) as i32 CONCAT (v54 >> 64) as i32) as u32 as u256) as u64);
                } else {
                    v23 = v53;
                    v24 = v54;
                    v37 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v23, v32, v33));
                    return v37;
                }
            }
            return v37;
        },
        Err(_) => {
            v35 = *((&v11 as &char + 8) as &i64);
            if *((v35 + 213) as &i8) == 5 {
                v25 = clap_builder::util::flat_map::FlatMap<K,V>::iter(v35 + 32);
                v10 = *((&v25 as &char + 16) as &i128);
                v9 = v25;
                if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v9, v32, v33) as i32 as u32 as u64) {
                    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("too many templates");
                    v25 = v9;
                    v37 = alloc::boxed::Box<T>::new(&v25);
                    return v37;
                }
            }
            v37 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v35);
            return v37;
        },
    }
}
