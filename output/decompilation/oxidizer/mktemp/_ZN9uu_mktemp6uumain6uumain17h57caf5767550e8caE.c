fn uu_mktemp::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x440]
    let v1: u128;  // [bp-0x438]
    let v2: u64;  // [bp-0x430]
    let v3: Result<struct80, struct40>;  // [bp-0x428], Other Possible Types: struct56, u128
    let v4: struct16;  // [bp-0x428]
    let v5: i64;  // [bp-0x420], Other Possible Types: u64
    let v6: u64;  // [bp-0x418]
    let v7: u64;  // [bp-0x418]
    let v8: u64;  // [bp-0x400]
    let v9: u128;  // [bp-0x3f0]
    let v10: u64;  // [bp-0x3e0]
    let v11: u128;  // [bp-0x3d8]
    let v12: u64;  // [bp-0x3c8]
    let v13: u8;  // [bp-0x3b8]
    let v14: u64;  // [bp-0x3b0]
    let v15: u64;  // [bp-0x3a8]
    let v16: struct24;  // [bp-0x3a0], Other Possible Types: struct76
    let v17: void*;  // [bp-0x398]
    let v18: u128;  // [bp-0x390]
    let v19: u128;  // [bp-0x380]
    let v20: u128;  // [bp-0x370]
    let v21: u8;  // [bp-0x358]
    let v22: u8;  // [bp-0x357]
    let v23: struct24;  // [bp-0x350]
    let v24: struct56;  // [bp-0x338]
    let v25: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x2f8], Other Possible Types: struct28, struct32, struct712, struct80, struct48
    let v26: struct24;  // [bp-0x2f8]
    let v27: Result<struct24, struct24>;  // [bp-0x2f8]
    let v28: core::fmt::rt::Argument;  // [bp-0x2f0]
    let v29: void*;  // [bp-0x2e8]
    let v30: u64;  // [bp-0x2d0]
    let v32: core::fmt::rt::Argument;  // r15
    let v33: u64;  // rdx
    let v34: u64;  // rax
    let v35: u8;  // bpl
    let v37: u64;  // r14
    let v38: u64;  // r8
    let v39: void*;  // r12

    core::iter::traits::iterator::Iterator::collect(&v13, a0, a1);
    v25 = uu_mktemp::uu_app();
    v4 = clap_builder::builder::command::Command::try_get_matches_from(&v25, v14, v15);
    if !((((0 ^ v4.field_0) & (0 ^ -(v4.field_0))) >> 63) as char) {
        v24 = v3;
        v16 = uu_mktemp::Options::from(&v24);
        v25 = std::env::var(a1, v33);
        match v25 {
            Ok(_) => {
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v24, _ZN9uu_mktemp12ARG_TEMPLATE17hfee3cbf22394565cE.field_0, g_4f8fb0.field_0) as u8 {
                    if !v15 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v34 = v15 * 3;
                    if v14 + v34 * 8 == 24 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v14 + v34 * 8 - 16) as &i64), *((v14 + v34 * 8 - 8) as &i64), v17, v16.field_16) as u8 {
                        goto LABEL_45e1a0;
                    }
                    v25 = 9223372036854775814;
                    alloc::boxed::Box<T>::new(&v25);
                }
            },
            Err(_) => {
LABEL_45e1a0:
                v35 = v16.field_74;
                v25 = struct80 {
                    field_0: v16.field_0
                    field_16: v18
                    field_32: v19
                    field_48: v20
                    field_64: *(&v16.field_64 as &i128)
                };
                v3 = uu_mktemp::Params::from(&v25);
                v37 = v3 as i64;
                v11 = *((&v3 as &char + 24) as &i128);
                v12 = v8;
                if v37 == 0x8000000000000000 {
                    v25 = struct48 {
                        field_0: v5
                        field_8: v6
                        field_16: v11
                        field_32: v12
                        field_40: v0
                    };
                    alloc::boxed::Box<T>::new(&v25);
                } else {
                    v1 = v9;
                    v38 = v12;
                    v7 = v12;
                    v3 = v11;
                    v0 = v30;
                    if v22 {
                        v26 = uu_mktemp::dry_exec(v5, v6, v5, v38, v10, v1 as i64, v2);
                    } else {
                        v27 = uu_mktemp::exec(v5, v6, v5, v38, v10, v1 as i64, v2, v21);
                    }
                    v39 = v29;
                    if v35 {
                        match v27 {
                            Err(_) => {
                                uu_mktemp::uumain::uumain::{{closure}}(v32, v39);
LABEL_45e37b:
                                core::mem::drop(v37, v5);
                            },
                            Ok(_) => {
LABEL_45e395:
                                v23 = struct24 {
                                    field_0: v27 as i64
                                    field_8: v32
                                    field_16: v39
                                };
                                <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v23));
                                core::mem::drop(v37, v5);
                            },
                        }
                    } else {
                        if let Ok(_) = v27 {
                            goto LABEL_45e395;
                        }
                        goto LABEL_45e37b;
                    }
                }
            },
        }
    } else if *((v5 + 221) as &i8) == 5 {
        v25 = clap_builder::util::flat_map::FlatMap<K,V>::iter(v5 + 32);
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v25), a1) {
            goto LABEL_45e2a7;
        }
        v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("too many templates");
        v25 = struct28 {
            field_0: *(&v16.field_0 as &i128)
            field_16: v16.field_16
            field_24: 1
        };
        alloc::boxed::Box<T>::new(&v25);
    } else {
LABEL_45e2a7:
        uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    }
    return v28;
}
