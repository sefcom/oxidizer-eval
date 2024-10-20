fn uu_mktemp::uumain(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x4c8]
    let v1: i64;  // [sp-0x4b8]
    let v2: i8;  // [bp-0x4a8]
    let v3: i8;  // [bp-0x4a0]
    let v4: i8;  // [bp-0x498]
    let v5: i64;  // [sp-0x490]
    let v6: i128;  // [sp-0x488]
    let v7: i128;  // [sp-0x478]
    let v8: i64;  // [sp-0x468]
    let v9: i128;  // [sp-0x458]
    let v10: i64;  // [sp-0x448]
    let v11: i64;  // [bp-0x438]
    let v12: i64;  // [sp-0x430]
    let v13: i128;  // [sp-0x428]
    let v14: i128;  // [sp-0x418]
    let v15: i64;  // [sp-0x408]
    let v16: i64;  // [sp-0x400]
    let v17: i128;  // [bp-0x3f8], Other Possible Types: struct24, struct40, struct16
    let v18: i64;  // [sp-0x3f0]
    let v19: i8;  // [bp-0x3e8]
    let v20: i8;  // [bp-0x3d8]
    let v21: i8;  // [bp-0x3c8]
    let v22: i8;  // [bp-0x3c0]
    let v23: i8;  // [bp-0x3b0]
    let v24: i64;  // [sp-0x3a8], Other Possible Types: Enum, struct76
    let v25: i64;  // [sp-0x3a0]
    let v26: i64;  // [sp-0x398]
    let v27: i128;  // [sp-0x358], Other Possible Types: Enum
    let v28: i64;  // [sp-0x350]
    let v29: i128;  // [bp-0x348]
    let v30: i128;  // [sp-0x338]
    let v31: i128;  // [sp-0x328]
    let v32: String;  // [sp-0x310], Other Possible Types: i192
    let v33: i64;  // [sp-0x2f8], Other Possible Types: Enum, struct712
    let v34: i64;  // [sp-0x2f0]
    let v35: i128;  // [sp-0x2e8]
    let v36: i64;  // [bp-0x2e0]
    let v37: i128;  // [bp-0x2d8]
    let v38: i128;  // [sp-0x2c8]
    let v39: i128;  // [sp-0x2b8]
    let v44: i64;  // rbp
    let v45: i64;  // rcx
    let v46: i64;  // r15
    let v47: i64;  // rax
    let v48: i64;  // rbp
    let v49: i64;  // rbp
    let v50: i64;  // rdx
    let v51: i64;  // rax
    let v52: i64;  // rax
    let v53: i64;  // rax
    let v54: i64;  // rsi
    let v55: i128;  // xmm0
    let v56: i8;  // r14b
    let v57: i8;  // bpl
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i64;  // r15
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i64;  // r9
    let v64: i64;  // r8
    let v65: i64;  // rsi
    let v66: i64;  // rdx
    let v67: i64;  // rcx
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1
    let v72: i64;  // rax
    let v73: i64;  // r15
    let v74: i64;  // r15
    let v75: i64;  // rsi
    let v76: i64;  // rdx
    let v77: i64;  // rax
    let v79: i32;  // eax
    let v80: i64;  // rsi
    let v81: i64;  // rdi
    let v82: i64;  // r15
    let v83: i64;  // rax

    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    v33 = uu_mktemp::uu_app();
    v44 = &v17;
    v17 = clap_builder::builder::command::Command::try_get_matches_from(&v33, &v2, v45);
    if v17 == 0x8000000000000000 {
        v46 = v18;
        if *((v46 + 213) as &i8) == 5 {
            *(&v24 as &Enum) = Enum {
                field_0: *((v46 + 40) as &i64)
                field_8: *((v46 + 48) as &i64) + v24
                field_16: *((v46 + 64) as &i64)
                field_24: *((v46 + 72) as &i64) * 32 + v26
            };
            v47 = <clap_builder::util::flat_map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v24);
            if v47 {
                v16 = &v29;
                do {
                    v48 = v49;
                    if *(v47 as &i8) == 1 {
                        v27 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(10, 0);
                        v50 = v29;
                        *(v50 as &i64) = 8386103211268076635;
                        *((v50 + 8) as &i16) = 23909;
                        v34 = v28;
                        v35 = v50;
                        v36 = 10;
                        v33 = 2;
                        if *(v48 as &i8) == 2 {
                            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v48 + 16) as &i64), *((v48 + 24) as &i64), v35, 10) as i32 {
                                continue;
                            }
                            v33 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(18, 0);
                            v44 = &v17;
                            if v33 {
                                v16 = &v35;
                            }
                            v53 = v35;
                            *(v53 as &i128) = 154696299713976031486686225439063502708;
                            *((v53 + 16) as &i16) = 29541;
                            v36 = 1;
                            v33 = v34;
                            v34 = v53;
                            v35 = 18;
                            v51 = __rust_alloc(32, 8);
                            v55 = v33;
                            *((v51 + 16) as &i64) = v35;
                            *(v51 as &i128) = v55;
                            v60 = &g_4ed8b8;
                            goto LABEL_43ee36;
                        }
                    }
                } while ((v47 = <clap_builder::util::flat_map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(&v24), v47));
            }
            v44 = &v17;
        }
        v51 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v46);
