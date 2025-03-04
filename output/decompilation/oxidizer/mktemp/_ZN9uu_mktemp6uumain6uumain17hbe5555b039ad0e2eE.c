fn uu_mktemp::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x498]
    let v1: i64;  // [sp-0x488]
    let v2: i8;  // [bp-0x478]
    let v3: i8;  // [bp-0x470]
    let v4: i8;  // [bp-0x468]
    let v5: i64;  // [sp-0x460]
    let v6: iNone;  // [sp-0x458]
    let v7: iNone;  // [sp-0x448]
    let v8: i64;  // [sp-0x438]
    let v9: iNone;  // [sp-0x428], Other Possible Types: struct76, struct24, struct32
    let v11: iNone;  // [sp-0x3d8], Other Possible Types: struct40, char
    let v12: i8;  // [bp-0x3d0]
    let v13: i64;  // [sp-0x3c8]
    let v14: i8;  // [bp-0x3b8]
    let v16: i8;  // [bp-0x3a0]
    let v17: i8;  // [bp-0x390]
    let v18: struct56;  // [bp-0x388]
    let v19: iNone;  // [sp-0x348]
    let v20: iNone;  // [sp-0x338]
    let v21: iNone;  // [sp-0x328]
    let v22: iNone;  // [sp-0x318]
    let v23: i64;  // [sp-0x300]
    let v24: iNone;  // [sp-0x2f8]
    let v25: struct712;  // [sp-0x2e8], Other Possible Types: Result<struct24, struct8>, struct80, int, struct32, struct24
    let v26: struct24;  // [sp-0x2e8], Other Possible Types: int
    let v27: iNone;  // [bp-0x2d8]
    let v28: i64;  // [bp-0x2d0], Other Possible Types: unsigned int
    let v29: iNone;  // [sp-0x2c8]
    let v31: i64;  // r14
    let v33: i64;  // rax
    let v34: i64;  // rsi
    let v35: i8;  // r15b
    let v36: i8;  // bpl
    let v37: iNone;  // xmm0
    let v40: iNone;  // xmm0
    let v41: i64;  // r9
    let v42: i64;  // r8
    let v43: iNone;  // xmm0
    let v44: i64;  // rsi
    let v45: i64;  // rdx
    let v46: i64;  // rcx
    let v47: i64;  // rax
    let v48: iNone;  // xmm0
    let v49: iNone;  // ymm0
    let v50: i64;  // rbx

    core::iter::traits::iterator::Iterator::collect(&v2, a0, a1);
    v25 = uu_mktemp::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v11, &v25, &v2);
    if *(&v11 as &i64) != 0x8000000000000000 {
        v18 = struct56 {
            field_0: v32
            field_16: *(&v13 as &i128)
            field_32: *(&v14 as &i128)
            field_48: *(&v15 as &i64)
        };
        v9 = uu_mktemp::Options::from(&v18);
        v25 = std::env::var("POSIXLY_CORRECT");
        if !v25 as i64 && clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v18, _ZN9uu_mktemp12ARG_TEMPLATE17h5ec0554c879217e7E, g_536940) as i8 {
            v33 = *(&v4 as &i64);
            if !v33 {
                core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/mktemp/src/mktemp.rs"); /* do not return */
            }
            v34 = *(&v3 as &i64);
            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<std::ffi::os_str::OsStr>>::eq(*((v34 + v33 * 24 - 16) as &i64), *((v34 + v33 * 24 - 8) as &i64), *((&v9.field_0 as &char + 8) as &i64), v9.field_16) as i8 {
                *(&v28 as &i64) = 9223372036854775814;
                return v50;
            }
        }
        v35 = v9.field_73;
        v36 = v9.field_74;
        v37 = v9.field_0;
        v25 = struct80 {
            field_0: v38
            field_16: v10
            field_32: *((&v9.field_24 as &char + 8) as &i128)
            field_48: v9.field_48
            field_64: v37
        };
        v11 = uu_mktemp::Params::from(&v25);
        if v5 == 0x8000000000000000 {
            v21 = *(&(&v14)[8] as &i128);
            v20 = *(&v11.field_24 as &i128);
            v19 = v11.field_8;
            v29 = v21;
            v27 = v20;
            v25 = v19;
            alloc::boxed::Box<T>::new(&v25);
            return v50;
        }
        v40 = v11.field_8;
        v22 = *(&v16 as &i128);
        v21 = *(&(&v14)[8] as &i128);
        v20 = *(&v11.field_24 as &i128);
        v19 = v40;
        v41 = *(&v17 as &i64);
        v6 = v19;
        v42 = v21 as i64;
        v8 = v21 as i64;
        v7 = v20;
        v13 = (&v22)[8] as i64;
        v43 = (&v21)[8] as i128;
        v11 = v43;
        v5 = v11.field_0;
        v44 = v6 as i64;
        v45 = (&v6)[8] as i64;
        v46 = (&v7)[8] as i64;
        if v35 {
            v1 = v0;
            v26 = uu_mktemp::dry_exec(v44, v45, v46, v42, v41, v1, v13);
        } else {
            v0 = v1;
            v26 = uu_mktemp::exec(v44, v45, v46, v42, v41, v1, v13, v1 as i8);
        }
        v47 = v26 as i64;
        v48 = (&v26)[8] as i128;
        if !v36 {
            if v47 != 0x8000000000000000 {
                vvar_516{stack -768} = v47;
                vvar_517{stack -760} = v48;
                return v50;
            }
        } else {
            if v47 == 0x8000000000000000 {
                uu_mktemp::uumain::uumain::{{closure}}(((((((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) as u64, (((((((v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ((v48 >> 96) as u32 CONCAT (v48 >> 64) as u32 CONCAT (v48 >> 96) as u32 CONCAT (v48 >> 64) as u32)) as u64);
            } else {
                v23 = v47;
                v24 = v48;
                return v50;
            }
        }
        return v50;
    } else {
        v31 = *(&v12 as &i64);
        if *((v31 + 213) as &i8) == 5 {
            v25 = clap_builder::util::flat_map::FlatMap<K,V>::iter(v31 + 32);
            v9 = v25;
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v9)) {
                v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("too many templates");
                v25 = v9;
                *(&v28 as &i32) = 1;
                return v50;
            }
        }
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
        return v50;
    }
}
