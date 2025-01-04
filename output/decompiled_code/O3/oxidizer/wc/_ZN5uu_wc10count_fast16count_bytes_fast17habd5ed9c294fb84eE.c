fn uu_wc::count_fast::count_bytes_fast(a0: &u32) -> u64 {
    let v0: u64;  // [sp-0x4038]
    let v1: Option<struct4>;  // [sp-0x4030], Other Possible Types: void*, u32
    let v2: i8;  // [bp-0x4010]
    let v3: i8;  // [bp-0x3ff8]
    let v4: i8;  // [bp-0x3ff0]
    let v5: void*;  // [sp-0x3030]
    let v6: void*;  // [sp-0x2030]
    let v7: void*;  // [sp-0x1030]
    let v9: u64;  // rax
    let v10: u32;  // ebp
    let v11: u32;  // rdx
    let v12: void*;  // r12
    let v13: u64;  // r15
    let v14: void*;  // r12
    let v15: u64;  // r14
    let v17: u64;  // rax
    let v18: u64;  // rcx
    let v19: u64;  // rdx
    let v20: u64;  // r14
    let v21: u64;  // cc_ndep

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    v1 = nix::sys::stat::fstat(v10, v11);
    match v1 {
        Some(_) => {
            v12 = 0;
            goto LABEL_4b8713;
        },
        None => {
            v13 = v2 as u8 as u64;
            v14 = 0;
            if v10 > 0 && v13 as u16 < 0 {
                v15 = v3;
                if v15 > 0 {
                    v17 = sysconf(30) as u64;
                    if !v17 {
                        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
                    }
                    v18 = v17;
                    if !(v17 | v15) >> 32 {
                        v19 = (((0 CONCAT v15 as u32) % (v18 & 4294967295)) as u32 CONCAT ((0 CONCAT v15 as u32) / (v18 & 4294967295)) as u32) >> 32 & 4294967295;
                        if v19 {
                            return v20;
                        }
                    } else {
                        v19 = ((((0 CONCAT v15) % v18 as u128) as u64 CONCAT ((0 CONCAT v15) / v18 as u128) as u64) >> 64) as u64;
                        if v19 {
                            return v20;
                        }
                    }
                    if amd64g_calculate_condition(4, 24, v4 + 1, 0, amd64g_calculate_rflags_c(20, v19, 0, v21)) as char {
                        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
                    }
                    if <std::fs::File as std::io::Seek>::seek(a0, 0) {
                        v14 = 0;
                    }
                }
            }
            if !(v13 as u32 as u16 & 0x1000) || uu_wc::count_fast::count_bytes_using_splice(a0) {
LABEL_4b8713:
                memset(&v1, 0, 0x4000);
                do {
                    v20 += v11;
                    while (<std::fs::File as std::io::Read>::read(a0, &v1, 0x4000)) {
                        if std::io::error::Error::kind(v11) as i8 != 35 {
                            return v20;
                        }
                    }
                } while (v11);
            }
            return v20;
        },
    }
}
