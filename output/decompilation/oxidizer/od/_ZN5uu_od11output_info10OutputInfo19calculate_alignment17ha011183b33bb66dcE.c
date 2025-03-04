fn uu_od::output_info::OutputInfo::calculate_alignment(a0: &struct64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [sp-0xa0]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [sp-0x68]
    let v6: u64;  // r15
    let v8: u64;  // rbp
    let v9: u64;  // r14
    let v10: u64;  // rbp
    let v11: u64;  // r12
    let v12: void*;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    if a3 >= 9 {
        v0 = a3 * 8;
        panic!("{}-bits types are unsupported. Current max={}-bits.", &v0, &g_40e1c8);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v6 = a2[3]();
    if v6 > a3 {
        return struct64 {
            field_0: v16
            field_16: v17
            field_32: v18
            field_48: v4
        };
    }
    v8 = ((a3 & 4294967295 & 4294967295) % (v6 & 65535) CONCAT (a3 & 4294967295 & 4294967295) / (v6 & 65535)) & 65535;
    v9 = a4 - v8 * a2[4]();
    do {
        v10 = v8;
        v11 = (!v9 >> 32 ? (0 CONCAT v9) % v10 CONCAT (0 CONCAT v9) / v10 : ((0 CONCAT v9) % (v10 & 4294967295) CONCAT (0 CONCAT v9) / (v10 & 4294967295)) & 4294967295 & 4294967295);
        v12 = 0;
        do {
            v13 = v12;
        } while ((v14 = <usize as core::iter::range::Step>::forward_unchecked(v13), *((&v1 as &u8 + 8 * v6 * v13) as &u64) = *((&v1 as &u8 + 8 * v6 * v13) as &i64) + v11, v9 -= v11, v12 = v14, v14 < v10));
        v6 *= 2;
        v8 = v10 >> 1;
    } while (v10 >= 2);
}
