fn uu_du::StatPrinter::print_stats(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [sp-0x1eb]
    let v1: i8;  // [sp-0x1ea]
    let v2: i8;  // [sp-0x1e9]
    let v3: i64;  // [sp-0x1e8]
    let v4: i64;  // [sp-0x1e0]
    let v5: i64;  // [sp-0x1d0]
    let v6: i64;  // [sp-0x1c8]
    let v7: i64;  // [sp-0x1c0]
    let v8: i64;  // [sp-0x1b8]
    let v9: i64;  // [sp-0x1b0]
    let v10: i64;  // [sp-0x188]
    let v11: i64;  // [sp-0x180]
    let v12: i64;  // [sp-0x178]
    let v13: i64;  // [sp-0x170]
    let v14: iNone;  // [bp-0x168]
    let v15: iNone;  // [sp-0x158]
    let v16: iNone;  // [sp-0x148]
    let v17: iNone;  // [sp-0x138]
    let v18: iNone;  // [sp-0x128]
    let v19: iNone;  // [sp-0x118]
    let v20: iNone;  // [sp-0x108]
    let v21: iNone;  // [sp-0xf8]
    let v22: i64;  // [sp-0xe8]
    let v23: i64;  // [sp-0xe0]
    let v24: i64;  // [sp-0xd8], Other Possible Types: struct24, Result<struct160, struct8>
    let v25: i64;  // [sp-0xd0]
    let v27: i64;  // r15
    let v28: iNone;  // xmm0
    let v29: iNone;  // xmm0
    let v30: iNone;  // ymm0
    let v31: iNone;  // ymm0
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // rbx
    let v36: iNone;  // ymm1
    let v37: iNone;  // ymm2
    let v38: iNone;  // ymm3
    let v39: iNone;  // xmm0
    let v40: iNone;  // xmm0
    let v41: iNone;  // xmm0
    let v42: iNone;  // xmm0
    let v43: iNone;  // xmm0
    let v44: iNone;  // xmm1
    let v45: iNone;  // xmm2
    let v46: iNone;  // xmm3
    let v47: i64;  // rbp
    let v48: i64;  // rdx
    let v49: i64;  // rbx
    let v50: i64;  // r12
    let v51: i64;  // rax
    let v52: i64;  // r12
    let v53: i64;  // rdx
    let v54: iNone;  // xmm0
    let v55: iNone;  // xmm0

    v27 = a1;
    v24 = std::sync::mpmc::Receiver<T>::recv(a1, a2);
    v28 = v24 as i128;
    v29 = BinaryOp CmpEQV;
    v31 = (v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
    if UnaryOp GetMSBs == 65535 {
        v32 = 0;
    } else {
        v33 = v24;
        v34 = v25;
        v2 = *((a0 + 73) as &i8);
        v0 = *((a0 + 74) as &i8);
        v9 = *((a0 + 16) as &i64);
        v8 = *((a0 + 24) as &i64);
        v6 = *(a0 as &i64);
        v5 = *((a0 + 8) as &i64);
        v1 = *((a0 + 75) as &i8);
        v32 = 0;
        v35 = &v24;
        v7 = a1;
        do {
            if !(v33 ^ 2) && !v34 {
                v3 = v12;
                v4 = v13;
                uucore::mods::error::set_exit_code(*((v4 + 96) as &i64)());
                v22 = uucore::util_name();
                v23 = v48;
                eprintln!("{}: {}", &v22, &v3);
                v50 = v32;
            } else {
                v10 = v33;
                v11 = v34;
                v12 = v3;
                v13 = v4;
                v39 = *((&v24 as &char + 144) as &i128);
                v21 = v39;
                v40 = *((&v24 as &char + 128) as &i128);
                v20 = v40;
                v41 = *((&v24 as &char + 112) as &i128);
                v19 = v41;
                v42 = *((&v24 as &char + 96) as &i128);
                v18 = v42;
                v43 = *((&v24 as &char + 32) as &i128);
                v31 = ((((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256;
                v44 = *((&v24 as &char + 48) as &i128);
                v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                v45 = *((&v24 as &char + 64) as &i128);
                v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256;
                v46 = *((&v24 as &char + 80) as &i128);
                v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u256;
                v17 = v46;
                v16 = v45;
                v15 = v44;
                v14 = v43;
                if v2 {
                    v47 = (&v18)[8] as i64;
                } else if v0 {
                    v47 = (&v17)[8] as i64;
                } else {
                    v47 = v18 as i64 * 0x200;
                }
                v49 = v21 as i64;
                if !core::option::Option<T>::map_or(v9, v8, v47) as i8 && core::option::Option<T>::map_or(v6, v5, v49) && (!(!!v1) || !(!!v49)) {
                    v51 = uu_du::StatPrinter::print_stat(a0, &v10, v47);
                    if v51 {
                        return v51;
                    }
                }
                v27 = v7;
                v35 = &v24;
                v50 = v52;
            }
        } while ((v32 = v50, std::sync::mpmc::Receiver<T>::recv(v35, v27, v53), v33 = v24, v34 = v25, v54 = v24 as i128, v55 = BinaryOp CmpEQV, v31 = (v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256, UnaryOp GetMSBs != 65535));
    }
    if *((a0 + 72) as &i8) {
        v24 = uu_du::StatPrinter::convert_size(a0, v32);
        print!("{}	total", &v24);
        print!("{}", a0 + 77);
    }
    return 0;
}
