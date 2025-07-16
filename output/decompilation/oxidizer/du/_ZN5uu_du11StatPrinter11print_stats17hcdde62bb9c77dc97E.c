fn uu_du::StatPrinter::print_stats(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x1eb]
    let v1: u8;  // [bp-0x1ea]
    let v2: u8;  // [bp-0x1e9]
    let v3: alloc::string::String;  // [bp-0x1e8]
    let v4: i64;  // [bp-0x1e0]
    let v5: u64;  // [bp-0x1d0]
    let v6: u64;  // [bp-0x1c8]
    let v7: u64;  // [bp-0x1c0]
    let v8: u64;  // [bp-0x1b8]
    let v9: u64;  // [bp-0x1b0]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: alloc::string::String;  // [bp-0x178]
    let v13: i64;  // [bp-0x170]
    let v14: u128;  // [bp-0x168]
    let v15: u128;  // [bp-0x158]
    let v16: u128;  // [bp-0x148]
    let v17: u128;  // [bp-0x138]
    let v18: u64;  // [bp-0x130]
    let v19: u128;  // [bp-0x128]
    let v20: u128;  // [bp-0x108]
    let v21: u128;  // [bp-0xf8]
    let v22: u64;  // [bp-0xe8]
    let v23: u64;  // [bp-0xe0]
    let v24: Result<struct160, struct16>;  // [bp-0xd8], Other Possible Types: struct24
    let v25: u64;  // [bp-0xd8]
    let v26: u64;  // [bp-0xd8]
    let v27: u64;  // [bp-0xd0]
    let v28: u64;  // [bp-0xd0]
    let v29: u64;  // [bp-0xc8]
    let v30: i64;  // [bp-0xc0]
    let v31: u128;  // [bp-0xb8]
    let v32: u128;  // [bp-0xa8]
    let v33: u128;  // [bp-0x98]
    let v34: u128;  // [bp-0x88]
    let v35: u128;  // [bp-0x78]
    let v36: u128;  // [bp-0x68]
    let v37: u128;  // [bp-0x58]
    let v39: &u64;  // r15
    let v40: u128;  // xmm0
    let v41: u256;  // ymm0
    let v42: u256;  // ymm0
    let v43: void*;  // r12
    let v44: i64;  // rbx
    let v45: u64;  // rcx
    let v46: u64;  // rax
    let v47: alloc::string::String;  // rdi
    let v48: i64;  // rdx
    let v49: u64;  // rsi
    let v51: u256;  // ymm0
    let v52: u128;  // xmm0
    let v53: u128;  // xmm0
    let v55: u64;  // rbp
    let v56: u64;  // rbx
    let v57: u64;  // rdx
    let v58: &u64;  // r15
    let v59: u64;  // rax
    let v61: u64;  // rdx
    let v62: u128;  // xmm0
    let v66: u192;  // [bp-0x120]

    v39 = a1;
    v24 = std::sync::mpmc::Receiver<T>::recv(a1, a2);
    v40 = BinaryOp CmpEQV;
    v42 = (v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as i128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
    if UnaryOp GetMSBs != 65535 {
        v2 = *((a0 + 73) as &i8);
        v0 = *((a0 + 74) as &i8);
        v9 = *((a0 + 16) as &i64);
        v8 = *((a0 + 24) as &i64);
        v6 = *(a0 as &i64);
        v5 = *((a0 + 8) as &i64);
        v1 = *((a0 + 75) as &i8);
        v43 = 0;
        v44 = &v24;
        v7 = a1;
        v26 = v25;
        v28 = v27;
        do {
            v45 = v28;
            v46 = v26;
            v47 = v29;
            v48 = v30;
            v49 = v46 ^ 2;
            if !v49 && !v45 {
                v3 = v47;
                v4 = v48;
                uucore::mods::error::set_exit_code(*((v48 + 96) as &i64)(v47, v49 | v45, v48) as u32);
                v22 = uucore::util_name();
                v23 = v57;
                eprintln!("{}: {}", &v22, &v3);
                v58 = v39;
            } else {
                v10 = v46;
                v11 = v45;
                v12 = v47;
                v13 = v48;
                v51 = v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v37)[1];
                memcpy(&v21, &v37, 16);
                v52 = v37;
                v20 = v52;
                memcpy(&v66, &v36, 16);
                v19 = v35;
                v53 = v31;
                v42 = (((v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
                v17 = v34;
                v16 = v33;
                v15 = v32;
                v14 = v53;
                if v2 {
                    v18 = *((&v19 as &char + 8) as &i64);
                }
                v55 = v18;
                v56 = v21;
                if !core::option::Option<T>::map_or(v9, v8, v55) as i8 && core::option::Option<T>::map_or(v6, v5, v56) && (!v1 || !v56) {
                    v59 = uu_du::StatPrinter::print_stat(a0, &v10, v55);
                    if v59 {
                        return v59;
                    }
                }
                v44 = &v24;
                v58 = v7;
            }
            v39 = v58;
            std::sync::mpmc::Receiver<T>::recv(v44, v39, v61);
            v62 = BinaryOp CmpEQV;
            v42 = (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v26 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v26 = v25;
            v28 = v27;
        } while (UnaryOp GetMSBs != 65535);
    }
    if *((a0 + 72) as &i8) {
        v24 = uu_du::StatPrinter::convert_size(a0, v43);
        print!("{}\ttotal", &v24);
        print!("{}", a0 + 77);
    }
    return 0;
}
