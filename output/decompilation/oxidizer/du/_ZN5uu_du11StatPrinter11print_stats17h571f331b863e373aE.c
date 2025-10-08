fn uu_du::StatPrinter::print_stats(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x1e4]
    let v1: u8;  // [bp-0x1e3]
    let v2: u8;  // [bp-0x1e2]
    let v3: u8;  // [bp-0x1e1]
    let v4: struct16;  // [bp-0x1e0]
    let v5: u64;  // [bp-0x1c8]
    let v6: u64;  // [bp-0x1c0]
    let v7: u64;  // [bp-0x1b8]
    let v8: u64;  // [bp-0x1b0]
    let v9: struct32;  // [bp-0x188]
    let v10: iNone;  // [bp-0x168]
    let v11: iNone;  // [bp-0x158]
    let v12: iNone;  // [bp-0x148]
    let v13: u128;  // [bp-0x138]
    let v14: u64;  // [bp-0x130]
    let v15: u128;  // [bp-0x128]
    let v16: u64;  // [bp-0x120]
    let v17: iNone;  // [bp-0x118]
    let v18: iNone;  // [bp-0x108]
    let v19: u128;  // [bp-0xf8]
    let v20: u64;  // [bp-0xe8]
    let v21: u64;  // [bp-0xe0]
    let v22: Result<struct160, struct16>;  // [bp-0xd8], Other Possible Types: struct24
    let v23: u64;  // [bp-0xd8]
    let v24: Result<struct160, struct16>;  // [bp-0xd8], Other Possible Types: u64
    let v25: u64;  // [bp-0xd0]
    let v26: u64;  // [bp-0xd0]
    let v27: u64;  // [bp-0xc8]
    let v28: i64;  // [bp-0xc0]
    let v29: iNone;  // [bp-0xb8]
    let v30: iNone;  // [bp-0xa8]
    let v31: iNone;  // [bp-0x98]
    let v32: u128;  // [bp-0x88]
    let v33: u128;  // [bp-0x78]
    let v34: iNone;  // [bp-0x68]
    let v35: Result<struct160, struct16>;  // [bp-0x58]
    let v37: u64;  // r15
    let v38: u64;  // r12
    let v39: u128;  // xmm0
    let v40: u256;  // ymm0
    let v41: u256;  // ymm0
    let v42: core::fmt::Arguments;  // r13
    let v43: u64;  // rcx
    let v44: u64;  // rax
    let v45: core::fmt::rt::Argument;  // rdi
    let v46: i64;  // rdx
    let v47: core::fmt::rt::Argument;  // rsi
    let v49: u64;  // rdx
    let v50: u64;  // r15
    let v51: u256;  // ymm0
    let v52: iNone;  // xmm0
    let v53: struct32;  // xmm0
    let v54: u32;  // rdx
    let v55: u64;  // rax
    let v56: u64;  // rbx
    let v58: u128;  // xmm0

    v37 = *(a1 as &i64);
    v38 = *((a1 + 8) as &i64);
    v22 = std::sync::mpmc::Receiver<T>::recv(v37, v38);
    v39 = BinaryOp CmpEQV;
    v41 = (v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as i128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
    if UnaryOp GetMSBs != 65535 {
        v3 = *((a0 + 73) as &i8);
        v2 = *((a0 + 74) as &i8);
        v6 = *((a0 + 16) as &i64);
        v7 = *((a0 + 24) as &i64);
        v0 = *(a0 as &i8);
        v5 = *((a0 + 8) as &i64);
        v1 = *((a0 + 75) as &i8);
        v42 = 0;
        v8 = v37;
        v24 = v23;
        v26 = v25;
        do {
            v43 = v26;
            v44 = v24;
            v45 = v27;
            v46 = v28;
            v47 = v44 ^ 2;
            if !v47 && !v43 {
                v4 = struct16 {
                    field_0: v45
                    field_8: v46
                };
                uucore::mods::error::set_exit_code(*((v46 + 88) as &i64)(v45, v47 | v43, v46) as u32);
                v20 = uucore::util_name();
                v21 = v49;
                eprintln!("{}: {}", &v20, &v4);
                v50 = v37;
                continue;
            }
            v9 = struct32 {
                field_0: v44
                field_8: v43
                field_16: v45
                field_24: v46
            };
            v51 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v35 as &char + 16) as &i128);
            v19 = *((&v35 as &char + 16) as &i128);
            v52 = v35;
            v18 = v52;
            v17 = v34;
            v15 = v33;
            v53 = v29;
            v41 = (((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256;
            v13 = v32;
            v12 = v31;
            v11 = v30;
            v10 = v53;
            v54 = (!(v3 & 1) ? (!(v2 & 1) ? v15 as i64 * 0x200 : v14) : v16);
            v55 = v19;
            if v6 == 2 {
                if ((v55 <= v5 ^ 1) & v0) {
                    goto LABEL_497c7d;
                }
            } else {
                if (v55 > v5 & v0) || ((v6 & 1) ? v54 > v7 : v54 < v7) {
                    goto LABEL_497c7d;
                }
            }
            if !v55 || !(v1 & 1) {
                v56 = uu_du::StatPrinter::print_stat(a0, &v9, v54);
                if v56 {
                    return v56;
                }
            }
LABEL_497c7d:
            v50 = v8;
            v37 = v50;
            v35 as u1280 = std::sync::mpmc::Receiver<T>::recv(v37, v38);
            v58 = BinaryOp CmpEQV;
            v41 = (v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as i128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v24 = v23;
            v26 = v25;
        } while (UnaryOp GetMSBs != 65535);
    }
    if *((a0 + 72) as &i8) {
        v22 = uu_du::StatPrinter::convert_size(a0, v42);
        print!("{}\ttotal", &v22);
        print!("{}", a0 + 77);
    }
    return 0;
}
