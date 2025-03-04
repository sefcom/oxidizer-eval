fn uu_join::State::extend(a0: &Option<Result<struct48, struct16>>, a1: void*, a2: &u8) -> u64 {
    let v0: i32;  // [sp-0xf4]
    let v1: i64;  // [sp-0xf0]
    let v2: iNone;  // [sp-0xe8], Other Possible Types: struct48
    let v3: iNone;  // [sp-0xe8]
    let v4: iNone;  // [bp-0xd8], Other Possible Types: unsigned long
    let v5: iNone;  // [sp-0xc8]
    let v6: iNone;  // [sp-0xb8]
    let v7: i64;  // [sp-0xa8]
    let v8: i64;  // [sp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: iNone;  // [sp-0x88]
    let v11: iNone;  // [sp-0x78]
    let v12: i64;  // [sp-0x60]
    let v13: iNone;  // [sp-0x58]
    let v14: i64;  // [sp-0x48]
    let v15: iNone;  // [sp-0x40]
    let v17: i64;  // rax
    let v18: iNone;  // ymm0
    let v19: iNone;  // ymm1
    let v20: iNone;  // ymm2
    let v21: iNone;  // xmm0
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm0
    let v25: iNone;  // xmm1
    let v26: i64;  // rdx
    let v27: iNone;  // xmm0
    let v28: iNone;  // xmm1
    let v29: iNone;  // xmm2
    let v32: i64;  // rcx

    v2 = uu_join::State::next_line(a1, a2);
    v17 = v2.field_0;
    if v17 == 9223372036854775809 {
        v7 = (&v2)[24] as i64;
        v6 = (&v2)[8] as i128;
        v4 = v7;
        v3 = v6;
        v32 = a0;
        *((v32 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
        *((v32 + 16) as &&i64) = &g_5326b8;
        *(v32 as &i64) = 9223372036854775809;
    }
    v1 = 0x8000000000000000;
    v0 = *(a2 as &i8);
    do {
        v7 = (&v2)[24] as i64;
        v21 = (&v2)[8] as i128;
        v6 = v21;
        v22 = v5;
        v15 = v22;
        v14 = v7;
        v23 = v6;
        v13 = v23;
        v12 = v17;
        if v17 == v1 {
            return v1;
        }
        v24 = (&v13)[8] as i128;
        v25 = v15;
        v11 = v25;
        v10 = v24;
        v8 = v12;
        v9 = v13 as i64;
        if uu_join::Input<Sep>::compare(v0 as u64, uu_join::State::get_current_key(a1), v26, uu_join::Line::get_field(&v8, *((a1 + 64) as &i64)), v26) as i8 {
            return Some(struct48 {
                field_0: v31
                field_16: v10
                field_32: v11
            });
        }
        v27 = *(&v8 as &i128);
        v18 = ((((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
        v28 = v10;
        v19 = (v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
        v29 = v11;
        v20 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
        v5 = v29;
        v4 = v28;
        v3 = v27;
        alloc::vec::Vec<T,A>::push(a1, &v3);
        v2 = uu_join::State::next_line(a1, a2);
        v17 = v2.field_0;
    } while (v17 != 9223372036854775809);
}
