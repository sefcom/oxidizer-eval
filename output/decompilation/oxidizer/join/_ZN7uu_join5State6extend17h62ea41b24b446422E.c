fn uu_join::State::extend(a0: &Option<Result<struct48, struct16>>, a1: void*, a2: &u8) -> u64 {
    let v0: i32;  // [sp-0xf4]
    let v1: i64;  // [sp-0xf0]
    let v2: i128;  // [sp-0xe8], Other Possible Types: struct48
    let v3: i128;  // [bp-0xd8]
    let v4: i128;  // [sp-0xc8]
    let v5: i128;  // [sp-0xb8]
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0x98]
    let v8: i64;  // [sp-0x90]
    let v9: i128;  // [sp-0x88]
    let v10: i128;  // [sp-0x78]
    let v11: i64;  // [sp-0x60]
    let v12: i128;  // [sp-0x58]
    let v13: i64;  // [sp-0x48]
    let v14: i128;  // [sp-0x40]
    let v16: i64;  // rax
    let v17: i256;  // ymm0
    let v18: i256;  // ymm1
    let v19: i256;  // ymm2
    let v20: i128;  // xmm0
    let v21: i128;  // xmm0
    let v22: i128;  // xmm0
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i64;  // rdx
    let v26: i128;  // xmm0
    let v27: i128;  // xmm1
    let v28: i128;  // xmm2
    let v31: i64;  // rcx

    v2 = uu_join::State::next_line(a1, a2);
    v16 = v2;
    if v16 == 9223372036854775809 {
        v6 = *((&v2 as &char + 24) as &i64);
        v5 = *((&v2 as &char + 8) as &i128);
        v3 = v6;
        v2 = v5;
        v31 = a0;
        *((v31 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((v31 + 16) as &&i64) = &g_5326b8;
        *(v31 as &i64) = 9223372036854775809;
    }
    v1 = 0x8000000000000000;
    v0 = *(a2 as &i8);
    do {
        v6 = *((&v2 as &char + 24) as &i64);
        v20 = *((&v2 as &char + 8) as &i128);
        v5 = v20;
        v21 = v4;
        v14 = v21;
        v13 = v6;
        v22 = v5;
        v12 = v22;
        v11 = v16;
        if v11 == v1 {
            return v1;
        }
        v23 = *((&v12 as &char + 8) as &i128);
        v24 = v14;
        v10 = v24;
        v9 = v23;
        v7 = v11;
        v8 = v12;
        if uu_join::Input<Sep>::compare(v0, uu_join::State::get_current_key(a1), v25, uu_join::Line::get_field(&v7, *((a1 + 64) as &i64)), v25) as i8 {
            return Some(struct48 {
                field_0: v30
                field_16: v9
                field_32: v10
            });
        }
        v26 = v7;
        v17 = ((((v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
        v27 = v9;
        v18 = (v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
        v28 = v10;
        v19 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
        v4 = v28;
        v3 = v27;
        v2 = v26;
        alloc::vec::Vec<T,A>::push(a1, &v2);
        v2 = uu_join::State::next_line(a1, a2);
        v16 = v2;
    } while (v16 != 9223372036854775809);
}
