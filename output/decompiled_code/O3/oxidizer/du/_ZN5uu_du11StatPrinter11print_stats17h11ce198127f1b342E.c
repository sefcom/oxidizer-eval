fn uu_du::StatPrinter::print_stats(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [sp-0x1eb]
    let v1: i8;  // [sp-0x1ea]
    let v2: i8;  // [sp-0x1e9]
    let v3: i64;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1e0]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i64;  // [sp-0x1b8]
    let v8: i64;  // [sp-0x1b0]
    let v9: i64;  // [sp-0x188]
    let v10: i64;  // [sp-0x180]
    let v11: i64;  // [sp-0x178]
    let v12: i64;  // [sp-0x170]
    let v13: i128;  // [bp-0x168]
    let v14: i128;  // [sp-0x158]
    let v15: i128;  // [sp-0x148]
    let v16: i128;  // [sp-0x138]
    let v17: i128;  // [sp-0x128]
    let v18: i128;  // [sp-0x118]
    let v19: i128;  // [sp-0x108]
    let v20: i128;  // [sp-0xf8]
    let v21: i64;  // [sp-0xe8]
    let v22: i64;  // [sp-0xe0]
    let v23: i64;  // [sp-0xd8], Other Possible Types: struct24, Result<struct160, struct16>
    let v24: i64;  // [sp-0xd0]
    let v26: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i64;  // r12
    let v31: i64;  // rbx
    let v36: i64;  // rcx
    let v38: i64;  // r13
    let v39: i256;  // ymm1
    let v40: i256;  // ymm2
    let v41: i256;  // ymm3
    let v42: i64;  // rdi
    let v43: i64;  // rdx
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: i128;  // xmm3
    let v52: i64;  // rbp
    let v53: i64;  // r14
    let v54: i64;  // rbx
    let v55: i64;  // rbp
    let v57: i64;  // rdx
    let v59: i64;  // r15
    let v60: i8;  // r12b
    let v61: i8;  // r13b
    let v62: i64;  // r8
    let v63: i64;  // r9
    let v64: i64;  // rax
    let v65: i64;  // r15
    let v66: i64;  // rdx
    let v67: i128;  // xmm0

    v23 = std::sync::mpmc::Receiver<T>::recv(a1, a2);
    v26 = v23;
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp CmpEQV;
    if UnaryOp GetMSBs == 65535 {
        v30 = 0;
    } else {
        v2 = *((a0 + 73) as &i8);
        v0 = *((a0 + 74) as &i8);
        v8 = *((a0 + 16) as &i64);
        v7 = *((a0 + 24) as &i64);
        v6 = *(a0 as &i64);
        v5 = *((a0 + 8) as &i64);
        v1 = *((a0 + 75) as &i8);
        v30 = 0;
        v31 = &v23;
        do {
            v42 = *((&v23 as &char + 16) as &i64);
            v43 = *((&v23 as &char + 24) as &i64);
            if !(v9 ^ 2) && !v10 {
                v3 = v11;
                v4 = v12;
                *((v4 + 96) as &i64)();
                uucore::mods::error::set_exit_code();
                v21 = uucore::util_name();
                v22 = v57;
                eprintln!("{:?}: {:?}", &v21, &v3);
            } else {
                v9 = v23;
                v10 = v24;
                v11 = v3;
                v12 = v4;
                v44 = *((&v23 as &char + 144) as &i128);
                v20 = v44;
                v45 = *((&v23 as &char + 128) as &i128);
                v19 = v45;
                v46 = *((&v23 as &char + 112) as &i128);
                v18 = v46;
                v47 = *((&v23 as &char + 96) as &i128);
                v17 = v47;
                v48 = *((&v23 as &char + 32) as &i128);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v49 = *((&v23 as &char + 48) as &i128);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v50 = *((&v23 as &char + 64) as &i128);
                v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                v51 = *((&v23 as &char + 80) as &i128);
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
                v16 = v51;
                v15 = v50;
                v14 = v49;
                v13 = v48;
                v52 = (!v2 ? (!v0 ? v17 * 0x200 : *((&v16 as &char + 8) as &i64)) : *((&v17 as &char + 8) as &i64));
                v54 = v20;
                if !core::option::Option<T>::map_or(v8, v7, v52) as i8 {
                    v60 = !v54;
                    v61 = !v1;
                    v38 = v38 | -0x100 | v61;
                    if core::option::Option<T>::map_or(v6, v5, v54) {
                        v38 = v38 | -0x100 | v61 | v60;
                        if !(!v61) || !(!v60) {
                            v64 = uu_du::StatPrinter::print_stat(a0, &v9, v52, v36, v62, v63);
                            if v64 {
                                return v64;
                            }
                        }
                    }
                }
                v30 = v53 + v55;
                v31 = &v23;
            }
        } while ((v65 = v59, std::sync::mpmc::Receiver<T>::recv(v31, v65, v66), v67 = v23, v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp CmpEQV) as u8 as u256, v24 = v24, v23 = v23, UnaryOp GetMSBs != 65535));
    }
    if *((a0 + 72) as &i8) {
        v23 = uu_du::StatPrinter::convert_size(a0, v30);
        print!("{:?}\ttotal", &v23);
        print!("{:?}", a0 + 77);
    }
    return 0;
}
