fn uu_nl::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u128;  // [bp-0x468], Other Possible Types: char
    let v1: Result<struct16, struct12>;  // [bp-0x468]
    let v2: u64;  // [bp-0x460]
    let v3: u64;  // [bp-0x458]
    let v4: Result<struct4, struct8>;  // [bp-0x448], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, struct44, struct24, u64, struct56, struct48
    let v5: u128;  // [bp-0x448]
    let v6: u64;  // [bp-0x440]
    let v7: u64;  // [bp-0x438], Other Possible Types: core::cell::UnsafeCell<u8> *
    let v8: u32;  // [bp-0x430]
    let v9: void*;  // [bp-0x428]
    let v10: struct24;  // [bp-0x400], Other Possible Types: core::cell::UnsafeCell<u8> *, Result<struct24, struct24>
    let v11: u64;  // [bp-0x3f8]
    let v12: u64;  // [bp-0x3f0]
    let v13: u128;  // [bp-0x3d8], Other Possible Types: struct64
    let v14: u64;  // [bp-0x3d0]
    let v15: void*;  // [bp-0x3c8], Other Possible Types: u64
    let v16: u128;  // [bp-0x3b8]
    let v17: u128;  // [bp-0x3a8]
    let v18: struct24;  // [bp-0x398]
    let v19: u64;  // [bp-0x390]
    let v20: u64;  // [bp-0x388]
    let v21: u64;  // [bp-0x380]
    let v22: u64;  // [bp-0x378]
    let v23: u64;  // [bp-0x370]
    let v24: u64;  // [bp-0x368]
    let v25: u8;  // [bp-0x360]
    let v26: u8;  // [bp-0x350]
    let v27: u64;  // [bp-0x340]
    let v28: u8;  // [bp-0x338]
    let v29: u8;  // [bp-0x328]
    let v30: u128;  // [bp-0x318]
    let v31: u128;  // [bp-0x308]
    let v32: u8;  // [bp-0x2f8], Other Possible Types: struct106
    let v34: u64;  // rdx
    let v35: u64;  // r15
    let v36: u64;  // rdx
    let v38: i64;  // r14
    let v39: u128;  // xmm0
    let v40: i64;  // rax
    let v41: u64;  // rbp
    let v42: u64;  // r12

    uu_nl::uu_app(&v32);
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v32, a0, a1);
    match v4 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
        },
        Ok(_) => {
            v27 = *((&v4 as &char + 48) as &i64);
            memcpy(&v26, &v4, 16);
            memcpy(&v25, &v4, 16);
            v23 = v4 as i64;
            v24 = v6;
            v32 = <uu_nl::Settings as core::default::Default>::default();
            v18 = uu_nl::helper::parse_options(&v32, &v23);
            if v20 {
                v4 = alloc::str::join_generic_copy(v19, v20, "\n");
                v15 = v7;
                v13 = *(&v4.buf.cap as &i128) as u128;
                v10 = &v13 as u8;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = "Invalid arguments supplied.\n";
                v6 = 1;
                v9 = 0;
                v7 = &v10;
                v8 = 1;
                v5 as u192 = core::option::Option<T>::map_or_else(v34);
                v7 = v3;
                v5 = *(&v0 as &i128) as u128;
                v8 = 1;
                v35 = alloc::boxed::Box<T>::new(&v5 as u192);
                return v35;
            }
            v4 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, "file");
            v13 = clap_builder::parser::error::MatchesError::unwrap("file", &v4);
            if v13.field_0 as i64 {
                v31 = v17;
                v30 = v16;
                memcpy(&v29, &v13, 16);
                memcpy(&v28, &v13, 16);
                v10 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v28 as u128);
            } else {
                v38 = alloc::alloc::Global::alloc_impl(0x18, a1, v36) as u64;
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
                v3 = v7;
                v39 = v4.field_0;
                v0 = v39;
                *((v38 + 16) as &u64) = v7;
                *(v38 as &u128) = v39;
                v10 = alloc::slice::hack::into_vec(v38, 1);
            }
            v13 = 1;
            v14 = v32.field_104;
            v15 = 0;
            v21 = v11;
            v22 = v11 + v12 * 24;
            v40 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v21);
            if !v40 {
                return 0;
            }
            do {
                v41 = *((v40 + 8) as &i64);
                v42 = *((v40 + 16) as &i64);
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v42, "-") as i8 {
                    v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, std::io::stdio::stdin());
                    v35 = uu_nl::nl(&v4, &v13, &v32);
                    if !v35 {
                        continue;
                    }
                } else if std::path::Path::is_dir(v41, v42) as u8 {
                    v0 = uucore::util_name();
                    v2 = v36;
                    eprint!("{}: ", &v0);
                    v0 = v41;
                    v2 = v42;
                    eprintln!("{}: Is a directory", &v0);
                    uucore::mods::error::set_exit_code(1);
                } else {
                    v4 = std::fs::File::open(v41, v42);
                    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, v40);
                    v35 = v1 as i64;
                    if (v1 as i64)
                        break;
                    v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, *((&v1 as &char + 8) as &i32) as u32 as u64);
                    v35 = uu_nl::nl(&v4, &v13, &v32);
                    if (v35)
                        break;
                }
            } while ((v40 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v21), v40));
            return 0;
        },
    }
}
