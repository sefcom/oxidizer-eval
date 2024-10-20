fn uu_ptx::format_roff_field(a0: u64, a1: u64, a2: u64) -> int {
    let v0: &u16;  // [sp-0x68], Other Possible Types: u64
    let v1: struct16;  // [sp-0x60], Other Possible Types: u64, void*
    let v2: &u16;  // [sp-0x58]
    let v3: &u16;  // [sp-0x50], Other Possible Types: u64
    let v4: u64;  // [sp-0x48]
    let v5: u64;  // [sp-0x40]
    let v6: &u8;  // [sp-0x38]
    let v8: void*;  // r15
    let v9: void*;  // r14
    let v10: void*;  // rbp
    let v11: u64;  // rbp
    let v12: u64;  // rdx
    let v13: u64;  // rax
    let v14: &u8;  // rcx
    let v15: &u8;  // rcx
    let v17: &u8;  // rax
    let v19: u64;  // rbp
    let v20: u64;  // r15
    let v21: u64;  // rdx
    let v22: u64;  // rbp
    let v23: u64;  // r13
    let v24: u64;  // r15
    let v25: u128;  // xmm0
    let v26: u256;  // ymm0

    v1 = 0;
    v2 = 1;
    v0 = 1;
    v8 = 0;
    v9 = 0;
    loop {
        v11 = 0;
        v5 = v5;
        v3 = v8;
        do {
            v12 = a2 - v9;
            if v12 <= 15 {
                if a2 == v9 {
                    break;
                }
                v14 = 0;
                while (*((a1 + v9 as &u8 + v14) as &i8) != 34) {
                    v14 += 1;
                    if v12 == v14 {
                        goto LABEL_53b74f;
                    }
                }
            }
            v13 = core::slice::memchr::memchr_aligned(34, a1 + v9);
            if v13 != 1 {
                v5 = v5;
                if !(!v13) {
                    goto LABEL_53b692;
                }
                break;
            }
            v17 = v15 + v9;
            v9 = v9 + v15 + 1;
            if v17 < a2 && *((a1 + v17) as &i8) == 34 {
                v5 = v9;
                v6 = v17;
LABEL_53b692:
                v5 = v5;
                v19 = &a1[v11];
                if v4 - v8 >= v0 {
                    v4 = v1;
                    v4 = v4;
                    v0 = v0;
                    v0 = v0;
                } else {
                    v0 = a1 + v6 - v19;
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v8, v0);
                    v4 = v1;
                    v4 = v4;
                    v0 = v0;
                    v20 = v3;
                    v0 = v2;
                }
                v21 = v0;
                v4 = v4;
                v0 = v0;
                memcpy(v0 + v20, v19, v21);
                v3 = v20 + v21;
                if v4 - v3 <= 1 {
                    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v3, 2);
                    v3 = v3;
                    v0 = v2;
                    goto LABEL_53b731;
                } else {
                    v3 = v3;
                    v0 = v0;
                    goto LABEL_53b731;
                }
            }
        } while (v9 <= a2);
LABEL_53b74f:
        v22 = &a1[v11];
        v23 = &a1[a2 + -1 * v22];
        if v1 - v8 < v23 {
            v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v8, v23);
            v24 = v3;
        }
        memcpy(v2 + v24, v22, v23);
        v3 = v24 + v23;
        v25 = *(&v1 as &i128);
        a0->field_0 = v25;
        a0->field_10 = v3;
        return Conv(256->64, ((vvar_222{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_221{reg 224})));
LABEL_53b731:
        v0 = v0;
        *((v0 + v3) as &i16) = 8738;
        v8 = v3 + 1;
        v5 = v5;
        v10 = v5;
    }
}
