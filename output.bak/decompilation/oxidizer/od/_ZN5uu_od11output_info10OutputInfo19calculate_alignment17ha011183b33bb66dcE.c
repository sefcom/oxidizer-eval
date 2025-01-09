fn uu_od::output_info::OutputInfo::calculate_alignment(a0: &struct64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
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
    let v15: u64;  // rbp
    let v16: u64;  // r14
    let v17: u64;  // rbp
    let v18: u64;  // r12
    let v19: void*;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rax

    v6 = a2;
    v7 = a3;
    v8 = a3;
    if a3 >= 9 {
        v0 = v8 * 8;
        panic!("{:?}-bits types are unsupported. Current max={:?}-bits.", &v0, &g_40e1c8);
    }
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v9 = a2[3]();
    if !v9 {
        core::panicking::panic_const::panic_const_div_by_zero("src/uu/od/src/output_info.rs"); /* do not return */
    }
    v10 = v9;
    return struct64 {
        field_0: v14
        field_16: v13
        field_32: v12
        field_48: v4
    };
    v15 = ((v8 & 4294967295 & 4294967295) % (v10 & 65535) CONCAT (v8 & 4294967295 & 4294967295) / (v10 & 65535)) & 65535;
    v16 = a4 - v15 * a2[4]();
    loop {
        v17 = v15;
        v18 = (!v16 >> 32 ? (0 CONCAT v16) % v17 CONCAT (0 CONCAT v16) / v17 : ((0 CONCAT v16) % (v17 & 4294967295) CONCAT (0 CONCAT v16) / (v17 & 4294967295)) & 4294967295 & 4294967295);
        v19 = 0;
        do {
            v20 = v19;
        } while ((v21 = <usize as core::iter::range::Step>::forward_unchecked(v20), *((&v1 as &u8 + 8 * v10 * v20) as &u64) = *((&v1 as &u8 + 8 * v10 * v20) as &i64) + v18, v16 -= v18, v19 = v21, v21 < v17));
        v10 *= 2;
        v15 = v17 >> 1;
    }
}
