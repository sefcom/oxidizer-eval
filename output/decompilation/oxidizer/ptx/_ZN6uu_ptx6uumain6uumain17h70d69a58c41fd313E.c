fn uu_ptx::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x4e0]
    let v1: i64;  // [bp-0x4d8]
    let v2: u64;  // [bp-0x4d0]
    let v3: Result<struct48, struct24>;  // [bp-0x4c8]
    let v4: u64;  // [bp-0x4c8]
    let v5: u128;  // [bp-0x4c8]
    let v6: u128;  // [bp-0x4c0]
    let v7: u64;  // [bp-0x4b8]
    let v8: u128;  // [bp-0x4b0]
    let v9: struct56;  // [bp-0x490]
    let v10: u64;  // [bp-0x488]
    let v11: core::fmt::rt::Argument;  // [bp-0x458], Other Possible Types: struct96
    let v12: u64;  // [bp-0x448]
    let v13: Result<struct56, struct16>;  // [bp-0x3f0], Other Possible Types: u64
    let v14: struct56;  // [bp-0x3f0], Other Possible Types: struct64
    let v15: u64;  // [bp-0x3e8]
    let v16: u64;  // [bp-0x3e0]
    let v17: u128;  // [bp-0x3d8]
    let v18: u128;  // [bp-0x3c8]
    let v19: u128;  // [bp-0x3b8]
    let v20: u128;  // [bp-0x3a8]
    let v21: u128;  // [bp-0x398]
    let v22: u128;  // [bp-0x388]
    let v23: u64;  // [bp-0x378]
    let v24: struct48;  // [bp-0x370]
    let v25: u8;  // [bp-0x340]
    let v26: struct64;  // [bp-0x328]
    let v27: struct56;  // [bp-0x2e8], Other Possible Types: struct24, u8
    let v28: struct96;  // [bp-0x2e8]
    let v29: Result<struct122, struct24>;  // [bp-0x2e8]
    let v30: struct8;  // [bp-0x2e8]
    let v31: u64;  // [bp-0x2e0]
    let v32: u64;  // [bp-0x2d8]
    let v33: u64;  // [bp-0x2b8]
    let v34: u128;  // [bp-0x2b0]
    let v35: u128;  // [bp-0x2a0]
    let v36: u128;  // [bp-0x290]
    let v37: u128;  // [bp-0x280]
    let v39: u32;  // rdx
    let v40: u64;  // rdx
    let v42: core::fmt::rt::Argument;  // r14
    let v43: core::fmt::rt::Argument;  // xmm0
    let v45: u64;  // rbx
    let v46: u128;  // xmm0

    uu_ptx::uu_app(&v27);
    v13 = clap_builder::builder::command::Command::try_get_matches_from(&v27, a0, a1);
    match v13 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        },
        Ok(v9) => {
            v27 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, _ZN6uu_ptx7options4FILE17h4728e06c059c85afE.field_0, g_6ee618.field_0);
            v14 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h4728e06c059c85afE.field_0, g_6ee618.field_0, &v27);
            if v14.field_0 as i64 {
                v30 = <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v14, v39);
                v26 = struct64 {
                    field_0: v27.field_0
                    field_16: v27.field_16
                    field_32: v27.field_32
                    field_48: v33
                    field_56: *((&v14.field_48 as &char + 8) as &i64)
                };
                v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v26);
            } else {
                v42 = alloc::alloc::Global::alloc_impl(0x18, a1, v40) as u64;
                v27 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v12 = v32;
                v43 = v27.field_0;
                v11 = v43;
                *((v42 + 16) as &u64) = v32;
                *(v42 as &core::fmt::rt::Argument) = v43;
                v0 = alloc::slice::hack::into_vec(v42, 1);
            }
            vvar_629{stack -744} = struct96 OrderedDict({0: 𝜙@64b [((5648690, None), None), ((5648727, None), None)], 16: 𝜙@64b [((5648690, None), None), ((5648727, None), vvar_551{stack -728})]})
            uu_ptx::get_config(&v28, &v9);
            v45 = v31;
            if v28.field_0 as i64 == 0x8000000000000000 {
                return v45;
            }
            v11 = struct96 {
                field_0: v28.field_0 as i64
                field_8: v45
                field_16: v32
                field_24: *((&v28.field_16 as &char + 8) as &i128)
                field_40: *((&v28.field_32 as &char + 8) as &i128)
                field_56: v34
                field_72: v35
                field_88: *(&v28.field_88 as &i64)
            };
            v29 = uu_ptx::WordFilter::new(&v9, &v11);
            v45 = v31;
            if let Ok(_) = v29 {
                v23 = *((&v29 as &char + 120) as &i64);
                v22 = v37;
                v21 = v36;
                v46 = *((&v29 as &char + 24) as &i128);
                v20 = v35;
                v19 = v34;
                v18 = *((&v29 as &char + 40) as &i128) as u128;
                v17 = v46;
                v13 = v29 as i64;
                v15 = v45;
                v16 = v32;
                uu_ptx::read_input(&v29, v1, v2, &v11);
                v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v29);
                v45 = *((&v3 as &char + 8) as &i64);
                if let Ok(_) = v3 {
                    v24 = struct48 {
                        field_0: v3 as i64
                        field_8: v45
                        field_16: v7
                        field_24: v8
                        field_40: *((&v3 as &char + 40) as &i64)
                    };
                    v24 = struct48 {
                        field_0: v3 as i64
                        field_8: v45
                        field_16: v7
                        field_24: v8
                        field_40: *((&v3 as &char + 40) as &i64)
                    };
                    uu_ptx::create_word_set(&v25, &v11, &v13, &v24);
                    if !v11.field_88 as i8 && v2 == 2 {
                        v2 = 1;
                        if *((v1 + 24) as &i64) == 0x8000000000000000 {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        v4 = *((v1 + 24) as &i64);
                        v6 = *((v1 + 32) as &i128) as u128;
                    } else {
                        v27 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v7 = v32;
                        v5 = v27.field_0;
                    }
                    v45 = uu_ptx::write_traditional_output(&v11, &v24, &v25, *((&v5 as &char + 8) as &i64), v7);
                }
            }
            return v45;
        },
    }
}
