fn uu_nproc::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x410], Other Possible Types: char
    let v1: i64;  // [bp-0x408], Other Possible Types: char, Result<struct24, struct8>, int
    let v2: i64;  // [sp-0x400]
    let v3: i64;  // [sp-0x3f8]
    let v4: i8;  // [sp-0x3f0]
    let v5: Result<struct8, struct1>;  // [sp-0x3c8]
    let v6: Result<struct8, struct1>;  // [sp-0x3b8], Other Possible Types: int
    let v7: i64;  // [sp-0x3b0]
    let v8: i64;  // [sp-0x3a8]
    let v9: i64;  // [sp-0x390], Other Possible Types: int
    let v10: i64;  // [sp-0x388]
    let v11: String;  // [sp-0x358]
    let v12: struct66;  // [bp-0x340]
    let v13: i64;  // [sp-0x338]
    let v14: Result<struct24, struct8>;  // [sp-0x2f8], Other Possible Types: struct24, struct41, struct712, unsigned long
    let v15: i64;  // [sp-0x2f0]
    let v16: i64;  // [sp-0x2e8]
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // r14
    let v21: i64;  // r15
    let v22: i64;  // r12
    let v23: i64;  // rdx
    let v24: i64;  // r14
    let v25: i64;  // rdx
    let v26: i64;  // r15
    let v29: i64;  // rax
    let v30: i64;  // rcx

    v14 = uu_nproc::uu_app();
    clap_builder::builder::command::Command::try_get_matches_from(&v1, &v14, a0, a1);
    if v9 == 0x8000000000000000 {
        v18 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
        return v18;
    }
    v9 = *(&v1 as &i448);
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, _ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08);
    v19 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_nproc10OPT_IGNORE17h5eebb41ffec4ffcbE, g_510d08, &v14);
    if !v19 {
        v22 = 0;
    } else {
        v20 = *((v19 + 8) as &i64);
        v21 = *((v19 + 16) as &i64);
        v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(core::str::<impl str>::trim_matches(v20, v21), v23);
        match v5 {
            Err(v0) => {
                v1 = 0;
                v2 = v20;
                v3 = v21;
                v4 = 1;
                v11 = format!("{} is not a valid number: {}", &v1, &v0);
                v0 as u224 = *(&v11 as &i224);
                v18 = alloc::boxed::Box<T>::new(&v0);
                return v18;
            },
            Ok(v22) => {
            },
        }
    }
    v14 = std::env::var("OMP_THREAD_LIMIT");
    v24 = -1;
    if !v14 {
        v25 = *((&v14 as &char + 24) as &i64);
        v3 = *((&v14 as &char + 24) as &i64);
        *(&v1 as &i128) = *((&v14 as &char + 8) as &i128);
        v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v2, v25);
        v24 = -(0 < vvar_221{reg 56}) | -(v7 < 1) | v7;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, _ZN8uu_nproc7OPT_ALL17hda6848154e8c5b80E, g_510cf8) as i8 {
        v26 = uu_nproc::num_cpus_all();
    } else {
        v1 = std::env::var("OMP_NUM_THREADS");
        if v1 {
            v26 = uu_nproc::available_parallelism();
            v0 = v26;
        } else {
            v8 = v13;
            *(&v6 as &i128) = *((&v1 as &char + 8) as &i128);
            v14 = <char as core::str::pattern::Pattern>::into_searcher(v7, v8);
            v12 = struct66 {
                field_0: 0
                field_8: v8
                field_16: *(&v14.field_0 as &i128)
                field_32: *(&v14.field_16 as &i128)
                field_48: *((&v14.field_0 as &char + 32) as &i128)
                field_64: 0
            };
            v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12);
            if !v16 {
                uu_nproc::available_parallelism();
                goto LABEL_462e51;
            } else {
                v5 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*(v15 as &i64), *((v15 + 8) as &i64));
                if v5 as i8 || !*((&v5 as &char + 8) as &i64) {
                    uu_nproc::available_parallelism();
LABEL_462e51:
                }
            }
        }
    }
    v29 = core::cmp::min_by(v24, v26);
    v30 = (!(v29 <= v22) ? v29 - v22 : 1);
    v0 = v30;
    println!("{}", &v0);
    return 0;
}
