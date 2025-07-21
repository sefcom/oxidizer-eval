fn uu_sum::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x43a]
    let v1: u8;  // [bp-0x439]
    let v2: Result<struct56, struct16>;  // [bp-0x438], Other Possible Types: struct64
    let v3: struct56;  // [bp-0x438], Other Possible Types: struct64
    let v4: struct16;  // [bp-0x3f8]
    let v5: u16;  // [bp-0x3f8]
    let v6: u64;  // [bp-0x3f8]
    let v7: u64;  // [bp-0x3e8]
    let v8: struct24;  // [bp-0x3e8]
    let v9: u64;  // [bp-0x3e8]
    let v10: u64;  // [bp-0x3e0]
    let v11: u64;  // [bp-0x3e0]
    let v12: i64;  // [bp-0x3d8]
    let v13: i64;  // [bp-0x3d8]
    let v14: struct24;  // [bp-0x3b0]
    let v15: i64;  // [bp-0x3a8]
    let v16: u64;  // [bp-0x3a0]
    let v17: struct16;  // [bp-0x398]
    let v18: i64;  // [bp-0x388]
    let v19: u64;  // [bp-0x380]
    let v20: u64;  // [bp-0x378]
    let v21: struct56;  // [bp-0x370]
    let v22: u64;  // [bp-0x368]
    let v23: struct64;  // [bp-0x338]
    let v24: struct24;  // [bp-0x2f8], Other Possible Types: struct56, u8
    let v25: i64;  // [bp-0x2e8], Other Possible Types: u64
    let v26: u64;  // [bp-0x2e0]
    let v27: void*;  // [bp-0x2d8]
    let v28: u64;  // [bp-0x2d0]
    let v29: u8;  // [bp-0x2c8]
    let v30: u64;  // [bp-0x2c0]
    let v31: u64;  // [bp-0x2b0]
    let v32: u64;  // [bp-0x2a8]
    let v33: u64;  // [bp-0x2a0]
    let v34: u64;  // [bp-0x298]
    let v35: u8;  // [bp-0x290]
    let v36: u64;  // [bp-0x288]
    let v37: u64;  // [bp-0x278]
    let v38: u64;  // [bp-0x268]
    let v39: u64;  // [bp-0x260]
    let v40: u8;  // [bp-0x258]
    let v43: i64;  // r15
    let v44: u128;  // xmm0
    let v45: i64;  // rax
    let v47: u64;  // rdi
    let v48: i64;  // rsi
    let v51: u16;  // dx

    uu_sum::uu_app(&v24);
    v2 = clap_builder::builder::command::Command::try_get_matches_from(&v24, a0, a1);
    match v2 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
        },
        Ok(v21) => {
            v24 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v21, _ZN6uu_sum7options4FILE17h2195fcf4470791a0E.field_0, g_5125a8.field_0);
            v2 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_sum7options4FILE17h2195fcf4470791a0E.field_0, g_5125a8.field_0, &v24);
            if v2.field_0 as i64 {
                v23 = v3;
                v14 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v23);
            } else {
                v43 = alloc::alloc::Global::alloc_impl(a0) as u64;
                v24 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v12 = v25;
                v44 = v24.field_0;
                v7 = v44;
                *((v43 + 16) as &struct_1 *) = v25;
                *(v43 as &u128) = v44;
                v14 = alloc::slice::hack::into_vec(v43, 1);
            }
            v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v21, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hb669b9fdd31f7f9cE.field_0, g_5125b8.field_0) as i8;
            v0 = 1;
            if v16 <= 1 {
                v0 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(*((v15 + 8) as &i64), *((v15 + 16) as &i64));
            }
            v17 = struct16 {
                field_0: v15
                field_8: v15 + v16 * 24
            };
            v45 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v17);
            if !v45 {
                return 0;
            }
            do {
                vvar_676{stack -1000} = struct24 OrderedDict({0: 𝜙@64b [((4605400, None), vvar_490{stack -1000}), ((4605055, None), vvar_435{stack -1000})], 8: 𝜙@64b [((4605400, None), vvar_491{stack -992}), ((4605055, None), vvar_436{stack -992})], 16: 𝜙@64b [((4605400, None), vvar_488{stack -984}), ((4605055, None), vvar_433{stack -984})]})
                v18 = v45;
                uu_sum::open(&v8, *((v45 + 8) as &i64), *((v45 + 16) as &i64));
                v47 = v11;
                v48 = v13;
                if v8.field_0 as i64 {
                    v4 = struct16 {
                        field_0: v11
                        field_8: v48
                    };
                    uucore::mods::error::set_exit_code(*((v48 + 96) as &i64)(v47, v48) as u32 as u64);
                    v19 = uucore::util_name();
                    v20 = v51 as u64;
                    eprintln!("{}: {}", &v19, &v4);
                    v12 = v13;
                    v7 = v9;
                    v10 = v11;
                } else {
                    v19 = (!v1 ? uu_sum::bsd_sum(v47, v48) : uu_sum::sysv_sum(v47, v48));
                    v5 = v51;
                    v6 = *((&v2 as &char + 64) as &i64) & -0x10000 | v5 as u64;
                    if !v0 {
                        v24 = 2;
                        v25 = 1;
                        v26 = 2;
                        v27 = 0;
                        v28 = 34359738400;
                        v29 = 3;
                        v30 = 2;
                        v31 = 1;
                        v32 = 2;
                        v33 = 1;
                        v34 = 32;
                        v35 = 3;
                        print!("{} {}\n{}", &v6, &v19, v46);
                        v12 = v13;
                        v7 = v9;
                        v10 = v11;
                    } else {
                        v24 = 2;
                        v25 = 1;
                        v26 = 3;
                        v27 = 0;
                        v28 = 34359738400;
                        v29 = 3;
                        v30 = 2;
                        v31 = 1;
                        v32 = 3;
                        v33 = 1;
                        v34 = 32;
                        v35 = 3;
                        v36 = 2;
                        v37 = 2;
                        v38 = 2;
                        v39 = 32;
                        v40 = 3;
                        print!("{} {} {}\n{}", &v6, &v19, &v18, v46);
                        v12 = v13;
                        v7 = v9;
                        v10 = v11;
                    }
                }
                v45 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v17);
            } while (v45);
            return 0;
        },
    }
}
