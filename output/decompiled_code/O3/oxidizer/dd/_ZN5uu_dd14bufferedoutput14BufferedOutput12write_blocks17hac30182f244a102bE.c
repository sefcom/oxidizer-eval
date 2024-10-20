fn uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0: void*, a1: void*, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x90]
    let v1: u128;  // [sp-0x88]
    let v2: u128;  // [sp-0x78]
    let v3: Enum;  // [sp-0x68], Other Possible Types: u256
    let v4: i8;  // [bp-0x48]
    let v6: u64;  // rcx
    let v7: u64;  // rbp
    let v8: u64;  // rdx
    let v9: void*;  // rax
    let v10: u64;  // rbx
    let v11: u64;  // rbp
    let v12: &struct_0;  // rax
    let v13: u64;  // rcx
    let v14: u64;  // r13
    let v15: u64;  // r14
    let v16: void*;  // rdi

    v6 = *((a1[5] + 120) as &i64);
    if !v6 {
        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
    }
    v7 = a1[2];
    v8 = (!(a3 + v7 | v6) >> 32 ? (0 CONCAT a3 + v7) /m v6 >> 64 : (0 CONCAT a3 + v7) /m v6 >> 32 & 4294967295);
    v9 = a3 - v8;
    if v8 > a3 {
        v9 = 0;
    }
    v0 = a1 + 3;
    if *(a1) - v7 < v9 {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v7, v9);
        v7 = a1[2];
    }
    v10 = a1[1];
    memcpy(v10 + v7, a2, v9);
    v11 = v7 + v9;
    a1[2] = v11;
    v3 = uu_dd::Output::write_blocks(v0, v10, v11);
    if v3 as i64 {
        v12 = a0;
        v12->field_8 = *((&v3 as &char + 8) as &i64);
        v13 = 1;
    } else {
        v14 = v9 + a2;
        v2 = v4;
        v1 = *((&v3 as &char + 16) as &i128);
        a1[2] = 0;
        v15 = a3 + a2 - v14;
        if *(a1) >= v15 {
            v16 = 0;
        } else {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, 0, v15);
            v16 = a1[2];
        }
        memcpy(v16 + a1[1], v14, v15);
        a1[2] = a1[2] + v15;
        v12 = a0;
        v12->field_20 = v2;
        v12->field_10 = v1;
        v13 = 0;
    }
    v12->field_0 = v13;
    return v12;
}
