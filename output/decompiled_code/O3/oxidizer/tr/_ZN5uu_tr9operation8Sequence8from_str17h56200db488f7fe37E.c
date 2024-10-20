fn uu_tr::operation::Sequence::from_str(a0: u32, a1: u64, a2: u64, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct16;  // [sp-0xa0], Other Possible Types: i64
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [sp-0x88], Other Possible Types: Enum
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [sp-0x70]
    let v7: i64;  // [sp-0x50]
    let v8: i64;  // [sp-0x48]
    let v9: i64;  // [sp-0x40]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // rbx
    let v13: i64;  // r15
    let v14: i256;  // ymm0
    let v15: i64;  // rsi
    let v16: i64;  // r8
    let v17: i64;  // r9
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v20: i64;  // rax
    let v21: i64;  // rcx
    let v22: i128;  // xmm0
    let v23: i64;  // r12
    let v24: i64;  // rsi
    let v25: i64;  // r14
    let v26: i64;  // rdx
    let v27: i64;  // r13

    v0 = 4;
    v1 = __rust_alloc(96, 8);
    v2 = 0;
    loop {
        v12 = a1;
        v13 = a2;
        v3 = <(A,B,C,D,E,F) as nom::branch::Alt<Input,Output,Error>>::choice(v15, v12, v13, v16, v17);
        if v3 {
            v23 = v4;
            if v23 == 1 {
                v26 = v1;
                v7 = v26;
                v9 = v0;
                v8 = v26;
                v10 = v26 + v2 * 24;
                return core::iter::adapters::try_process(a0, &v7);
            }
            v25 = *((&v3 as &char + 32) as &i8);
            v27 = *((&v3 as &char + 33) as &i32) * 0x100 | (*((&v3 as &char + 37) as &i16) | *((&v3 as &char + 39) as &i8) * 0x10000) * 0x10000000000;
            v6 = v6;
            v5 = v5;
            break;
        } else {
            v18 = v5;
            if v18 != v13 {
                v19 = v2;
                if v19 == v0 {
                    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
                }
                v20 = v1;
                v21 = v19 * 3;
                *((v20 + v21 * 8 + 16) as &i64) = *((&v3 as &char + 40) as &i64);
                v22 = *((&v3 as &char + 24) as &i128);
                vvar_18{reg 224} = ((vvar_18{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_110{reg 224}))
                *((v20 + v21 * 8) as &i128) = v22;
                v2 = v19 + 1;
                a1 = v4;
            } else {
                v24 = v6;
                v23 = 1;
                v25 = 8;
                if v24 != 9223372036854775818 {
                    v27 = 0;
                    if !(!((0x8000000000000000 ^ v24) != 4 & (0x8000000000000000 ^ v24) < 10)) || !(v24) {
                        break;
                    }
                }
                v27 = 0;
                break;
            }
        }
    }
    v3 = v23;
    v4 = v5;
    v5 = v6;
    v6 = v27 | v25;
    core::result::unwrap_failed(); /* do not return */
}
