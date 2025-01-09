fn uu_wc::count_fast::count_bytes_using_splice(a0: u32) -> u64 {
    let v0: u32;  // [sp-0xe8]
    let v1: u32;  // [sp-0xe0]
    let v2: u32;  // [sp-0xdc]
    let v3: u32;  // [sp-0xd8], Other Possible Types: Result<struct4, struct8>, i32
    let v4: struct14;  // [bp-0xc8], Other Possible Types: u64, Option<struct4>, Result<struct8, struct4>
    let v5: u112;  // [bp-0xc0]
    let v6: u8;  // [sp-0xbf]
    let v7: i8;  // [bp-0x98]
    let v9: u64;  // rdi
    let v10: u64;  // rax
    let v11: void*;  // r14
    let v12: u64;  // r13

    v4 = struct14 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v6 = 1;
    v3 = std::fs::OpenOptions::open(&v4, "/dev/null") as u64;
    if v3 {
        return 1;
    }
    v1 = *((&v3 as &char + 4) as &i32);
    v4 = nix::sys::stat::fstat(v1) as u32;
    match v4 {
        Some(_) => {
LABEL_4b8363:
        },
        None => {
            v9 = v7;
            if !(((v9 >> 32) as u32 & -0x1000 | v9 as u32 >> 8 & 4095) == 1) || !(!core::cmp::impls::<impl core::cmp::PartialEq for u32>::ne(((v9 >> 12) as u32 & -0x100 | v9 as u32) as u64) as i64 as i8) || !((v10 = uucore::features::pipes::pipe(), v10 as u32 != -1)) {
                goto LABEL_4b8363;
            }
            v2 = v10 as u32;
            v3 = (v10 >> 32) as u32;
            v11 = 0;
            loop {
                v0 = 0;
                v4 = nix::fcntl::splice(a0, 0, &v3, 0, 0x20000) as u64;
                if v4 as i32 {
                    break;
                }
                v12 = v5 as i64;
                if !v12 {
                    return 0;
                }
                v11 += v12;
                if uucore::features::pipes::splice_exact(&v2, &v1, v12) as i32 != 134 {
                    break;
                }
            }
        },
    }
}
