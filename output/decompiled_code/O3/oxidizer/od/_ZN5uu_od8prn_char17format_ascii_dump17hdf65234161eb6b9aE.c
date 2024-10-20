fn uu_od::prn_char::format_ascii_dump(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct16;  // [sp-0x50], Other Possible Types: i128
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v4: i64;  // r12
    let v5: i64;  // r13
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v9: i64;  // rbp
    let v10: i64;  // r12
    let v11: i128;  // xmm0
    let v12: i256;  // ymm0

    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
    *(v1 as &i8) = 62;
    v2 = &g_1;
    v4 = &g_1;
    if a2 {
        v5 = 0;
        do {
            v6 = *((a1 + v5) as &i8);
            if (v6 - 32 & 255) < 95 {
                v7 = v6 * 16;
                v9 = *((v7 + &g_504168 as &u8) as &i64);
                if v0 - v4 < v9 {
                    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v4, v9);
                    v10 = v2;
                }
                memcpy(v10 + v1, *((v7 + "\\0") as &i64), v9);
                v4 = v9 + v2;
            } else {
                if v4 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                *((v1 + v4) as &i8) = 46;
                v4 += &g_1 as &u8;
            }
        } while ((v2 = v4, v5 += &g_1, a2 != v5));
    }
    if v4 == v0 {
        v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    *((v1 + v4) as &i8) = 60;
    v2 = v4 + &g_1 as &u8;
    *((a0 + 16) as &i64) = v2;
    v11 = v0;
    *(a0 as &i128) = v11;
    return Conv(256->64, ((vvar_154{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_153{reg 224})));
}
