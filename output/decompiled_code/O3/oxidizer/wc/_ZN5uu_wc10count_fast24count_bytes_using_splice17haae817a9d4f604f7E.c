fn uu_wc::count_fast::count_bytes_using_splice(a0: u64) -> u64 {
    let v0: u32;  // [sp-0xe0]
    let v1: u32;  // [sp-0xdc]
    let v2: u32;  // [bp-0xd8], Other Possible Types: i32
    let v3: i8;  // [bp-0xd4]
    let v4: u112;  // [bp-0xc8], Other Possible Types: Result<struct8, struct4>, Option<struct4>, struct14
    let v6: u8;  // [sp-0xbf]
    let v7: i8;  // [bp-0x98]
    let v9: u64;  // rdx
    let v10: u64;  // rdi
    let v11: u64;  // rdi
    let v12: u64;  // rsi
    let v13: u64;  // rax
    let v14: void*;  // r14
    let v15: u64;  // r13

    *(&v4.field_0 as &struct14) = struct14 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v6 = 1;
    std::fs::OpenOptions::open(&v2, &v4, "/dev/null");
    if v2 {
        return 1;
    }
    v0 = v3;
    v4 = nix::sys::stat::fstat(v0, v9);
    match v4 {
        Some(_) => {
LABEL_4b8933:
        },
        None => {
            v10 = v7;
            if !(((v10 >> 32) as u32 & -0x1000 | v10 as u32 >> 8 & 4095) == 1) || !(!core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne(((v10 >> 12) as u32 & -0x100 | v10 as u32) as u64) as i64 as i8) || !((v13 = uucore::features::pipes::pipe(v11, v12, v9), v13 as u32 != -1)) {
                goto LABEL_4b8933;
            }
            v1 = v13 as u32;
            v2 = (v13 >> 32) as u32;
            v14 = 0;
            loop {
                v4 = nix::fcntl::splice(a0, 0, &v2, 0, 0x20000, 0);
                if v4 as i32 {
                    break;
                }
                v15 = *((&v4 as &char + 8) as &i64);
                if !v15 {
                    return 0;
                }
                v14 += v15;
                if uucore::features::pipes::splice_exact(&v1, &v0, v15) as i32 != 134 {
                    break;
                }
            }
        },
    }
}
