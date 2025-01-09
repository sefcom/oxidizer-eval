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
    let v9: i256;  // [sp-0x428], Other Possible Types: struct24, struct76, struct32
    let v11: i456;  // [sp-0x3d8], Other Possible Types: Result<struct56, struct8>, struct40
    let v12: i64;  // [sp-0x3c8]
    let v13: i8;  // [bp-0x390]
    let v14: struct56;  // [bp-0x388]
    let v15: i128;  // [sp-0x348]
    let v16: i128;  // [sp-0x338]
    let v17: i128;  // [sp-0x328]
    let v18: i128;  // [sp-0x318]
    let v19: i64;  // [sp-0x300]
    let v20: i128;  // [sp-0x2f8]
    let v21: i200;  // [sp-0x2e8], Other Possible Types: struct24, struct28, struct32, Result<struct24, struct8>, struct80, struct712
    let v22: i128;  // [bp-0x2d8]
    let v23: i64;  // [bp-0x2d0]
    let v24: i128;  // [sp-0x2c8]
    let v26: i64;  // r14
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // rsi
    let v31: i8;  // r15b
    let v32: i8;  // bpl
    let v33: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i64;  // r9
    let v37: i64;  // r8
    let v38: i128;  // xmm0
    let v39: i64;  // rsi
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i64;  // rax
    let v43: i128;  // xmm0
    let v44: i256;  // ymm0
    let v45: i256;  // ymm0

    core::iter::traits::iterator::Iterator::collect(&v2, a0, a1);
    v21 = uu_mktemp::uu_app();
    v11 = clap_builder::builder::command::Command::try_get_matches_from(&v21, &v2);
    match v11 {
        Ok(_) => {
            v14 = struct56 {
                field_0: v27
                field_16: *((&v11 as &char + 16) as &i128)
                field_32: *((&v11 as &char + 32) as &i128)
                field_48: *((&v11 as &char + 48) as &i64)
            };
            v9 = uu_mktemp::Options::from(&v14);
            v21 = std::env::var("POSIXLY_CORRECT");
            if !v21 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v14, _ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E, g_536940) as i8 {
                v29 = v4;
                if !v29 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/mktemp/src/mktemp.rs"); /* do not return */
                }
                v30 = v3;
                if !<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(*((v30 + v29 * 24 - 16) as &i64), *((v30 + v29 * 24 - 8) as &i64), *((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64)) as i8 {
                    v23 = 9223372036854775814;
                    v28 = alloc::boxed::Box<T>::new(&v21);
                    return v28;
                }
            }
            v31 = *((&v9 as &char + 73) as &i8);
            v32 = *((&v9 as &char + 74) as &i8);
            v33 = v9;
            v21 = struct80 {
                field_0: v27
                field_16: v10
                field_32: *((&v9 as &char + 32) as &i128)
                field_48: *((&v9 as &char + 48) as &i128)
                field_64: v33
            };
            v11 = uu_mktemp::Params::from(&v21);
            if v5 == 0x8000000000000000 {
                v17 = *((&v11 as &char + 40) as &i128);
                v16 = *((&v11 as &char + 24) as &i128);
                v15 = *((&v11 as &char + 8) as &i128);
                v24 = v17;
                v22 = v16;
                v21 = v15;
                v28 = alloc::boxed::Box<T>::new(&v21);
                return v28;
            }
            v35 = *((&v11 as &char + 8) as &i128);
            v18 = v11;
            v17 = *((&v11 as &char + 40) as &i128);
            v16 = *((&v11 as &char + 24) as &i128);
            v15 = v35;
            v36 = v13;
            v6 = v35;
            v37 = v17;
            v8 = v17;
            v7 = v16;
            v12 = *((&v18 as &char + 8) as &i64);
            v38 = *((&v17 as &char + 8) as &i128);
            v11 = v38;
            v5 = v11;
            v39 = v6;
            v40 = *((&v6 as &char + 8) as &i64);
            v41 = *((&v7 as &char + 8) as &i64);
            if v31 {
                v1 = v0;
                v21 = uu_mktemp::dry_exec(v39, v40, v41, v37, v36, v1, v12);
            } else {
                v0 = v1;
                v21 = uu_mktemp::exec(v39, v40, v41, v37, v36, v1, v12, v1);
            }
            v42 = v21;
            v43 = *((&v21 as &char + 8) as &i128);
            v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u128 as u256;
            if !v32 {
                if v42 == 0x8000000000000000 {
                    v28 = v45 as i64;
                } else {
                    vvar_533{stack -768} = v42;
                    vvar_534{stack -760} = v43;
                    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v19));
                    return v28;
                }
            } else {
                if v42 == 0x8000000000000000 {
                    v28 = uu_mktemp::uumain::uumain::{{closure}}(v45 as i64, (v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v43 >> 96) as i32 CONCAT (v43 >> 64) as i32 CONCAT (v43 >> 96) as i32 CONCAT (v43 >> 64) as i32) as u32 as u256) as u64);
                } else {
                    v19 = v42;
                    v20 = v43;
                    v28 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v19));
                    return v28;
                }
            }
            return v28;
        },
        Err(v26) => {
            if *((v26 + 213) as &i8) == 5 {
                v21 = clap_builder::util::flat_map::FlatMap<K,V>::iter(v26 + 32);
                v9 = v21;
                if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v9) as i32 as u32 as u64) {
                    v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("too many templates");
                    v21 = struct28 {
                        field_0: v9
                        field_16: *((&v9 as &char + 16) as &i64)
                        field_24: 1
                    };
                    v28 = alloc::boxed::Box<T>::new(&v21);
                    return v28;
                }
            }
            v28 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
            return v28;
        },
    }
}
