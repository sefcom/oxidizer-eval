fn uu_fmt::linebreak::find_kp_breakpoints(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x1b2]
    let v1: u8;  // [bp-0x1b1]
    let v2: struct24;  // [bp-0x1a8], Other Possible Types: struct16
    let v3: struct28;  // [bp-0x1a0]
    let v4: alloc::string::String;  // [bp-0x198]
    let v5: void*;  // [bp-0x190]
    let v6: i64;  // [bp-0x188]
    let v7: struct16;  // [bp-0x180]
    let v8: struct24;  // [bp-0x180]
    let v9: struct16;  // [bp-0x180]
    let v10: struct16;  // [bp-0x180]
    let v11: void*;  // [bp-0x170]
    let v12: void*;  // [bp-0x168], Other Possible Types: struct16
    let v13: u64;  // [bp-0x160]
    let v14: void*;  // [bp-0x158], Other Possible Types: u64
    let v15: u64;  // [bp-0x150]
    let v16: u64;  // [bp-0x148]
    let v17: u64;  // [bp-0x140]
    let v18: u64;  // [bp-0x138]
    let v19: i64;  // [bp-0x130]
    let v20: u32;  // [bp-0x128]
    let v21: struct24;  // [bp-0x120]
    let v22: u64;  // [bp-0x118]
    let v23: u64;  // [bp-0x110]
    let v24: u64;  // [bp-0x100]
    let v25: u64;  // [bp-0xf8]
    let v26: i64;  // [bp-0xf0]
    let v27: u64;  // [bp-0xe8]
    let v28: u64;  // [bp-0xe0]
    let v29: u64;  // [bp-0xd8]
    let v30: core::iter::adapters::peekable::Peekable<core::str::iter::Bytes>;  // [bp-0xd0], Other Possible Types: u64
    let v31: void*;  // [bp-0xd0]
    let v32: i64;  // [bp-0xc8]
    let v33: struct16;  // [bp-0xc0]
    let v34: struct41;  // [bp-0xb0]
    let v35: i64;  // [bp-0xa8]
    let v36: u64;  // [bp-0xa0]
    let v37: u64;  // [bp-0x98]
    let v38: core::fmt::Arguments;  // [bp-0x90]
    let v39: u16;  // [bp-0x8c]
    let v40: u128;  // [bp-0x88]
    let v41: u128;  // [bp-0x78]
    let v42: u64;  // [bp-0x6b]
    let v43: u8;  // [bp-0x63]
    let v44: u16;  // [bp-0x62]
    let v45: struct38;  // [bp-0x58]
    let v47: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v48: struct24;  // rcx
    let v49: core::result::Result<core::ptr::non_null::NonNull<[u8]>, core::alloc::AllocError>;  // rax
    let v50: i64;  // rax
    let v51: u64;  // rdi
    let v52: u32;  // ebx
    let v53: i64;  // r15
    let v54: Result<struct2, struct8>;  // rax
    let v55: u64;  // r13
    let v56: struct41;  // rbx
    let v57: u64;  // rcx
    let v58: struct28;  // r15
    let v59: u64;  // rbp
    let v60: u64;  // r13
    let v61: u64;  // rdx
    let v63: u64;  // r13
    let v64: core::fmt::rt::Argument;  // rax
    let v65: u64;  // r14
    let v66: u64;  // rax
    let v67: i64;  // r15
    let v68: u64;  // r12
    let v69: core::fmt::rt::Argument;  // rax
    let v70: u64;  // rcx
    let v71: u64;  // r14
    let v72: u64;  // rdx
    let v73: u8;  // al
    let v74: i64;  // rcx
    let v75: u16;  // dx
    let v76: u128;  // xmm0
    let v77: void*;  // rax
    let v78: u64;  // rdi
    let v80: core::fmt::Arguments;  // ymm0

    v30 = core::iter::traits::iterator::Iterator::peekable(a0, a1);
    v47 = alloc::alloc::Global::alloc_impl(0x28, a0, a1) as u64;
    v48 = *((a2 + 32) as &i64);
    *(v47 as &i128) = 0;
    *((v47 + 16) as &i64) = 0;
    *((v47 + 24) as &struct24) = v48;
    *((v47 + 32) as &i32) = 0;
    *((v47 + 36) as &i16) = 0;
    v2 = alloc::slice::hack::into_vec(v47, 1);
    v49 = alloc::alloc::Global::alloc_impl(0x8, a0, a1) as u64;
    *(v49 as &i64) = 0;
    v21 = alloc::slice::hack::into_vec(v49, 1);
    v8 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    v50 = *(a2 as &i64);
    v19 = v50;
    v51 = *((v50 + 56) as &i64);
    v27 = *((v50 + 48) as &i64);
    v25 = v51;
    v24 = *((v50 + 48) as &i64) - v51;
    v18 = core::cmp::max_by(v51, v24 + 1) - v24;
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v0 = *((a2 + 48) as &i8);
    v16 = *((a2 + 40) as &i64);
    v52 = 0;
    v15 = "src/uu/fmt/src/linebreak.rs";
    v5 = 0;
    loop {
        v31 = 0;
        if !v30 {
            v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v33);
        }
        if !v32 {
            break;
        }
        v53 = *(core::option::Option<T>::get_or_insert_with(&v31, &v33) as &i64);
        v1 = 1;
        v6 = v32;
        v20 = ((*((v32 + 58) as &i8) || v0) == 1 ? (v52 & 1) + 1 : 0);
        v14 = 0;
        v11 = 0;
        v28 = v22;
        v29 = v22 + v23 * 8;
        v54 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28);
        match v54 {
            Err(_) => {
                v26 = v53;
                v64 = 0;
                v55 = 9223372036854775807;
                v17 = 9223372036854775807;
                do {
                    v56 = *(v54 as &i64);
                    v57 = v55;
                    v58 = v3;
                    v59 = v56 * 5;
                    v60 = *((v58 + v59 * 8 + 16) as &i64) - v5;
                    v61 = *((v58 + v59 * 8 + 24) as &i64);
                    *((v58 + v59 * 8 + 16) as &u64) = v60;
                    if v57 <= v60 {
                        v63 = v57;
                    } else {
                        v63 = v60;
                    }
                    v55 = v63;
                    v65 = *((v6 + 40) as &i64);
                    v66 = uu_fmt::linebreak::BreakArgs::compute_width(v19, v6, v61, *((v58 + v59 * 8 + 37) as &i8) as u8 as u32);
                    v67 = v58 + v59 * 8;
                    v68 = v66 + v20 + v65 + *((v67 + 24) as &i64);
                    if v68 <= v27 {
                        v7 = alloc::vec::Vec<T,A>::push(v56);
                        *((v67 + 37) as &i8) = 0;
                        *((v67 + 24) as &u64) = v68;
                        if v68 >= v18 {
                            if v26 {
                                v80 = *((v67 + 32) as &i32);
                                v69 = uu_fmt::linebreak::compute_demerits(v25 - v68, v24, v65);
                            }
                            if v69 <= 99999999999999 {
                                v70 = *((v67 + 16) as &i64);
                                v71 = v70 + v69;
                                if v71 < v17 && (v70 < 0 || !v69 < 0 && !((!v69) as u8 as u8 & (v70) as u8 as u8)) {
                                    v34 = v56;
                                    v35 = v6;
                                    v39 = 0x100;
                                    v36 = v71;
                                    v38 = v80;
                                    v37 = v16;
                                    v12 = alloc::vec::Vec<T,A>::push(&v34);
                                    v17 = v71;
                                }
                            }
                        }
                    }
                    v54 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28);
                } while (v54);
                if v14 {
                    v14 -= 1;
                    v72 = v14 * 5;
                    v73 = *((8 + v72 * 8 + 37) as &i8);
                    if v73 != 2 {
                        v74 = 8 + v72 * 8;
                        v75 = *((v74 + 38) as &i16);
                        v42 = *((v74 + 29) as &i64);
                        v76 = *(v74 as &i128);
                        v41 = *((v74 + 16) as &i128) as u128;
                        v40 = v76;
                        v43 = v73;
                        v44 = v75;
                        v9 = alloc::vec::Vec<T,A>::push(v4);
                        v2 = alloc::vec::Vec<T,A>::push(&v40);
                    }
                }
                if !v11 {
                    goto LABEL_4bbfd0;
                }
                goto LABEL_4bbc20;
            },
            Ok(_) => {
                v64 = 0;
                v55 = 9223372036854775807;
                if v11 {
LABEL_4bbc20:
                    v77 = core::cmp::max_by(v55);
                    goto LABEL_4bbc28;
                } else {
LABEL_4bbfd0:
                    v45 = uu_fmt::linebreak::restart_active_breaks(v19, v16, *((v3 + v64 * 40 + 24) as &i64), *((v3 + v64 * 40 + 37) as &i8), v64, v6, v20, v18);
                    v10 = alloc::vec::Vec<T,A>::push(v4);
                    v2 = alloc::vec::Vec<T,A>::push(&v45);
LABEL_4bbc28:
                    v5 = v77;
                    v21 = core::intrinsics::typed_swap(&v8 as u64);
                    v52 = 1;
                    v30 = v31;
                }
            },
        }
    }
    uu_fmt::linebreak::build_best_path(v78, v3, v4, v22, v23);
    return;
}
