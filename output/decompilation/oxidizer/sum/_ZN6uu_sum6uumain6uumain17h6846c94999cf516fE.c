fn uu_sum::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u8;  // [bp-0x409]
    let v1: u64;  // [bp-0x408]
    let v2: u16;  // [bp-0x408]
    let v3: i64;  // [bp-0x400]
    let v4: struct16;  // [bp-0x3f8], Other Possible Types: core::fmt::Arguments, u128
    let v5: struct56;  // [bp-0x3f8], Other Possible Types: u64
    let v6: u64;  // [bp-0x3e8]
    let v7: u64;  // [bp-0x3b8]
    let v8: i64;  // [bp-0x3b0]
    let v9: u64;  // [bp-0x3a8]
    let v10: u64;  // [bp-0x3a0]
    let v11: u64;  // [bp-0x398]
    let v12: u64;  // [bp-0x390]
    let v13: u64;  // [bp-0x388]
    let v14: i64;  // [bp-0x380]
    let v15: core::fmt::Arguments;  // [bp-0x378]
    let v16: struct56;  // [bp-0x370]
    let v17: u64;  // [bp-0x368]
    let v18: struct64;  // [bp-0x338]
    let v19: std::io::stdio::Stdout;  // [bp-0x2f8], Other Possible Types: struct24, struct56, struct712, core::fmt::rt::Argument
    let v20: struct8;  // [bp-0x2f8], Other Possible Types: u64
    let v21: u128;  // [bp-0x2f8]
    let v22: u64;  // [bp-0x2f0]
    let v23: u64;  // [bp-0x2f0]
    let v24: core::fmt::rt::Argument;  // [bp-0x2e8], Other Possible Types: u64
    let v25: u64;  // [bp-0x2e8]
    let v26: core::fmt::rt::Argument;  // [bp-0x2d8]
    let v27: u128;  // [bp-0x2d8]
    let v28: core::fmt::rt::Argument;  // [bp-0x2c8]
    let v29: u128;  // [bp-0x2c8]
    let v32: i64;  // r15
    let v33: u128;  // xmm0
    let v34: core::fmt::rt::Argument;  // r15b
    let v35: core::fmt::Arguments;  // r13
    let v36: i16;  // bx
    let v37: u64;  // rbp
    let v38: u64;  // rax
    let v39: u64;  // r13
    let v41: u64;  // rdx
    let v42: u64;  // rax
    let v43: u64;  // rax
    let v44: u64;  // r14
    let v45: u64;  // rax

    v19 = uu_sum::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v19, a0, a1);
    if (((0 ^ v4.field_0) & (0 ^ -(v5))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    }
    v16 = v5;
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16, _ZN6uu_sum7options4FILE17h621830cf250500f6E.field_0, g_4e1cd8.field_0);
    v18 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_sum7options4FILE17h621830cf250500f6E.field_0, g_4e1cd8.field_0, &v19);
    if v18.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v7, &v18);
    } else {
        v32 = alloc::alloc::Global::alloc_impl(8, 24);
        v19 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v6 = v24;
        v33 = *(&v19.field_0 as &i128);
        v4 = v33;
        *((v32 + 16) as &u64) = v24;
        *(v32 as &u128) = v33;
        v7 = 1;
        v8 = v32;
        v9 = 1;
    }
    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v16, _ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17hbe8458c5cf2e4671E.field_0, g_4e1ce8.field_0);
    if v9 >= 2 {
        v34 = 1;
        v35 = v8;
    } else {
        v35 = v8;
        v34 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v35 + 8) as &i64), *((v35 + 16) as &i64), "-") ^ 1;
    }
    v36 = (v0 ^ 1) * 4 + 1;
    v37 = v9 * 24 + v35;
    v38 = v35 + 24;
    do {
        v15 = v39;
        uu_sum::open(&v12, *((v35 + 8) as &i64), *((v35 + 16) as &i64));
        if v12 as i32 == 1 {
            v1 = v13;
            v3 = v14;
            uucore::mods::error::set_exit_code(*((v3 + 88) as &i64)(v1) as u32);
            v10 = uucore::util_name();
            v11 = v41;
            eprintln!("{}: {}", &v10, &v1);
            v24 = v25;
            v22 = v23;
            continue;
        } else {
            if v0 {
                v20 = uu_sum::sysv_sum(v1, v3);
            } else {
                v20 = uu_sum::bsd_sum(v1, v3);
            }
            if v20 as i32 == 1 {
                v44 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
                break;
            }
            v10 = v22;
            v2 = v24;
            v19 = std::io::stdio::stdout();
            v12 = std::io::stdio::Stderr::lock(&v19);
            if v34 {
                v19 = core::fmt::rt::Argument {
                    ty: &v2 as u64
                };
                v24 = core::fmt::rt::Argument {
                    ty: &v10
                };
                v26 = core::fmt::rt::Argument {
                    ty: &v15
                };
                v28 = core::fmt::rt::Argument {
                    ty: 0
                };
                v4 = core::fmt::Arguments {
                    pieces: [&g_4e1110, " ", " ", "\n"]
                    args: [v21, v25, v27, v29]
                    fmt: &g_4183e8
                };
                v42 = std::io::Write::write_fmt(&v12, &v4);
                v24 = v25;
                v22 = v23;
                if v42 {
                    v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
LABEL_454321:
                    v44 = v45;
                }
            } else {
                v19 = core::fmt::rt::Argument {
                    ty: &v2 as u64
                };
                v24 = core::fmt::rt::Argument {
                    ty: &v10
                };
                v26 = core::fmt::rt::Argument {
                    ty: 0
                };
                v4 = core::fmt::Arguments {
                    pieces: [&g_4e10e0, " ", "\n"]
                    args: [v21, v25, v27]
                    fmt: &g_418388
                };
                v43 = std::io::Write::write_fmt(&v12, &v4);
                v24 = v25;
                v22 = v23;
                if v43 {
                    v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
                    goto LABEL_454321;
                }
            }
            v22 = v22;
            v24 = v24;
            v24 = v24;
            v22 = v22;
        }
        v38 = v39 + 24;
        if v39 == v37 {
            if v39 == v37 {
                break;
            }
        } else {
            if v39 == v37 {
                break;
            }
        }
    } while (v35);
    return 0;
    return v44;
}
