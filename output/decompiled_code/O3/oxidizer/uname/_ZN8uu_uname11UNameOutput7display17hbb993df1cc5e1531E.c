fn uu_uname::UNameOutput::display(a0: u64, a1: u64) -> int {
    let v0: struct16;  // [sp-0xc0], Other Possible Types: void*, u64
    let v1: &u8;  // [sp-0xb8]
    let v2: &u8;  // [sp-0xb0], Other Possible Types: void*
    let v3: &u64;  // [sp-0xa0]
    let v4: u64;  // [sp-0x98]
    let v5: u64;  // [sp-0x90]
    let v6: u64;  // [sp-0x88]
    let v7: u64;  // [sp-0x80]
    let v8: u64;  // [sp-0x78]
    let v9: u64;  // [sp-0x70]
    let v10: u64;  // [sp-0x68]
    let v12: void*;  // rax
    let v14: &u64;  // rcx
    let v15: &u64;  // rcx
    let v16: void*;  // rdi
    let v17: void*;  // r8
    let v18: void*;  // r9
    let v19: void*;  // r10
    let v20: void*;  // r11
    let v21: void*;  // r14
    let v22: void*;  // r15
    let v23: &&struct_1;  // rbp
    let v24: &u64;  // rcx
    let v26: u64;  // r15
    let v27: u64;  // rax
    let v28: u128;  // xmm0
    let v29: u256;  // ymm0

    v12 = 0;
    if *(a1) == 0x8000000000000000 {
        v14 = 0;
    } else {
        v14 = a1;
    }
    v15 = v14;
    v16 = a1 + 3;
    if a1[3] == 0x8000000000000000 {
        v16 = 0;
    }
    v0 = 0;
    v17 = a1 + 6;
    if a1[6] == 0x8000000000000000 {
        v17 = 0;
    }
    v18 = a1 + 9;
    if a1[9] == 0x8000000000000000 {
        v18 = 0;
    }
    v19 = a1 + 12;
    if a1[12] == 0x8000000000000000 {
        v19 = 0;
    }
    v1 = 1;
    v20 = a1 + 15;
    if a1[15] == 0x8000000000000000 {
        v20 = 0;
    }
    v21 = a1 + 18;
    if a1[18] == 0x8000000000000000 {
        v21 = 0;
    }
    v22 = a1 + 21;
    if a1[21] == 0x8000000000000000 {
        v22 = 0;
    }
    v2 = 0;
    v3 = v15;
    v4 = v16;
    v5 = v17;
    v6 = v18;
    v7 = v19;
    v8 = v20;
    v9 = v21;
    v10 = v22;
    v23 = 0;
    loop {
        do {
            v2 = v2;
            if v23 == 8 {
                a0->field_10 = v2;
                v28 = *(&v0 as &i128);
                a0->field_0 = v28;
                return Conv(256->64, ((vvar_195{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_194{reg 224})));
            }
        } while ((v24 = *((&v3 as &u8 + 0x8 * v23 as u64) as &i64), v23 += 1, !v24));
        v26 = v24[2];
        v27 = v12;
        if v0 - v12 < v26 {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v12, v26);
            v27 = v2;
        }
        memcpy(&v1[v27], v24[1], v26);
        v2 = v26 + v2;
        if v2 == v0 {
            v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
        }
        *((v1 + v2) as &i8) = 32;
        v12 = v2 + 1;
        v2 = v12;
    }
}
