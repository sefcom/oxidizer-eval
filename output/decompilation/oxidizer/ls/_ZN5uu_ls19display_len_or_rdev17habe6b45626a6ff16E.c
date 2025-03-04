fn uu_ls::display_len_or_rdev(a0: &struct48, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: struct4;  // [bp-0x40]
    let v1: struct4;  // [bp-0x3c]
    let v2: struct24;  // [sp-0x38]
    let v3: struct24;  // [sp-0x20]
    let v6: i64;  // rax
    let v8: i64;  // rax
    let v9: i64;  // rdx

    if (0xb000 & *((a1 + 56) as &i32) | 0x4000) == 0x6000 {
        v0 = struct4 {
            field_0: (v5 >> 32) as u32 & -0x1000 | ((v5 & 4294967295 & 4294967295) >> 8) as u32 & 4095
        };
        v1 = struct4 {
            field_0: (v5 >> 12) as u32 & -0x100 | v5 as u32
        };
        v2 = <T as alloc::string::ToString>::to_string(&v0);
        v3 = <T as alloc::string::ToString>::to_string(&v1);
        return struct48 {
            field_0: v2.field_0
            field_16: v2.field_16
            field_24: v3.field_0
            field_40: v7
        };
    }
    v6 = *((a1 + 80) as &i64);
    if (v6 | a2) >> 32 {
        v8 = (0 CONCAT v6) % a2 as u128 CONCAT (0 CONCAT v6) / a2 as u128;
        v9 = ((0 CONCAT v6) % a2 as u128 CONCAT (0 CONCAT v6) / a2 as u128) >> 64;
    } else {
        v8 = (((0 CONCAT v6 as u32) % (a2 & 4294967295)) as u32 CONCAT ((0 CONCAT v6 as u32) / (a2 & 4294967295)) as u32) & 4294967295;
        v9 = (((0 CONCAT v6 as u32) % (a2 & 4294967295)) as u32 CONCAT ((0 CONCAT v6 as u32) / (a2 & 4294967295)) as u32) >> 32 & 4294967295;
    }
    uu_ls::display_size(a0, v8 - -1 - (v9 < 1), (a3 & 255) as u64);
    *((a0 + 24) as &i64) = 0x8000000000000000;
}
