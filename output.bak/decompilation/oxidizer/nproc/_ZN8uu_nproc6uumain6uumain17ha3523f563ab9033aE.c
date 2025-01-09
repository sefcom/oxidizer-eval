fn uu_nproc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x410]
    let v1: i64;  // [sp-0x408], Other Possible Types: Result<struct24, struct8>
    let v2: i64;  // [sp-0x400]
    let v3: i64;  // [sp-0x3f8]
    let v4: i8;  // [sp-0x3f0]
    let v5: i64;  // [sp-0x3c8], Other Possible Types: Result<struct8, struct1>
    let v6: i8;  // [bp-0x3c0]
    let v7: i64;  // [sp-0x3b8], Other Possible Types: Result<struct8, struct1>
    let v8: i64;  // [sp-0x3b0]
    let v9: i64;  // [sp-0x3a8]
    let v10: i64;  // [sp-0x3a0]
    let v11: i64;  // [sp-0x390], Other Possible Types: struct56
    let v12: i64;  // [sp-0x388]
    let v15: struct66;  // [bp-0x340]
    let v16: i64;  // [sp-0x338]
    let v17: i64;  // [sp-0x2f8], Other Possible Types: Result<struct40, struct8>, struct41, struct28, struct712, struct24
    let v18: i64;  // [sp-0x2f0]
    let v19: i64;  // [sp-0x2e8]
    let v20: i64;  // [bp-0x2e0]
    let v21: i64;  // [sp-0x2d8]
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // r14
    let v26: i64;  // r15
    let v27: i64;  // r12
    let v28: i64;  // rdx
    let v29: i64;  // rdx
    let v31: i64;  // r14
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v34: i64;  // rax

    v17 = uu_nproc::uu_app();
    v1 = clap_builder::builder::command::Command::try_get_matches_from(&v17, a0, a1);
    if v11 == 0x8000000000000000 {
        v23 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
        return v23;
    }
    v11 = struct56 {
        field_0: v1
        field_8: v2
        field_16: *((&v1 as &char + 16) as &i128)
        field_32: *((&v1 as &char + 32) as &i128)
        field_48: *((&v1 as &char + 48) as &i64)
    };
    v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v11, _ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08);
    v24 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08, &v17);
    if !v24 {
        v27 = 0;
    } else {
        v25 = *((v24 + 8) as &i64);
        v26 = *((v24 + 16) as &i64);
        v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(core::str::<impl str>::trim_matches(v25, v26), v28) as u64;
        match v5 {
            Err(v0) => {
                v1 = 0;
                v2 = v25;
                v3 = v26;
                v4 = 1;
                v7 = &v1;
                v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                v9 = &v0;
                v10 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
                v17 = &g_50e4b8;
                v18 = 2;
                v21 = 0;
                v19 = &v7;
                v20 = 2;
                core::option::Option<T>::map_or_else();
                v17 = struct28 {
                    field_0: v13
                    field_16: v14
                    field_24: 1
                };
                v23 = alloc::boxed::Box<T>::new(&v17);
                return v23;
            },
            Ok(v27) => {
            },
        }
    }
    v17 = std::env::var("OMP_THREAD_LIMIT");
    if !(!v17) {
        goto LABEL_0x462d15;
    }
    v29 = *((&v17 as &char + 24) as &i64);
    v3 = *((&v17 as &char + 24) as &i64);
    v1 = *((&v17 as &char + 8) as &i128);
    v7 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v2, v29) as u64;
    v31 = -(0 < v7) | -(v8 < 1) | v8;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v11, _ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E, g_510cf8) as i8 {
        v32 = uu_nproc::num_cpus_all();
    } else {
        v1 = std::env::var("OMP_NUM_THREADS");
        if v1 {
            v32 = uu_nproc::available_parallelism();
            v0 = v32;
        } else {
            v9 = v16;
            v7 = *((&v1 as &char + 8) as &i128);
            v17 = <char as core::str::pattern::Pattern>::into_searcher(v8, v9);
            v15 = struct66 {
                field_0: 0
                field_8: v9
                field_16: v17
                field_32: *((&v17 as &char + 16) as &i128)
                field_48: *((&v17 as &char + 32) as &i128)
                field_64: 0
            };
            v17 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15);
            if !v19 {
                v32 = uu_nproc::available_parallelism();
                goto LABEL_462e51;
            } else {
                v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*(v18 as &i64), *((v18 + 8) as &i64)) as u64;
                if v5 || (v32 = v6, !v32) {
                    v32 = uu_nproc::available_parallelism();
LABEL_462e51:
                }
            }
            v0 = v32;
        }
    }
    v33 = core::cmp::min_by(v31, v32);
    v34 = v33 - v27;
    if v33 <= v27 {
        v34 = 1;
    }
    v0 = v34;
    println!("{:?}", &v0);
    return 0;
}
