fn uu_date::set_system_datetime(a0: &u64) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: &u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v3: u64;  // [sp-0x28]
    let v4: u64;  // [sp-0x20]
    let v5: u64;  // [sp-0x18]
    let v7: u32;  // eax
    let v8: u64;  // rsi
    let v9: u64;  // rdx
    let v10: void*;  // rcx
    let v11: u32;  // ecx
    let v12: u64;  // rdx
    let v13: u64;  // rsi
    let v14: &u64;  // rbx
    let v15: &u64;  // rax
    let v16: u128;  // xmm0

    v7 = *(a0 as &i32);
    v8 = v7 >> 13;
    v9 = v8 - 1 & 4294967295;
    v10 = 0;
    if v8 <= 0 {
        v11 = (1 - v8 & 4294967295) / 400 + 1;
        v9 = v9 + v11 * 400 & 4294967295;
        v10 = v11 * -146097;
    }
    v12 = v9 & 4294967295;
    v13 = v12 * 1374389535;
    v4 = (((((v7 >> 4 & 511) + v10 & 4294967295) - ((v13 >> 37) + (v13 >> 63) & 4294967295) & 4294967295) + (v12 * 1461 >> 2) & 4294967295) + (((v13 >> 37) + (v13 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295) - 719163) * 86400 + *((a0 as &char + 4) as &i32);
    v5 = a0[1];
    if clock_settime(0, &v4, v12 * 1461 >> 2, *((a0 as &char + 4) as &i32), v13 >> 63) {
        v15 = __rust_alloc(15, 1);
        *((v15 as &char + 7) as &i64) = 7310575177798280563;
        *(v15) = 8295758535559373155;
        v0 = 15;
        v1 = v15;
        v2 = 15;
        v3 = std::sys::pal::unix::os::errno() as i32 * 0x100000000 | 2;
        v14 = __rust_alloc(32, 8);
        v16 = *(&v0 as &i128);
        *(&v14[2] as &i128) = *(&v2 as &i128);
        *(v14) = v16;
        return v14;
    }
    return 0;
}
