fn uu_sort::compare_by(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x131]
    let v1: u64;  // [bp-0x130]
    let v2: struct24;  // [bp-0x128]
    let v3: struct32;  // [bp-0x120]
    let v4: u64;  // [bp-0x100]
    let v5: u64;  // [bp-0xf8]
    let v6: struct96;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: struct16;  // [bp-0xe0]
    let v9: u64;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: u64;  // [bp-0xb8]
    let v12: u64;  // [bp-0xb0]
    let v13: i64;  // [bp-0x90]
    let v14: struct16;  // [bp-0x88]
    let v15: u64;  // [bp-0x80]
    let v16: u64;  // [bp-0x78]
    let v17: u64;  // [bp-0x70]
    let v18: u64;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: u64;  // [bp-0x58]
    let v21: u64;  // [bp-0x50]
    let v22: u64;  // [bp-0x48]
    let v23: u64;  // [bp-0x40]
    let v24: u64;  // [bp-0x38]
    let v26: u64;  // rdi
    let v27: u64;  // rax
    let v28: u64;  // rsi
    let v29: struct8;  // rax
    let v31: u8;  // al
    let v32: u64;  // rdx
    let v34: u64;  // rax

    v23 = *((a2 + 8) as &i64);
    v24 = *((a2 + 16) as &i64) * 56 + *((a2 + 8) as &i64);
    v26 = *((a0 + 16) as &i64);
    v27 = *((a1 + 16) as &i64);
    v21 = *((a2 + 88) as &i64) * v27;
    v22 = v26 * *((a2 + 88) as &i64);
    v20 = *((a4 + 8) as &i64);
    v11 = *((a4 + 16) as &i64);
    v28 = *((a2 + 72) as &i64);
    v18 = v26 * *((a2 + 80) as &i64);
    v17 = v27 * *((a2 + 80) as &i64);
    v4 = *((a4 + 64) as &i64);
    v10 = v28 * v26;
    v9 = v27 * v28;
    v16 = *((a4 + 56) as &i64);
    v1 = *((a4 + 40) as &i64);
    v7 = *((a4 + 32) as &i64);
    v19 = *((a3 + 8) as &i64);
    v12 = *((a3 + 16) as &i64);
    v5 = *((a3 + 64) as &i64);
    v15 = *((a3 + 56) as &i64);
    v2 = *((a3 + 40) as &i64);
    v6 = *((a3 + 32) as &i64);
    v0 = *((a2 + 135) as &i8);
    v14 = a2 + 136;
    v3 = 0;
    v8 = 0;
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v27 * v28);
    v31 = 0;
    if *((v13 + 152) as &i8) != 5 && !*((v13 + 131) as &i8) && !*((v13 + 132) as &i8) {
        v34 = memcmp(*(a0 as &i64), *(a1 as &i64), v32);
    }
    return (!*((v13 + 130) as &i8) ? v31 : -(v31));
}
