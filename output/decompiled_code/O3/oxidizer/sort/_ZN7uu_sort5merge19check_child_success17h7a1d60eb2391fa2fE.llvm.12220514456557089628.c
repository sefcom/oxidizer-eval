fn uu_sort::merge::check_child_success(a0: &u32, a1: u64) -> u64 {
    let v0: u8;  // [sp-0x78], Other Possible Types: Enum
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: i8;  // [bp-0x58]
    let v5: i8;  // [bp-0x48]
    let v6: u32;  // [sp-0x38]
    let v7: u64;  // [sp-0x30]
    let v9: u64;  // rax
    let v10: &u64;  // r14
    let v11: u64;  // rdx
    let v13: u64;  // r12
    let v15: u128;  // xmm0
    let v16: u128;  // xmm1
    let v17: u128;  // xmm2

    v0 = std::process::Child::wait(a0);
    if v0 as i32 {
        v7 = v1;
        v6 = 1;
    } else {
        v9 = *((&v0 as &char + 4) as &i32);
        if !(v9 & 127) && (v9 & 0xff00) {
            memcpy(v2, a1, v11);
            v1 = v11;
            v2 = v13;
            v3 = v11;
            v0 = 6;
            v10 = __rust_alloc(64, 8);
            v15 = *(&v0 as &i128);
            v16 = *(&v2 as &i128);
            v17 = v4;
            *(&v10[6] as &i8) = v5;
            v10[4] = v17;
            v10[2] = v16;
            *(v10) = v15;
            return v10;
        }
    }
    return 0;
}
