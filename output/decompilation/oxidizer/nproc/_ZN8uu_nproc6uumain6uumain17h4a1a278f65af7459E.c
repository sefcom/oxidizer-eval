fn uu_nproc::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x3b9]
    let v1: i64;  // [bp-0x3b8], Other Possible Types: u8
    let v2: u8;  // [bp-0x3b7]
    let v3: void*;  // [bp-0x3a8], Other Possible Types: struct16
    let v4: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x3a8], Other Possible Types: struct56, u64
    let v5: u64;  // [bp-0x3a0]
    let v6: u64;  // [bp-0x398]
    let v7: u8;  // [bp-0x390]
    let v8: u64;  // [bp-0x370]
    let v9: u8;  // [bp-0x368]
    let v10: struct56;  // [bp-0x348]
    let v11: u64;  // [bp-0x340]
    let v12: alloc::string::String;  // [bp-0x310]
    let v13: u64;  // [bp-0x300]
    let v14: struct16;  // [bp-0x2f8], Other Possible Types: struct28, struct712, core::result::Result<alloc::string::String, std::env::VarError>
    let v15: core::str::pattern::CharSearcher;  // [bp-0x2e8], Other Possible Types: u64
    let v16: u64;  // [bp-0x2e0]
    let v17: u16;  // [bp-0x2b8]
    let v19: i64;  // rax
    let v20: u64;  // rdx
    let v23: void*;  // rbp
    let v24: u64;  // r14
    let v25: u64;  // r13
    let v26: u64;  // rcx
    let v27: u64;  // rax
    let v29: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v30: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v31: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v32: &str;  // rax:rdx

    v14 = uu_nproc::uu_app();
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    if (((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
    }
    v10 = v4;
    v14 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, _ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E.field_0, g_4e0ee0.field_0);
    v19 = clap_builder::parser::error::MatchesError::unwrap(_ZN8uu_nproc10OPT_IGNORE17hf0766fb2b3a81c60E.field_0, g_4e0ee0.field_0, &v14);
    if v19 {
        v32 = core::str::<impl str>::trim_matches(*((v19 + 8) as &i64), *((v19 + 16) as &i64), v20);
        v29 = core::num::<impl usize>::from_ascii_radix(&v1, v32.data_ptr, v20);
        if v1 {
            v0 = v2;
            v3 = 0;
            v5 = *((v19 + 8) as &i64);
            v6 = *((v19 + 16) as &i64);
            v7 = 1;
            v12 = format!("{} is not a valid number: {}", &v3, &v0);
            v14 = struct28 {
                field_0: *(&v12.vec.buf.inner.cap as &i128)
                field_16: v13
                field_24: 1
            };
            return alloc::boxed::Box<T>::new(&v14) as u64;
        }
    }
    v14 = std::env::var("OMP_THREAD_LIMIT");
    if let Ok(_) = v14 {
        v31 = core::num::<impl usize>::from_ascii_radix(&v3, v15, v16 as u32);
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN8uu_nproc7OPT_ALL17hde320e20e68328b9E.field_0, g_4e0ed0.field_0) {
        v25 = uu_nproc::num_cpus_all();
    } else {
        v4 = std::env::var("OMP_NUM_THREADS");
        match v4 {
            Err(_) => {
                v25 = uu_nproc::available_parallelism();
            },
            Ok(_) => {
                v8 = v5;
                v15 = <char as core::str::pattern::Pattern>::into_searcher(v6 as u8, *((&v4 as &char + 24) as &i64), v26);
                v14 = struct16 {
                    field_0: 0
                    field_8: *((&v4 as &char + 24) as &i64)
                };
                v17 = 0;
                v27 = core::str::iter::SplitInternal<P>::next(&v14);
                if v27 {
                    v30 = core::num::<impl usize>::from_ascii_radix(&v9, v27, v20);
                    if !v25 || v9 {
                        v25 = uu_nproc::available_parallelism();
                    }
                } else {
                    v25 = uu_nproc::available_parallelism();
                }
                v1 = v25;
            },
        }
    }
    *(&v1 as &i32) = (core::cmp::Ord::min(v24, v25) > v23 ? core::cmp::Ord::min(v24, v25) - v23 : 1);
    println!("{}", &v1);
    return 0;
}
