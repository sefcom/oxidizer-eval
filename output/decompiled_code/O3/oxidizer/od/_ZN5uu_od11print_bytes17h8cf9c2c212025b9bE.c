fn uu_od::print_bytes(a0: u32, a1: u32, a2: void*, a3: void*, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x170], Other Possible Types: struct16
    let v1: i64;  // [sp-0x168]
    let v2: i64;  // [sp-0x160]
    let v3: i32;  // [sp-0x154]
    let v4: i64;  // [sp-0x150], Other Possible Types: Arguments
    let v5: i64;  // [sp-0x148]
    let v6: i64;  // [sp-0x140]
    let v7: i64;  // [sp-0x138]
    let v8: i64;  // [sp-0x130]
    let v9: i64;  // [sp-0x128]
    let v10: i64;  // [sp-0x120]
    let v11: i8;  // [bp-0x110]
    let v12: i64;  // [sp-0x108]
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i64;  // [sp-0xe8]
    let v17: i8;  // [sp-0xe0]
    let v18: i64;  // [sp-0xd8]
    let v19: i64;  // [sp-0xc8]
    let v20: i64;  // [sp-0xb8]
    let v21: i64;  // [sp-0xb0]
    let v22: i8;  // [sp-0xa8]
    let v23: i64;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98], Other Possible Types: Argument
    let v25: i64;  // [sp-0x90], Other Possible Types: Argument
    let v26: i64;  // [sp-0x88]
    let v27: i64;  // [sp-0x80]
    let v28: i64;  // [sp-0x78]
    let v29: i64;  // [sp-0x70]
    let v30: i8;  // [bp-0x68]
    let v31: i64;  // [sp-0x58]
    let v32: i64;  // [sp-0x50]
    let v33: i192;  // [sp-0x48], Other Possible Types: struct24
    let v35: i64;  // rax
    let v36: i64;  // r13
    let v37: i64;  // r15
    let v38: i64;  // r12
    let v39: i64;  // r14
    let v40: i64;  // rbp
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // rbx
    let v44: i64;  // rax
    let v45: i64;  // rbx
    let v46: i64;  // r14
    let v47: i64;  // rsi
    let v48: i64;  // rsi
    let v49: i64;  // rsi
    let v50: i64;  // rsi
    let v51: i64;  // rax
    let v52: i64;  // rcx
    let v53: i64;  // rbx
    let v54: i64;  // rbx
    let v55: i64;  // rax
    let v57: i64;  // rax

    v35 = *((a3 + 16) as &i64);
    if !v35 {
        return v35;
    }
    v36 = *((a3 + 8) as &i64);
    v32 = v35 * 104 + v36;
    v10 = *(a2 as &i64);
    v37 = *((a2 + 8) as &i64);
    v31 = *((a3 + 32) as &i64);
    v38 = *((a3 + 40) as &i64);
    v3 = a2 | -0x100 | 1;
    v39 = &v11;
    v23 = *((a2 + 16) as &i64) + v37;
    loop {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        if v37 {
            if !v38 {
                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
            }
            v40 = 0;
            do {
                if !(v40 | v38) >> 32 {
                    v41 = (0 CONCAT v40) /m v38 >> 32 & 4294967295;
                    if v41 >= 8 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                } else {
                    v41 = (0 CONCAT v40) /m v38 >> 64;
                    if v41 >= 8 {
                        core::panicking::panic_bounds_check(); /* do not return */
                    }
                }
                v24 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v25 = <&T as core::fmt::Display>::fmt;
                v26 = *((v36 + v41 * 8 + 32) as &i64);
                v27 = 0;
                v11 = 2;
                v13 = 1;
                v14 = 1;
                v15 = 0;
                v16 = 32;
                v17 = 1;
                v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v5 = 1;
                v8 = v39;
                v9 = 1;
                v6 = &v24;
                v7 = 2;
                if core::fmt::write(&v0, &g_5030d8, &v4) as i8 {
                    core::result::unwrap_failed(); /* do not return */
                }
                v42 = *(v36 as &i64);
                v43 = *((v36 + 8) as &i64);
                if v42 == 2 {
                    v44 = v23;
                    if v44 < v40 {
                        core::slice::index::slice_index_order_fail(); /* do not return */
                    }
                    if v44 > *((v10 + 16) as &i64) {
                        core::slice::index::slice_end_index_len_fail(); /* do not return */
                    }
                    v43();
                    v45 = v12;
                    v46 = v13;
                    v50 = v2;
                    if !(v0 - v50 < v46) {
                        continue;
                    }
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v50, v46);
                } else if v42 != 1 {
                    uu_od::inputdecoder::MemoryDecoder::read_uint(a2, v40, *((v36 + 16) as &i64));
                    v43();
                    v45 = v12;
                    v46 = v13;
                    v49 = v2;
                    if !(v0 - v49 < v46) {
                        continue;
                    }
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v49, v46);
                } else {
                    uu_od::inputdecoder::MemoryDecoder::read_float(a2, v40, *((v36 + 16) as &i64));
                    v43();
                    v45 = v12;
                    v46 = v13;
                    v47 = v2;
                    if !(v0 - v47 < v46) {
                        continue;
                    }
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v47, v46);
                }
                v48 = v2;
                memcpy(v48 + v1, v45, v46);
                v2 += v46;
                v39 = &v11;
                v40 += *((v36 + 16) as &i64);
            } while (v40 < v37);
        }
        if *((v36 + 96) as &i8) {
            v51 = (v2 < 32 ? core::str::count::do_count_chars(v1, v2) : core::str::count::char_count_general_case(v1, v2));
            v52 = v10;
            v53 = v31;
            v54 = v53 - v51;
            if v53 < v51 {
                v54 = 0;
            }
            if v37 > *((v52 + 16) as &i64) {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v33 = uu_od::prn_char::format_ascii_dump(*((v52 + 8) as &i64), v37);
            v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v5 = <&T as core::fmt::Display>::fmt;
            v6 = &v33;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v8 = v54;
            v9 = 0;
            v11 = 2;
            v13 = 1;
            v14 = 2;
            v15 = 0;
            v16 = 32;
            v17 = 1;
            v18 = 2;
            v19 = 2;
            v20 = 1;
            v21 = 32;
            v22 = 3;
            v24 = &g_503248;
            v25 = 2;
            v28 = v39;
            v29 = 2;
            v26 = &v4;
            v27 = 3;
            if core::fmt::write(&v0, &g_5030d8, &v24) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
        }
        if (v3 & 1) {
            v4 = &v30;
            v5 = <&T as core::fmt::Display>::fmt;
            v11 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v12 = 1;
            v15 = 0;
            v13 = &v4;
            v14 = 1;
            std::io::stdio::_print(v39);
            v3 = 0;
        } else {
            v55 = (a1 < 32 ? core::str::count::do_count_chars(a0, a1) : core::str::count::char_count_general_case(a0, a1));
            v24 = Argument {
                value: &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654
                formatter: <&T as core::fmt::Display>::fmt
            };
            v25 = Argument {
                value: <&T as core::fmt::Display>::fmt
                formatter: v56
            };
            v27 = 0;
            v11 = 2;
            v13 = 1;
            v14 = 1;
            v15 = 0;
            v16 = 32;
            v17 = 1;
            v4 = Arguments {
                pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                args: [&v24, &v25]
                fmt: 
            };
            std::io::stdio::_print(&v4);
        }
        v4 = &v0;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v11 = &g_503280;
        v12 = 2;
        v15 = 0;
        v13 = &v4;
        v14 = 1;
        v57 = std::io::stdio::_print(v39);
        v36 += 104;
        if v36 == v32 {
            return v35;
        }
    }
}
