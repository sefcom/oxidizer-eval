fn uu_ls::display_len_or_rdev(a1: i64, a2: i64, a3: i8) -> : struct48 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x40], Other Possible Types: u32
    let v1: struct24;  // [bp-0x3c], Other Possible Types: struct8
    let v2: u128;  // [bp-0x38]
    let v3: u64;  // [bp-0x28]
    let v4: u128;  // [bp-0x20]
    let v5: i8;  // [bp-0x10]
    let v7: u64;  // rax
    let v9: i64;  // rdi
    let v10: u64;  // rax
    let v11: struct32;  // rdx
    let v12: i64;  // rdi

    if (0xb000 & *((a0 + 56) as &i32) | 0x4000) != 0x6000 {
        uu_ls::display_size(v12, v10 + 1 - (v11 < 1), a2);
        *((v12 + 24) as &i64) = 0x8000000000000000;
        return;
    }
    v7 = *((a0 + 72) as &i64);
    v0 = v7 >> 32 & -0x1000 | (v7 & 4294967295) >> 8 & 4095;
    v1 = v7 >> 12 & -0x100 | v7;
    v0 = <T as alloc::string::ToString>::to_string(v7 >> 32 & -0x1000 | (v7 & 4294967295) >> 8 & 4095);
    v1 = <T as alloc::string::ToString>::to_string(a1);
    *((v9 + 16) as &u64) = v3;
    *(v9 as &u128) = v2;
    *((v9 + 24) as &u128) = v4;
    *((v9 + 40) as &i64) = *(&v5 as &i64);
    return;
}
