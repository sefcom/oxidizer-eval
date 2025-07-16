fn uu_od::output_info::OutputInfo::calculate_alignment(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct64 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xa0]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v9: u64;  // rbp
    let v10: u64;  // r14
    let v11: u64;  // rbp
    let v12: u64;  // r12
    let v13: void*;  // rax
    let v14: &mut [u8];  // r13
    let v16: u128;  // xmm0

    if a3 >= 9 {
        v0 = a3 * 8;
        panic!("{}-bits types are unsupported. Current max={}-bits.", &v0, &g_40e1c8);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v7 = *((a2 + 24) as &i64)(a1) as i64;
    v8 = *((a2 + 32) as &i64)(a1) as u64;
    if v7 <= a3 {
        do {
            v11 = v9;
            v12 = (!v10 >> 32 ? ((0 CONCAT v10) % (v11 & 4294967295) CONCAT (0 CONCAT v10) / (v11 & 4294967295)) & 4294967295 : (0 CONCAT v10) % v11 CONCAT (0 CONCAT v10) / v11);
            v13 = 0;
            do {
                v14 = v7 * v13;
            } while ((v13 = <usize as core::iter::range::Step>::forward_unchecked(v13, a1), (&v1 as u8)[8 * v14] = *(&(&v1 as u8)[8 * v14] as &i64) + v12, v10 -= v12, v13 < v11));
            v7 *= 2;
            v9 = v11 >> 1;
        } while (v11 >= 2);
    }
    v16 = v1;
    return struct64 {
        field_0: v16
        field_16: v2
        field_32: 0
        field_48: 0
    };
}
