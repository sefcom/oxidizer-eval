fn uu_test::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i128;  // [sp-0x3d8], Other Possible Types: struct24
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i64;  // [sp-0x3c0], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3b8]
    let v5: i64;  // [sp-0x3b0]
    let v6: i64;  // [bp-0x3a8]
    let v7: i64;  // [bp-0x3a0]
    let v8: i128;  // [bp-0x39f]
    let v9: i64;  // [bp-0x399]
    let v10: i64;  // [sp-0x398]
    let v11: i64;  // [sp-0x390]
    let v12: i64;  // [sp-0x388]
    let v13: i64;  // [sp-0x380]
    let v14: i64;  // [sp-0x378]
    let v15: i128;  // [bp-0x368]
    let v16: i64;  // [sp-0x359]
    let v17: i8;  // [bp-0x348]
    let v18: i64;  // [sp-0x338], Other Possible Types: struct56
    let v19: i64;  // [sp-0x330]
    let v20: i64;  // [sp-0x328]
    let v21: String;  // [sp-0x300], Other Possible Types: i192
    let v22: i32;  // [sp-0x2e8], Other Possible Types: Enum, struct712
    let v23: i8;  // [bp-0x2e0]
    let v24: i128;  // [bp-0x2df]
    let v25: i64;  // [sp-0x2d8]
    let v26: i64;  // [bp-0x2d0]
    let v27: i64;  // [sp-0x2c8]
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rcx
    let v34: i64;  // rax
    let v35: i64;  // rdx
    let v36: i64;  // r14
    let v37: i64;  // rdi
    let v38: i64;  // rax
    let v39: i64;  // rax
    let v40: i128;  // xmm0
    let v41: i8;  // cl
    let v42: i64;  // rcx
    let v43: i64;  // r15
    let v44: i128;  // xmm0
    let v45: i32;  // eax
    let v46: i64;  // rsi
    let v47: i64;  // rdi
    let v48: i64;  // rax

    v22 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v17);
    if v22 != 0x8000000000000000 {
        v2 = v25;
        v0 = v22;
    } else {
        v0 = std::sys::os_str::bytes::Slice::to_owned(&g_40fd8c, 4);
    }
    v3 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    v22 = 91;
    if !core::slice::<impl [T]>::ends_with(uucore::util_name(), v29, &v22, 1) as i8 {
LABEL_437c43:
        v25 = v5;
        v22 = v3;
        uu_test::parser::parse();
        v39 = v6;
        if v39 != 7 {
            v41 = *((&v6 as &char + 8) as &i8);
            v15 = v8;
            v16 = v11;
            v6 = v15;
            v9 = v16;
            v26 = v9;
            v24 = v6;
            v22 = v39;
            v23 = v41;
            v36 = __rust_alloc(32, 8);
            goto LABEL_437e07;
        }
        v20 = v11;
        v18 = *((&v6 as &char + 8) as &i128);
        uu_test::eval();
        v42 = v22;
        v15 = v24;
        v16 = v26;
        v6 = v15;
        v9 = v16;
        if v42 != 7 {
            v26 = v9;
            v24 = v6;
            v22 = v42;
            v23 = v23;
            v36 = __rust_alloc(32, 8);
LABEL_437e07:
            v44 = v22;
            *((v36 + 16) as &i128) = *((&v24 as &char + 7) as &i128);
            *(v36 as &i128) = v44;
            v43 = &g_4df538;
            goto LABEL_437f13;
        } else {
            if (v23 & 1) {
                v36 = 0;
            } else {
                v36 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
            }
LABEL_437f1b:
            if !(!v36) {
                goto LABEL_437f2c;
            }
        }
    } else {
        v30 = v5;
        if v30 == 1 {
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v4 + 8) as &i64), *((v4 + 16) as &i64), &g_41019e, 6) as i8 {
                if !v5 {
                    core::panicking::panic_bounds_check(); /* do not return */
                }
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v4 + 8) as &i64), *((v4 + 16) as &i64), &g_4101a4, 9) as i8 {
                    v31 = v5;
                    goto LABEL_437bcd;
                }
            }
            v22 = uu_test::uu_app();
            v10 = v2;
            v6 = v0;
            v32 = v4;
            v11 = v32;
            v12 = v32;
            v13 = v3;
            v14 = v32 + (v5 + v5 * 2) * 8;
            v18 = clap_builder::builder::command::Command::get_matches_from(&v22, &v6, v32);
            v36 = 0;
            if false {
LABEL_437f2c:
                v0 = v36;
                v1 = v43;
                v6 = &v0;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v22 = &g_40ff60;
                v23 = 1;
                v27 = 0;
                v25 = &v6;
                v26 = 1;
                v21 = alloc::fmt::format::format_inner(&v22);
                v6 = v21;
                v46 = *((&v21 as &char + 16) as &i64);
                v10 = *((&v21 as &char + 16) as &i64);
                v47 = *((&v6 as &char + 8) as &i64);
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v6 as &char + 8) as &i64), *((&v21 as &char + 16) as &i64), 1, 0) as i8 {
                    v18 = uucore::util_name();
                    v19 = v29;
                    v3 = &v18;
                    v4 = <&T as core::fmt::Display>::fmt;
                    v22 = &g_4df488;
                    v23 = 2;
                    v27 = 0;
                    v25 = &v3;
                    v26 = 1;
                    std::io::stdio::_eprint(&v22);
                    v18 = &v6;
                    v19 = <alloc::string::String as core::fmt::Display>::fmt;
                    v22 = &g_4df4a8;
                    v23 = 2;
                    v27 = 0;
                    v25 = &v18;
                    v26 = 1;
                    std::io::stdio::_eprint(&v22);
                }
                if *((v1 + 104) as &i64)() {
                    v18 = uucore::execution_phrase();
                    v19 = v29;
                    v3 = &v18;
                    v4 = <&T as core::fmt::Display>::fmt;
                    *(&v22 as &&str) = "Try '";
                    v23 = 2;
                    v27 = 0;
                    v25 = &v3;
                    v26 = 1;
                    std::io::stdio::_eprint(&v22);
                }
                v45 = *((v1 + 96) as &i64)();
                if !*(v1 as &i64) {
                    return v45;
                }
                v48();
            }
        } else {
LABEL_437bcd:
            if !v31 {
                v6 = 0x8000000000000000;
                goto LABEL_437e32;
            }
            v5 = v31 - 1;
            v33 = v4;
            v34 = v5 * 3;
            v35 = *((v33 + v34 * 8 + 16) as &i64);
            v6 = *((v33 + v34 * 8) as &i128);
            v10 = v35;
            if !(v6 != 0x8000000000000000) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v6 as &char + 8) as &i64), v10, &g_4101ad, 1) as i8) {
LABEL_437e32:
                v22 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(11, 0);
                v37 = *((&v22 as &char + 8) as &i64);
                v38 = v25;
                *(v38 as &i64) = 2334956331002456429;
                *((v38 + 7) as &i32) = 660416288;
                v26 = 2;
                v22 = v37;
                v23 = v38;
                v25 = 11;
                v36 = __rust_alloc(32, 8);
                v40 = v22;
                *((v36 + 16) as &i64) = v25;
                *(v36 as &i128) = v40;
                v43 = &g_4df5e0;
            } else {
                goto LABEL_437c43;
            }
LABEL_437f13:
            goto LABEL_437f1b;
        }
    }
    v45 = uucore::mods::error::get_exit_code() as i32;
    return v45;
}
