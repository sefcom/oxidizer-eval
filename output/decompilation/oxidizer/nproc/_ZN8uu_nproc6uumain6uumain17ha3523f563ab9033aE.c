fn uu_nproc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x410]
    let v1: i64;  // [bp-0x408], Other Possible Types: Result<struct24, struct8>
    let v2: i64;  // [sp-0x400]
    let v3: i64;  // [sp-0x3f8]
    let v4: i8;  // [sp-0x3f0]
    let v5: Result<struct8, struct1>;  // [sp-0x3c8], Other Possible Types: i72
    let v6: i64;  // [sp-0x3b8], Other Possible Types: Result<struct8, struct1>
    let v7: i64;  // [sp-0x3b0]
    let v8: i64;  // [sp-0x3a8]
    let v9: i64;  // [sp-0x3a0]
    let v10: i448;  // [sp-0x390]
    let v11: i64;  // [sp-0x388]
    let v12: i8;  // [bp-0x358]
    let v13: struct66;  // [bp-0x340]
    let v14: i64;  // [sp-0x338]
    let v15: i5696;  // [sp-0x2f8], Other Possible Types: Result<struct24, struct8>, struct24, struct28, struct712, struct41
    let v16: i64;  // [sp-0x2f0]
    let v17: i64;  // [sp-0x2e8]
    let v18: i64;  // [bp-0x2e0]
    let v19: i64;  // [sp-0x2d8]
    let v21: i64;  // rax
    let v22: i64;  // rax
    let v23: i64;  // r14
    let v24: i64;  // r15
    let v25: i64;  // r12
    let v26: i64;  // rdx
    let v27: i64;  // rdx
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rax

    v15 = uu_nproc::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v15, a0, a1);
    if v10 == 0x8000000000000000 {
        v21 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        return v21;
    }
    v10 = v1;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08);
    v22 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08, &v15);
    if !v22 {
        v25 = 0;
    } else {
        v23 = *((v22 + 8) as &i64);
        v24 = *((v22 + 16) as &i64);
        v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(core::str::<impl str>::trim_matches(v23, v24), v26);
        match v5 {
            Err(v0) => {
                v1 = 0;
                v2 = v23;
                v3 = v24;
                v4 = 1;
                v6 = &v1;
                v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                v8 = &v0;
                v9 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
                v15 = struct28 {
                    field_0: &g_50e4b8
                    field_16: &v6
                    field_24: <UNKNOWN>
                };
                v19 = 0;
                v18 = 2;
                core::option::Option<T>::map_or_else();
                v0 as u224 = v12;
                v21 = alloc::boxed::Box<T>::new(&v15);
                return v21;
            },
            Ok(v25) => {
            },
        }
    }
    v15 = std::env::var("OMP_THREAD_LIMIT");
    if !(!v15) {
        goto LABEL_0x462d15;
    }
    v27 = *((&v15 as &char + 24) as &i64);
    v3 = *((&v15 as &char + 24) as &i64);
    v1 = *((&v15 as &char + 8) as &i128);
    v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v2, v27);
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E, g_510cf8) as i8 {
        v29 = uu_nproc::num_cpus_all();
    } else {
        v1 = std::env::var("OMP_NUM_THREADS");
        if v1 {
            v29 = uu_nproc::available_parallelism();
            v0 = v29;
        } else {
            v8 = v14;
            v6 = *((&v1 as &char + 8) as &i128);
            v15 = <char as core::str::pattern::Pattern>::into_searcher(v7, v8);
            v13 = struct66 {
                field_0: 0
                field_8: v8
                field_16: v15
                field_32: *((&v15 as &char + 16) as &i128)
                field_48: *((&v15 as &char + 32) as &i128)
                field_64: 0
            };
            v15 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
            if !v17 {
                uu_nproc::available_parallelism();
                goto LABEL_462e51;
            } else {
                v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*(v16 as &i64), *((v16 + 8) as &i64));
                if v5 || !*((&v5 as &char + 8) as &i64) {
                    uu_nproc::available_parallelism();
LABEL_462e51:
                }
            }
        }
    }
    v30 = core::cmp::min_by(-(0 < vvar_223{reg 56}) | -(v7 < 1) | v7, v29);
    v31 = v30 - v25;
    if v30 <= v25 {
        v31 = 1;
    }
    v0 = v31;
    println!("{}", &v0);
    return 0;
}
