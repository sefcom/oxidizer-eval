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
    let v11: u128;  // [bp-0xb8]
    let v12: u64;  // [bp-0xa8]
    let v13: u64;  // [bp-0x98]
    let v14: u64;  // [bp-0x90]
    let v15: u128;  // [bp-0x88]
    let v16: u128;  // [bp-0x78]
    let v17: struct8;  // [bp-0x60]
    let v18: u128;  // [bp-0x58]
    let v19: u64;  // [bp-0x48]
    let v20: u128;  // [bp-0x40]
    let v22: &u64;  // rcx
    let v23: struct8;  // rax
    let v24: void*;  // rax
    let v25: u64;  // rdx
    let v26: u128;  // xmm0
    let v27: u128;  // xmm0

    uu_join::State::next_line(a1, a2, v22);
    v23 = *(&v3 as &i64);
    if v23 != 9223372036854775809 {
        v2 = 0x8000000000000000;
        v1 = *(a2 as &i8);
        do {
            v12 = v9;
            v11 = *(&v7 as &i128);
            v20 = v10;
            v19 = v12;
            v18 = v11;
            v17 = v23;
            if v23 == v2 {
                *(v0 as &u64) = v2;
                return a0;
            }
            v16 = v20;
            v15 = *((&v18 as &char + 8) as &i128);
            v13 = v17;
            v14 = v18;
            v24 = uu_join::State::get_current_key(a1);
            if uu_join::Input<Sep>::compare(v1, v24, v25, uu_join::Line::get_field(&v13, *((a1 + 64) as &i64)), v25) as i8 {
                v27 = *(&v13 as &i128);
                *((v0 + 32) as &u128) = v16;
                *((v0 + 16) as &u128) = v15;
                *(v0 as &u128) = v27;
                return a0;
            }
            v26 = *(&v13 as &i128);
            v10 = v16;
            v8 = v15;
            v4 = v26;
            v6 = alloc::vec::Vec<T,A>::push(a2);
            uu_join::State::next_line(a1, a2, v22);
            v23 = v5.field_16;
        } while (v5.field_16 != 9223372036854775809);
    }
    v12 = v9;
    v11 = *(&v7 as &i128);
    v8 = v12;
    v6 = *(&v7 as &i128);
    *((v0 + 8) as &double) = alloc::boxed::Box<T>::new(&v6);
    *((v0 + 16) as &&u8) = &g_5326b8;
    *(v0 as &i64) = 9223372036854775809;
    return 9223372036854775809;
}
