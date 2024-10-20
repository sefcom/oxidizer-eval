fn uu_od::output_info::OutputInfo::calculate_alignment(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: i64;  // [sp-0xa0]
    let v1: i64;  // [bp-0x98], Other Possible Types: struct40
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [bp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i128;  // [bp-0x78]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // rdx
    let v13: i64;  // rcx
    let v14: i64;  // r12
    let v15: i64;  // rax
    let v16: i64;  // r15
    let v18: i64;  // rsi
    let v19: i64;  // r14
    let v20: i64;  // rsi
    let v21: i64;  // rax
    let v23: i64;  // rdi
    let v24: i64;  // rcx
    let v25: i64;  // rcx
    let v27: i128;  // xmm0
    let v28: i128;  // xmm1
    let v29: i128;  // xmm2
    let v30: i256;  // ymm0

    v12 = a2;
    v13 = a3;
    v14 = a3;
    if a3 >= 9 {
        v0 = v14 * 8;
        v7 = &v0;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v9 = &anon.a94949093028d2d8e47277762c52d369.17.llvm.199664298606218765;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v1 = &anon.a94949093028d2d8e47277762c52d369.20.llvm.199664298606218765;
        v2 = 3;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        v1 = core::panicking::panic_fmt();
    }
    v6 = 0;
    v5 = 0;
    v3 = 0;
    v1 = 0;
    v15 = *((a2 + 24) as &i64)();
    if !v15 {
        core::panicking::panic_const::panic_const_div_by_zero(); /* do not return */
    }
    v16 = v15;
    if v16 > v14 {
        v27 = v1;
        v28 = v3;
        v29 = v5;
        *((a0 + 48) as &i128) = v6;
        *((a0 + 32) as &i128) = v29;
        *((a0 + 16) as &i128) = v28;
        *(a0 as &i128) = v27;
        return Conv(256->64, (((vvar_68{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_154{reg 224})));
    }
    v18 = (v14 & 4294967295 & 4294967295) /m v16 & 65535;
    v19 = a4 - v18 * *((a2 + 32) as &i64)();
    do {
        v20 = v18;
        v21 = (!v19 >> 32 ? (0 CONCAT v19) /m v20 : (0 CONCAT v19) /m v20 & 4294967295);
        v23 = 0;
        do {
            v24 = v20 + (v20 < 1);
            if v23 > 7 {
                core::panicking::panic_bounds_check(); /* do not return */
            }
        } while ((*((&v1 as &u8 + 8 * v23) as &i64) = *((&v1 as &u8 + 8 * v23) as &i64) + v21, v19 -= v21, v23 += v16, v25 = v24 - 1, v24 != 1));
        v16 *= 2;
    } while (v20 >= 2);
}
