fn uu_join::State::extend(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: i64;  // [bp-0x100]
    let v1: u32;  // [bp-0xf4]
    let v2: u64;  // [bp-0xf0]
    let v3: i8;  // [bp-0xe8]
    let v4: u128;  // [bp-0xe8]
    let v5: struct8;  // [bp-0xe8]
    let v6: u128;  // [bp-0xe8]
    let v7: u64;  // [bp-0xe0]
    let v8: u128;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: u128;  // [bp-0xc8]
    let v11: u128;  // [bp-0xc8]
    let v12: u128;  // [bp-0xb8]
    let v13: u64;  // [bp-0xa8]
    let v14: u64;  // [bp-0x98]
    let v15: u64;  // [bp-0x90]
    let v16: u128;  // [bp-0x88]
    let v17: u192;  // [bp-0x78]
    let v18: struct8;  // [bp-0x60]
    let v19: u64;  // [bp-0x58]
    let v20: u8;  // [bp-0x50]
    let v21: u64;  // [bp-0x48]
    let v22: u128;  // [bp-0x40]
    let v24: void*;  // rcx
    let v25: struct8;  // rax
    let v26: void*;  // rax
    let v27: u64;  // rdx
    let v28: u128;  // xmm0
    let v29: u128;  // xmm0

    uu_join::State::next_line(a1, a2, v24);
    v25 = *(&v3 as &i64);
    if v25 != 9223372036854775809 {
        v2 = 0x8000000000000000;
        v1 = *((a2 + 288) as &i8);
        do {
            v13 = v9;
            memcpy(&v12, &v7, 16);
            v22 = v11;
            v21 = v13;
            memcpy(&v19, &v12, 16);
            v18 = v25;
            if v25 == v2 {
                *(v0 as &u64) = v2;
                return a0;
            }
            memcpy(&v17, &v22, 16);
            memcpy(&v16, &v20, 16);
            v14 = v18;
            v15 = v19;
            v26 = uu_join::State::get_current_key(a1);
            if uu_join::Input<Sep>::compare(v1, v26, v27, uu_join::Line::get_field(&v14, *((a1 + 64) as &i64)), v27) as i8 {
                v29 = *(&v14 as &i128);
                *((v0 + 32) as &i128) = v17;
                *((v0 + 16) as &u128) = v16;
                *(v0 as &u128) = v29;
                return a0;
            }
            v28 = *(&v14 as &i128);
            memcpy(&v11, &v17, 16);
            v8 = v16;
            v4 = v28;
            v6 = alloc::vec::Vec<T,A>::push(a2);
            uu_join::State::next_line(a1, a2, v24);
            v25 = v5.field_16;
            v11 = v10;
        } while (v5.field_16 != 9223372036854775809);
    }
    v13 = v9;
    memcpy(&v12, &v7, 16);
    v8 = v13;
    v6 = *(&v7 as &i128);
    *((v0 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
    *((v0 + 16) as &&u8) = &g_5326b8;
    *(v0 as &i64) = 9223372036854775809;
    return 9223372036854775809;
}
