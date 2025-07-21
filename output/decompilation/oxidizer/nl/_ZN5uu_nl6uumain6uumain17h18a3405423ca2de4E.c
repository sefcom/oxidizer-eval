fn uu_nl::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: i8;  // [bp-0x468], Other Possible Types: u64
    let v1: struct16;  // [bp-0x468]
    let v2: u64;  // [bp-0x460]
    let v3: u64;  // [bp-0x458]
    let v4: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x448], Other Possible Types: struct24, struct44, struct48, struct56, Result<struct4, struct8>, u64
    let v5: u128;  // [bp-0x448]
    let v6: u64;  // [bp-0x440]
    let v7: i64;  // [bp-0x438], Other Possible Types: u64
    let v8: u64;  // [bp-0x430]
    let v9: void*;  // [bp-0x428]
    let v10: Result<struct24, struct24>;  // [bp-0x400], Other Possible Types: core::cell::UnsafeCell<u8> *, struct24
    let v11: u64;  // [bp-0x3f8]
    let v12: u64;  // [bp-0x3f0]
    let v13: struct64;  // [bp-0x3d8], Other Possible Types: u64
    let v14: struct64;  // [bp-0x3d8]
    let v15: u64;  // [bp-0x3d0]
    let v16: void*;  // [bp-0x3c8], Other Possible Types: u64
    let v17: struct24;  // [bp-0x398]
    let v18: u64;  // [bp-0x390]
    let v19: u64;  // [bp-0x388]
    let v20: u64;  // [bp-0x380]
    let v21: u64;  // [bp-0x378]
    let v22: u64;  // [bp-0x370]
    let v23: u64;  // [bp-0x368]
    let v24: u128;  // [bp-0x360]
    let v25: u128;  // [bp-0x350]
    let v26: u64;  // [bp-0x340]
    let v27: struct64;  // [bp-0x338]
    let v28: struct106;  // [bp-0x2f8], Other Possible Types: u8
    let v30: u64;  // rdx
    let v31: u64;  // r15
    let v32: u64;  // rdx
    let v34: i64;  // r14
    let v35: u128;  // xmm0
    let v36: i64;  // rax
    let v37: u64;  // rbp
    let v38: u64;  // r12

    uu_nl::uu_app(&v28);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v28, a0, a1);
    match v4 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        },
        Ok(_) => {
            v26 = *((&v4 as &char + 48) as &i64);
            v25 = *((&v4 as &char + 32) as &i128);
            v24 = *((&v4 as &char + 16) as &i128);
            v22 = v4 as i64;
            v23 = v6;
            v28 = <uu_nl::Settings as core::default::Default>::default();
            v17 = uu_nl::helper::parse_options(&v28, &v22);
            if v19 {
                v4 = alloc::str::join_generic_copy(v18, v19, "\n");
                v16 = v7;
                v13 = *(&v4.buf.cap as &i128) as u128;
                v10 = &v13 as u8;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = "Invalid arguments supplied.\n";
                v6 = 1;
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v5 as u192 = core::option::Option<T>::map_or_else(v30);
                v7 = v3;
                v5 = *(&v0 as &i128) as u128;
                v8 = 1;
                v31 = alloc::boxed::Box<T>::new(&v5 as u192);
                return v31;
            }
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v22, "file");
            v13 = clap_builder::parser::error::MatchesError::unwrap("file", &v4);
            if v13.field_0 as i64 {
                v27 = v14;
                v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27);
            } else {
                v34 = alloc::alloc::Global::alloc_impl(0x18, a1, v32) as u64;
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                v3 = v7;
                v35 = v4.field_0;
                v0 = v35;
                *((v34 + 16) as &u64) = v7;
                *(v34 as &u128) = v35;
                v10 = alloc::slice::hack::into_vec(v34, 1);
            }
            v13 = 1;
            v15 = v28.field_120;
            v16 = 0;
            v20 = v11;
            v21 = v11 + v12 * 24;
            v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
            if !v36 {
                return 0;
            }
            do {
                v37 = *((v36 + 8) as &i64);
                v38 = *((v36 + 16) as &i64);
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v37, v38, "-") as i8 {
                    v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                    v31 = uu_nl::nl(&v4, &v13, &v28);
                    if !v31 {
                        continue;
                    }
                } else if std::path::Path::is_dir(v37, v38) as u8 {
                    v0 = uucore::util_name();
                    v2 = v32;
                    eprint!("{}: ", &v0);
                    v0 = v37;
                    v2 = v38;
                    eprintln!("{}: Is a directory", &v0);
                    uucore::mods::error::set_exit_code(1);
                } else {
                    v4 = std::fs::File::open(v37, v38);
                    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, v36);
                    v31 = v1.field_0;
                    if (v1.field_0)
                        break;
                    v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v1.field_8 as i32 as u32 as u64);
                    v31 = uu_nl::nl(&v4, &v13, &v28);
                    if (v31)
                        break;
                }
            } while ((v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20), v36));
            return 0;
        },
    }
}
