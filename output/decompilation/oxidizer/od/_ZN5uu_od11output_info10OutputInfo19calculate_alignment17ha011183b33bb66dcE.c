fn uu_od::output_info::OutputInfo::calculate_alignment(a0: &struct64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [sp-0xa0]
    let v1: u128;  // [bp-0x98]
    let v2: u128;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [sp-0x68]
    let v6: &u64;  // rdx
    let v7: u64;  // rcx
    let v8: u64;  // r12
    let v9: u64;  // r15
    let v11: u64;  // rbp
    let v12: u64;  // r14
    let v13: u64;  // rbp
    let v14: u64;  // r12
    let v15: void*;  // rax
    let v16: u64;  // rax
    let v17: u64;  // r14
    let v18: u64;  // rax

    v6 = a2;
    v7 = a3;
    v8 = a3;
    if a3 >= 9 {
        v0 = v8 * 8;
        panic!("{}-bits types are unsupported. Current max={}-bits.", &v0, &g_40e1c8);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v9 = a2[3]();
    if v9 > v8 {
        return struct64 {
            field_0: v20
            field_16: v21
            field_32: v22
            field_48: v4
        };
    }
    v11 = ((v8 & 4294967295 & 4294967295) % (v9 & 65535) CONCAT (v8 & 4294967295 & 4294967295) / (v9 & 65535)) & 65535;
    v12 = a4 - v11 * a2[4]();
    do {
        v13 = v11;
        v14 = (!v12 >> 32 ? (0 CONCAT v12) % v13 CONCAT (0 CONCAT v12) / v13 : ((0 CONCAT v12) % (v13 & 4294967295) CONCAT (0 CONCAT v12) / (v13 & 4294967295)) & 4294967295 & 4294967295);
        v15 = 0;
        do {
            v16 = v15;
        } while ((v18 = <usize as core::iter::range::Step>::forward_unchecked(v16), *((&v1 as &u8 + 8 * v9 * v16) as &u64) = *((&v1 as &u8 + 8 * v9 * v16) as &i64) + v14, v12 = v17 - v14, v15 = v18, v18 < v13));
        v9 *= 2;
        v11 = v13 >> 1;
    } while (v13 >= 2);
}
