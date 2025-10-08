fn uu_join::State::extend(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: void*;  // [bp-0x100]
    let v1: u32;  // [bp-0xf4]
    let v2: u64;  // [bp-0xf0]
    let v3: iNone;  // [bp-0xe8]
    let v4: u64;  // [bp-0xd8]
    let v5: u64;  // [bp-0xc8]
    let v6: u64;  // [bp-0xc0]
    let v7: iNone;  // [bp-0xb8]
    let v8: iNone;  // [bp-0xa8]
    let v9: struct48;  // [bp-0x98], Other Possible Types: u384
    let v10: struct48;  // [bp-0x98]
    let v11: u64;  // [bp-0x80]
    let v12: iNone;  // [bp-0x78]
    let v13: iNone;  // [bp-0x78]
    let v14: u64;  // [bp-0x60]
    let v15: u128;  // [bp-0x58]
    let v16: u64;  // [bp-0x48]
    let v17: iNone;  // [bp-0x40]
    let v19: core::result::Result<(), std::io::error::Error>;  // rax
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v23: iNone;  // xmm0

    v9 = uu_join::State::next_line(a1, a2);
    v19 = v9.field_0 as i64;
    if let Ok(_) = v19 {
        v2 = 0x8000000000000000;
        v1 = *(a2 as &i8) as u8 as u32;
        do {
            v4 = v11;
            v3 = *((&v9.field_0 as &char + 8) as &i128);
            v17 = v13;
            v16 = v4;
            *(&v15 as void*) = v3;
            v14 = v19;
            if v19 == v2 {
                *(v0 as &u64) = v2;
                return a0;
            }
            v8 = v17;
            v7 = *((&v15 as &char + 8) as &i128);
            v5 = v14;
            v6 = v15 as i64;
            v20 = uu_join::State::get_current_key(a1);
            if uu_join::Input<Sep>::compare(v1 as u8, v20, v21, uu_join::Line::get_field(&v5, *((a1 + 64) as &i64)), v21) as u8 {
                v23 = *(&v5 as &i128);
                v0[32] = v8;
                v0[16] = v7;
                *(v0) = v23;
                return a0;
            }
            v10 = struct48 {
                field_0: *(&v5 as &i128)
                field_8: <UNKNOWN>
                field_16: v7
                field_32: v8
            };
            alloc::vec::Vec<T,A>::push(a1, &v10, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/join/src/join.rs");
            v9 = uu_join::State::next_line(a1, a2);
            v19 = v9.field_0 as i64;
            v13 = v12;
        } while (v9.field_0 as i64 != 9223372036854775809);
    }
    v4 = v11;
    v3 = *((&v9 as &char + 8) as &i128);
    *(&v0[8] as &u64) = alloc::boxed::Box<T>::new(&v3) as u64;
    *(&v0[16] as &&u8) = &g_4fd398;
    *(v0 as &i64) = 9223372036854775809;
    return 9223372036854775809;
}
