fn uu_wc::count_fast::count_bytes_fast(a0: i64) -> long long {
    let v0: u64;  // [bp-0x4038]
    let v1: void*;  // [bp-0x4030]
    let v2: i8;  // [bp-0x4010]
    let v3: u64;  // [bp-0x3ff8]
    let v4: i8;  // [bp-0x3ff0]
    let v5: void*;  // [bp-0x3030]
    let v6: void*;  // [bp-0x2030]
    let v7: void*;  // [bp-0x1030]
    let v9: u64;  // rax
    let v10: u32;  // edx
    let v12: u64;  // r15
    let v14: u64;  // r14
    let v17: u64;  // rdx
    let v18: u64;  // r14
    let v19: struct32;  // r12
    let v20: u64;  // rdx
    let v21: core::result::Result<u64, std::io::error::Error>;  // rax:rdx
    let v22: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v1 = 0;
    v0 = v9;
    nix::sys::stat::fstat(*(a0 as &i32), v10);
    if v1 as i32 {
LABEL_4b8713:
        memset(&v1, 0, 0x4000);
        do {
            v18 = v20;
            loop {
                v22 = <std::fs::File as std::io::Read>::read(a0, &v1, 0x4000);
                if let Ok(_) = v22 {
                    break;
                }
                if std::io::error::Error::kind(*((&v22 as &char + 8) as &i64)) != 35 {
                    return v18;
                }
            }
        } while (*((&v22 as &char + 8) as &i64));
    } else {
        v12 = *(&v2 as &i32);
        if !(*(a0 as &i32) > 0 && v12 < 0 && (v14 = v3, v14 > 0)) {
LABEL_4b8834:
            if !((v12 & 0x1000)) || (v18 = v20, uu_wc::count_fast::count_bytes_using_splice(a0)) {
                goto LABEL_4b8713;
            }
        } else if (sysconf(30) | v14) >> 32 {
            v18 = v14;
            if !v17 {
                goto LABEL_4b87e7;
            }
        } else {
            v18 = v14;
            if v17 {
                return v18;
            }
LABEL_4b87e7:
            v19 = *(&v4 as &i64) + 1;
            v21 = <std::fs::File as std::io::Seek>::seek(a0, 0, v14 - (!(v14 | v19) >> 32 ? (((0 CONCAT v14) % (v19 & 4294967295)) as u32 CONCAT ((0 CONCAT v14) / (v19 & 4294967295)) as u32) >> 32 : ((v14 >> 63 CONCAT v14) % v19 as i256 CONCAT (v14 >> 63 CONCAT v14) / v19 as i256) >> 64));
            goto LABEL_4b8834;
        }
    }
    return v18;
}