LABEL_43ee36:
        goto LABEL_43ee3e;
    }
    v15 = v21;
    v14 = v20;
    v13 = v19;
    v11 = v17;
    v24 = uu_mktemp::Options::from(&v11);
    v33 = std::env::var(&g_4124b9, 15);
    if v33 {
        goto LABEL_43ed03;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(&v11, _ZN9uu_mktemp12ARG_TEMPLATE17h26a915922e8b572fE, g_4f0148) as i8 {
        v52 = v4;
        if !v52 {
            core::option::unwrap_failed(); /* do not return */
        }
        v54 = v3;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v54 + (v52 + (v52 << 1) << 3) - 16) as &i64), *((v54 + (v52 + (v52 << 1) << 3) - 8) as &i64), v25, v26) as i8 {
            v36 = 9223372036854775814;
            v51 = __rust_alloc(48, 8);
            v68 = v33;
            v69 = *((&v33 as &char + 16) as &i128);
            *((v51 + 32) as &i128) = *((&v33 as &char + 32) as &i128);
            *((v51 + 16) as &i128) = v69;
            *(v51 as &i128) = v68;
            goto LABEL_43ee25;
        }
    }
LABEL_43ed03:
    v44 = &v17;
    v56 = *((&v24 as &char + 73) as &i8);
    v57 = *((&v24 as &char + 74) as &i8);
    v39 = v26;
    v58 = v24;
    v59 = *((&v24 as &char + 16) as &i128);
    v38 = *((&v24 as &char + 48) as &i128);
    v37 = *((&v24 as &char + 32) as &i128);
    v35 = v59;
    v33 = v58;
    v17 = uu_mktemp::Params::from(&v33);
    if v5 == 0x8000000000000000 {
        v61 = *((&v17 as &char + 8) as &i128);
        v30 = (&v20)[8];
        v29 = *((&v17 as &char + 24) as &i128);
        v27 = v61;
        v37 = v30;
        v35 = v29;
        v33 = v61;
        v51 = __rust_alloc(48, 8);
        v70 = v33;
        v71 = v35;
        *((v51 + 32) as &i128) = v37;
        *((v51 + 16) as &i128) = v71;
        *(v51 as &i128) = v70;
    } else {
        v62 = *((&v17 as &char + 8) as &i128);
        v31 = v22;
        v30 = (&v20)[8];
        v29 = *((&v17 as &char + 24) as &i128);
        v27 = v62;
        v63 = v23;
        v6 = v62;
        v64 = v30;
        v8 = v30;
        v7 = v29;
        v10 = *((&v31 as &char + 8) as &i64);
        v9 = *((&v30 as &char + 8) as &i128);
        v5 = v17;
        v65 = v6;
        v66 = *((&v6 as &char + 8) as &i64);
        v67 = *((&v7 as &char + 8) as &i64);
        if v56 {
            v1 = v0;
            v17 = uu_mktemp::dry_exec(v65, v66, v67, v64, v63, v1, v10, v2, v3);
        } else {
            v0 = v1;
            v17 = uu_mktemp::exec(v65, v66, v67, v64, v63, v1, v10, v1);
        }
        v72 = v17;
        v51 = v18;
        v73 = v19;
        if !v57 {
            v44 = &v17;
            if v72 == 0x8000000000000000 {
                goto LABEL_43f224;
            }
LABEL_43f277:
            v33 = v72;
            v34 = v51;
            v35 = v73;
            v51 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uucore::mods::display::println_verbatim(&v33, v75, v76));
        } else {
            v44 = &v17;
            if !(v72 == 0x8000000000000000) {
                goto LABEL_43f277;
            }
            v51 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((v73 + 96) as &i64)());
            if *(v73 as &i64) {
                v77();
            }
            v74 = v76;
LABEL_43f224:
        }
LABEL_43ee3e:
        if !v51 {
            v79 = uucore::mods::error::get_exit_code() as i32;
            return v79;
        }
        v11 = v51;
        v12 = v60;
        v17 = &v11;
        v18 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v33 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v34 = 1;
        v37 = 0;
        v35 = v44;
        v36 = 1;
        v32 = alloc::fmt::format::format_inner(&v33);
        v17 = v32;
        v80 = *((&v32 as &char + 16) as &i64);
        v19 = *((&v32 as &char + 16) as &i64);
        v81 = v18;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, *((&v32 as &char + 16) as &i64), 1, 0) as i8 {
            v24 = uucore::util_name();
            v25 = v76;
            v27 = &v24;
            v28 = <&T as core::fmt::Display>::fmt;
            v33 = &g_4ed760;
            v34 = 2;
            v37 = 0;
            v35 = &v27;
            v36 = 1;
            std::io::stdio::_eprint(&v33);
            v24 = v44;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            v33 = &g_4ed780;
            v34 = 2;
            v37 = 0;
            v35 = &v24;
            v36 = 1;
            std::io::stdio::_eprint(&v33);
        }
        if *((v12 + 104) as &i64)() {
            v24 = uucore::execution_phrase();
            v25 = v76;
            v27 = &v24;
            v28 = <&T as core::fmt::Display>::fmt;
            *(&v33 as &&str) = "Try '";
            v34 = 2;
            v37 = 0;
            v35 = &v27;
            v36 = 1;
            std::io::stdio::_eprint(&v33);
        }
        v79 = *((v12 + 96) as &i64)();
        v82 = v12;
        if *(v82 as &i64) {
            v83();
        }
        if *((v82 + 8) as &i64) {
            return v79;
        }
        return v79;
    }
LABEL_43ee25:
    v60 = &g_4ed810;
    goto LABEL_43ee36;
}
