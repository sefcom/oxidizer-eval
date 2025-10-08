fn uu_od::output_info::OutputInfo::calculate_alignment(a0: i64, a1: i64, a2: i64, a3: i64) -> double {
    let v0: u64;  // [bp-0x90]
    let v1: u128;  // [bp-0x88]
    let v2: u128;  // [bp-0x78]
    let v3: u128;  // [bp-0x68]
    let v4: u128;  // [bp-0x58]
    let v6: u64;  // rax
    let v7: u64;  // r15
    let v8: u64;  // rsi
    let v9: u64;  // r14
    let v10: u64;  // rsi
    let v11: i64;  // rax
    let v12: u64;  // rcx
    let v13: void*;  // rdi
    let v14: u64;  // rcx
    let v15: u64;  // rcx
    let v17: iNone;  // xmm0

    if a2 >= 9 {
        v0 = a2 * 8;
        panic!("{}-bits types are unsupported. Current max={}-bits.", &v0, &g_41b3b0);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v6 = <uu_od::parse_formats::ParsedFormatterItemInfo as uu_od::output_info::TypeSizeInfo>::byte_size(a1);
    v7 = v6;
    if v6 <= a2 {
        v8 = ((a2 & 4294967295) % (v7 & 65535) CONCAT (a2 & 4294967295) / (v7 & 65535)) & 65535;
        v9 = a3 - v8 * <uu_od::parse_formats::ParsedFormatterItemInfo as uu_od::output_info::TypeSizeInfo>::print_width(a1);
        do {
            v10 = v8;
            v11 = (!v9 >> 32 ? ((0 CONCAT v9) % (v10 & 4294967295) CONCAT (0 CONCAT v9) / (v10 & 4294967295)) & 4294967295 : (0 CONCAT v9) % v10 CONCAT (0 CONCAT v9) / v10);
            v12 = v10 + (v10 < 1);
            v13 = 0;
            do {
                v14 = v12;
                *((&v1 + 0x8 * v13 as u64) as &unsigned long) = *((&v1 + 0x8 * v13 as u64) as &i64) + v11;
                v9 -= v11;
                v13 += v7;
                v15 = v14 - 1;
                v12 = v15;
            } while (v14 != 1);
            v7 *= 2;
            v8 = v10 >> 1;
        } while (v10 >= 2);
    }
    v17 = v1;
    return struct64 {
        field_0: v17
        field_16: v2
        field_32: 0
        field_48: 0
    };
}
