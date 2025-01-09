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
            field_0: (v5 >> 32) as i32 & -0x1000 | ((v5 & 4294967295 & 4294967295) >> 8) as i32 & 4095
        };
        v1 = struct4 {
            field_0: (v5 >> 12) as i32 & -0x100 | v5 as i32
        };
        v2 = <T as alloc::string::ToString>::to_string(&v0);
        v3 = <T as alloc::string::ToString>::to_string(&v1);
        return struct48 {
            field_0: v2
            field_16: *((&v2 as &char + 16) as &i64)
            field_24: v3
            field_40: v7
        };
    }
    if !a2 {
        core::panicking::panic_const::panic_const_div_by_zero("src/uu/ls/src/ls.rs"); /* do not return */
    }
    v6 = *((a1 + 80) as &i64);
    if (v6 | a2) >> 32 {
        v8 = (0 CONCAT v6) % a2 CONCAT (0 CONCAT v6) / a2;
        v9 = ((0 CONCAT v6) % a2 CONCAT (0 CONCAT v6) / a2) >> 64;
    } else {
        v8 = ((0 CONCAT v6) % (a2 & 4294967295) CONCAT (0 CONCAT v6) / (a2 & 4294967295)) & 4294967295;
        v9 = ((0 CONCAT v6) % (a2 & 4294967295) CONCAT (0 CONCAT v6) / (a2 & 4294967295)) >> 32 & 4294967295;
    }
    uu_ls::display_size(a0, v8 - -1 - (v9 < 1), a3);
    *((a0 + 24) as &i64) = 0x8000000000000000;
}
