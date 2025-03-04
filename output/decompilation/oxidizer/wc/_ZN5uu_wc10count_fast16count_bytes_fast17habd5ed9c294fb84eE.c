fn uu_wc::count_fast::count_bytes_fast(a0: &u32) -> u64 {
    let v0: u64;  // [sp-0x4038]
    let v1: Option<struct4>;  // [sp-0x4030], Other Possible Types: void*
    let v2: i8;  // [bp-0x4010]
    let v3: i8;  // [bp-0x3ff8]
    let v4: i8;  // [bp-0x3ff0]
    let v5: void*;  // [sp-0x3030]
    let v6: void*;  // [sp-0x2030]
    let v7: void*;  // [sp-0x1030]
    let v9: u64;  // rax
    let v10: u32;  // ebp
    let v11: u64;  // r15
    let v12: u64;  // r14
    let v14: u64;  // rax
    let v15: u64;  // rcx
    let v16: u64;  // rdx
    let v17: u32;  // rdx
    let v18: u64;  // r12, Other Possible Types: void*

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    v10 = *(a0);
    v1 = nix::sys::stat::fstat(v10);
    match v1 {
        Some(_) => {
            v18 = 0;
            goto LABEL_4b8713;
        },
        None => {
            v11 = *(&v2 as &i32) as u32 as u64;
            v18 = 0;
            if v10 > 0 && v11 as u16 < 0 {
                v12 = *(&v3 as &i64);
                if v12 > 0 {
                    v14 = sysconf(30) as u64;
                    v15 = v14;
                    if !(v14 | v12) >> 32 {
                        if ((((0 CONCAT v12 as u32) % (v15 & 4294967295)) as u32 CONCAT ((0 CONCAT v12 as u32) / (v15 & 4294967295)) as u32) >> 32) as i32 {
                            return v12;
                        }
                    } else {
                        if ((((0 CONCAT v12) % v15 as u128) as u64 CONCAT ((0 CONCAT v12) / v15 as u128) as u64) >> 64) as u64 {
                            return v12;
                        }
                    }
                    v16 = (!(v12 | *(&v4 as &i64) + 1) >> 32 ? (((0 CONCAT v12 as u32) % (*(&v4 as &i64) + 1 & 4294967295)) as i32 CONCAT ((0 CONCAT v12 as u32) / (*(&v4 as &i64) + 1 & 4294967295)) as i32) >> 32 & 4294967295 : ((((v12 >> 63 CONCAT v12) % (*(&v4 as &i64) + 1) as i128) as i64 CONCAT ((v12 >> 63 CONCAT v12) / (*(&v4 as &i64) + 1) as i128) as i64) >> 64) as i64);
                    v18 = (!<std::fs::File as std::io::Seek>::seek(a0, 0, v12 - v16) ? v17 : 0);
                }
            }
            if !(v11 as u32 as u16 & 0x1000) || (v18 = v17, v12 = v17, uu_wc::count_fast::count_bytes_using_splice(a0)) {
LABEL_4b8713:
                memset(&v1, 0, 0x4000);
                do {
                    v12 = v18;
                    while (<std::fs::File as std::io::Read>::read(a0, &v1, 0x4000)) {
                        if std::io::error::Error::kind(v17) as i8 != 35 {
                            return v12;
                        }
                    }
                    v18 = v12 + v17;
                } while (v17);
            }
            return v12;
        },
    }
}
