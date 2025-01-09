fn uu_wc::count_fast::count_bytes_fast(a0: &u32) -> u64 {
    let v0: u64;  // [sp-0x4038]
    let v1: u32;  // [sp-0x4030], Other Possible Types: void*, Option<struct4>
    let v2: i8;  // [bp-0x4010]
    let v3: i8;  // [bp-0x3ff8]
    let v4: i8;  // [bp-0x3ff0]
    let v5: void*;  // [sp-0x3030]
    let v6: void*;  // [sp-0x2030]
    let v7: void*;  // [sp-0x1030]
    let v9: u64;  // rax
    let v10: u32;  // ebp
    let v11: void*;  // r12
    let v12: u64;  // r15
    let v13: void*;  // r12
    let v14: u64;  // r14
    let v15: u64;  // r12
    let v16: u64;  // rax
    let v17: u64;  // rcx
    let v18: u64;  // rdx
    let v19: u64;  // r14
    let v20: u64;  // cc_ndep
    let v22: u32;  // rdx

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    v1 = nix::sys::stat::fstat(v10) as u32;
    match v1 {
        Some(_) => {
            v11 = 0;
            goto LABEL_4b8713;
        },
        None => {
            v12 = v2 as u8 as u64;
            v13 = 0;
            if v10 > 0 && v12 as u16 < 0 {
                v14 = v3;
                if v14 > 0 {
                    v15 = v4;
                    v16 = sysconf(30) as u64;
                    if !v16 {
                        core::panicking::panic_const::panic_const_rem_by_zero("src/uu/wc/src/count_fast.rs"); /* do not return */
                    }
                    v17 = v16;
                    if !(v16 | v14) >> 32 {
                        v18 = (((0 CONCAT v14 as u32) % (v17 & 4294967295)) as u32 CONCAT ((0 CONCAT v14 as u32) / (v17 & 4294967295)) as u32) >> 32 & 4294967295;
                        if v18 {
                            return v19;
                        }
                    } else {
                        v18 = ((((0 CONCAT v14) % v17 as u128) as u64 CONCAT ((0 CONCAT v14) / v17 as u128) as u64) >> 64) as u64;
                        if v18 {
                            return v19;
                        }
                    }
                    if amd64g_calculate_condition(4, 24, v15 + 1, 0, amd64g_calculate_rflags_c(20, v18, 0, v20)) as char {
                        core::panicking::panic_const::panic_const_rem_by_zero("src/uu/wc/src/count_fast.rs"); /* do not return */
                    }
                    if <std::fs::File as std::io::Seek>::seek(a0, 0, v14 - (!(v14 | v15 + 1) >> 32 ? (((0 CONCAT v14 as u32) % (v15 + 1 & 4294967295)) as u32 CONCAT ((0 CONCAT v14 as u32) / (v15 + 1 & 4294967295)) as u32) >> 32 & 4294967295 : ((((v14 >> 63 CONCAT v14) % (v15 + 1) as i64 as i128) as i64 CONCAT ((v14 >> 63 CONCAT v14) / (v15 + 1) as i64 as i128) as i64) >> 64) as i64)) {
                        v13 = 0;
                    }
                }
            }
            if !(v12 as u32 as u16 & 0x1000) || uu_wc::count_fast::count_bytes_using_splice(a0) {
LABEL_4b8713:
                memset(&v1, 0, 0x4000);
                do {
                    v19 += v22;
                    while (<std::fs::File as std::io::Read>::read(a0, &v1, 0x4000)) {
                        if std::io::error::Error::kind(v22) as i8 != 35 {
                            return v19;
                        }
                    }
                } while (v22);
            }
            return v19;
        },
    }
}
