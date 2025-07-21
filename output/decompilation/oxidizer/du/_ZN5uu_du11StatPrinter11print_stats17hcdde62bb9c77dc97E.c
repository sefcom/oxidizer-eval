fn uu_du::StatPrinter::print_stats(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x1eb]
    let v1: u8;  // [bp-0x1ea]
    let v2: u8;  // [bp-0x1e9]
    let v3: struct16;  // [bp-0x1e8]
    let v4: u64;  // [bp-0x1d0]
    let v5: u64;  // [bp-0x1c8]
    let v6: u64;  // [bp-0x1c0]
    let v7: u64;  // [bp-0x1b8]
    let v8: u64;  // [bp-0x1b0]
    let v9: struct32;  // [bp-0x188]
    let v10: u128;  // [bp-0x168]
    let v11: u128;  // [bp-0x158]
    let v12: u128;  // [bp-0x148]
    let v13: u128;  // [bp-0x138]
    let v14: u64;  // [bp-0x130]
    let v15: u128;  // [bp-0x128]
    let v16: u64;  // [bp-0x120]
    let v17: u64;  // [bp-0x120]
    let v18: u128;  // [bp-0x118]
    let v19: u128;  // [bp-0x108]
    let v20: u128;  // [bp-0xf8]
    let v21: u64;  // [bp-0xe8]
    let v22: u64;  // [bp-0xe0]
    let v23: Result<struct160, struct16>;  // [bp-0xd8], Other Possible Types: struct24
    let v24: u64;  // [bp-0xd8]
    let v25: u64;  // [bp-0xd8]
    let v26: u64;  // [bp-0xd0]
    let v27: u64;  // [bp-0xd0]
    let v28: u64;  // [bp-0xc8]
    let v29: i64;  // [bp-0xc0]
    let v30: u128;  // [bp-0xb8]
    let v31: u128;  // [bp-0xa8]
    let v32: u128;  // [bp-0x98]
    let v33: u128;  // [bp-0x88]
    let v34: u128;  // [bp-0x78]
    let v35: u128;  // [bp-0x68]
    let v36: u128;  // [bp-0x58]
    let v38: &u64;  // r15
    let v39: u128;  // xmm0
    let v40: u256;  // ymm0
    let v41: u256;  // ymm0
    let v42: void*;  // r12
    let v43: i64;  // rbx
    let v44: u64;  // rcx
    let v45: u64;  // rax
    let v46: alloc::string::String;  // rdi
    let v47: i64;  // rdx
    let v48: core::fmt::rt::Argument;  // rsi
    let v50: core::fmt::rt::Argument;  // ymm0
    let v51: u128;  // xmm0
    let v52: u128;  // xmm0
    let v53: u64;  // rbp
    let v54: u64;  // rbx
    let v55: u64;  // rdx
    let v56: &u64;  // r15
    let v57: u64;  // rax
    let v59: u64;  // rdx
    let v60: u128;  // xmm0

    v38 = a1;
    v23 = std::sync::mpmc::Receiver<T>::recv(a1, a2);
    v39 = BinaryOp CmpEQV;
    v41 = (v40 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as i128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
    if UnaryOp GetMSBs != 65535 {
        v2 = *((a0 + 73) as &i8);
        v0 = *((a0 + 74) as &i8);
        v8 = *((a0 + 16) as &i64);
        v7 = *((a0 + 24) as &i64);
        v5 = *(a0 as &i64);
        v4 = *((a0 + 8) as &i64);
        v1 = *((a0 + 75) as &i8);
        v42 = 0;
        v43 = &v23;
        v6 = a1;
        v25 = v24;
        v27 = v26;
        do {
            v44 = v27;
            v45 = v25;
            v46 = v28;
            v47 = v29;
            v48 = v45 ^ 2;
            if !v48 && !v44 {
                v3 = struct16 {
                    field_0: v46
                    field_8: v47
                };
                uucore::mods::error::set_exit_code(*((v47 + 96) as &i64)(v46, v48 | v44, v47) as u32);
                v21 = uucore::util_name();
                v22 = v55;
                eprintln!("{}: {}", &v21, &v3);
                v17 = v16;
                v56 = v38;
            } else {
                v9 = struct32 {
                    field_0: v45
                    field_8: v44
                    field_16: v46
                    field_24: v47
                };
                v50 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&(&v23)[1] as &char + 64) as &i128);
                v20 = *((&(&v23)[1] as &char + 64) as &i128);
                v51 = v36;
                v19 = v51;
                v18 = v35;
                v15 = v34;
                v52 = v30;
                v41 = (((v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
                v13 = v33;
                v12 = v32;
                v11 = v31;
                v10 = v52;
                if v2 {
                    v17 = v16;
                    v14 = v16;
                } else {
                    v17 = v16;
                }
                v53 = v14;
                v54 = v20;
                if !core::option::Option<T>::map_or(v8, v7, v53) as i8 && core::option::Option<T>::map_or(v5, v4, v54) && (!v1 || !v54) {
                    v57 = uu_du::StatPrinter::print_stat(a0, &v9, v53);
                    if v57 {
                        return v57;
                    }
                }
                v43 = &v23;
                v56 = v6;
            }
            v38 = v56;
            v16 = v17;
            std::sync::mpmc::Receiver<T>::recv(v43, v38, v59);
            v60 = BinaryOp CmpEQV;
            v41 = (v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v25 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v25 = v24;
            v27 = v26;
        } while (UnaryOp GetMSBs != 65535);
    }
    if *((a0 + 72) as &i8) {
        v23 = uu_du::StatPrinter::convert_size(a0, v42);
        print!("{}\ttotal", &v23);
        print!("{}", a0 + 77);
    }
    return 0;
}
