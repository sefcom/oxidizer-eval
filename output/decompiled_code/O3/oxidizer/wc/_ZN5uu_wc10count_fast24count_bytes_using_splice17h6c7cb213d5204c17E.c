fn uu_wc::count_fast::count_bytes_using_splice(a0: u64) -> u64 {
    let v0: u32;  // [sp-0xe0]
    let v1: u32;  // [sp-0xdc]
    let v2: u32;  // [sp-0xd8], Other Possible Types: i32, Result<struct4, struct8>
    let v3: u64;  // [bp-0xc8], Other Possible Types: struct14, Result<struct8, struct4>, Option<struct4>
    let v4: u112;  // [bp-0xc0]
    let v5: u8;  // [sp-0xbf]
    let v6: i8;  // [bp-0x98]
    let v8: u64;  // rdx
    let v9: u64;  // rdi
    let v10: u64;  // rdi
    let v11: u64;  // rsi
    let v12: u64;  // rax
    let v13: void*;  // r14
    let v14: u64;  // r13

    *(&v3.field_0 as &struct14) = struct14 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v5 = 1;
    v2 = std::fs::OpenOptions::open(&v3, "/dev/null");
    if v2 {
        return 1;
    }
    v0 = *((&v2 as &char + 4) as &i32);
    v3 = nix::sys::stat::fstat(v0, v8);
    match v3 {
        Some(_) => {
LABEL_4b8753:
        },
        None => {
            v9 = v6;
            if !(((v9 >> 32) as u32 & -0x1000 | v9 as u32 >> 8 & 4095) == 1) || !(!core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne(((v9 >> 12) as u32 & -0x100 | v9 as u32) as u64) as i64 as i8) || !((v12 = uucore::features::pipes::pipe(v10, v11, v8), v12 as u32 != -1)) {
                goto LABEL_4b8753;
            }
            v1 = v12 as u32;
            v2 = (v12 >> 32) as u32;
            v13 = 0;
            loop {
                v3 = nix::fcntl::splice(a0, 0, &v2, 0, 0x20000, 0);
                if v3 as i32 {
                    break;
                }
                v14 = v4 as i64;
                if !v14 {
                    return 0;
                }
                v13 += v14;
                if uucore::features::pipes::splice_exact(&v1, &v0, v14) as i32 != 134 {
                    break;
                }
            }
        },
    }
}
