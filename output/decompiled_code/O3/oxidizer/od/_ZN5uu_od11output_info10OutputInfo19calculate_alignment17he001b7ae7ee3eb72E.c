fn uu_od::output_info::OutputInfo::calculate_alignment(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [sp-0xa0]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [sp-0x68]
    let v6: &u64;  // rdx
    let v7: u64;  // rcx
    let v8: u64;  // r12
    let v9: u64;  // rax
    let v10: u64;  // r15
    let v12: u64;  // rbp
    let v13: u64;  // r14
    let v14: u64;  // rbp
    let v15: u64;  // r12
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v20: u128;  // xmm0
    let v21: u128;  // xmm1
    let v22: u128;  // xmm2

    v6 = a2;
    v7 = a3;
    v8 = a3;
    if a3 >= 9 {
        v0 = v8 * 8;
        panic!("{:?}-bits types are unsupported. Current max={:?}-bits.", &v0, &g_418538);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v9 = a2[3]();
    if !v9 {
        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
    }
    v10 = v9;
    if v10 > v8 {
        v20 = v1;
        v21 = v2;
        v22 = v3;
        return struct64 {
            field_0: v20
            field_16: v21
            field_32: v22
            field_48: v4
        };
    }
    v12 = (v8 & 4294967295 & 4294967295) /m v10 & 65535;
    v13 = a4 - v12 * a2[4]();
    do {
        v14 = v12;
        v15 = (!v13 >> 32 ? (0 CONCAT v13) /m v14 : (0 CONCAT v13) /m v14 & 4294967295 & 4294967295);
        do {
            v17 = 0;
        } while ((v18 = <usize as core::iter::range::Step>::forward_unchecked(v17), *((&v1 as &u8 + 8 * v10 * v17) as &u64) = *((&v1 as &u8 + 8 * v10 * v17) as &i64) + v15, v13 -= v15, v18 < v14));
        v10 *= 2;
    } while (v14 >= 2);
}
