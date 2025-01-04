fn uu_sort::chunks::Chunk::try_new(a0: &struct16, a1: &struct24, a2: &struct120) -> int {
    let v0: Result<struct96, struct24>;  // [sp-0xf8], Other Possible Types: i768
    let v1: i128;  // [sp-0x98]
    let v2: i128;  // [sp-0x88]
    let v3: i128;  // [sp-0x78]
    let v4: i128;  // [sp-0x68]
    let v5: i128;  // [sp-0x58]
    let v6: i128;  // [sp-0x48]
    let v7: i128;  // [sp-0x38]
    let v8: i64;  // [sp-0x28]
    let v10: i64;  // rax
    let v11: i64;  // r14
    let v12: i128;  // xmm0
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm0
    let v19: i128;  // xmm0
    let v20: i64;  // rax
    let v21: i128;  // xmm0
    let v22: i128;  // xmm0
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i128;  // xmm2

    v10 = __rust_alloc(120, 8);
    if !v10 {
        core::option::unwrap_failed(); /* do not return */
    }
    v11 = v10;
    *((v11 + 16) as &i64) = *((a1 + 16) as &i64);
    v12 = *(a1 as &i128);
    *(v11 as &i128) = v12;
    v8 = *((a2 + 112) as &i64);
    v13 = *((a2 + 96) as &i128);
    v7 = v13;
    v14 = *((a2 + 80) as &i128);
    v6 = v14;
    v15 = *((a2 + 64) as &i128);
    v5 = v15;
    v16 = *(a2 as &i128);
    v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
    v4 = *((a2 + 48) as &i128);
    v3 = *((a2 + 32) as &i128);
    v2 = *((a2 + 16) as &i128);
    v1 = v16;
    v0 = uu_sort::chunks::read::{{closure}}(&v1, *((v11 + 8) as &i64), *((v11 + 16) as &i64));
    match v0 {
        Err(_) => {
            v19 = *((&v0 as &char + 8) as &i128);
            *(a0 as &i128) = v19;
            return (v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u128 as u256) as u64;
        },
        Ok(_) => {
            v20 = v11 + 24;
            v21 = *((&v0 as &char + 80) as &i128);
            *((v20 + 80) as &i128) = v21;
            v22 = *((&v0 as &char + 64) as &i128);
            *((v20 + 64) as &i128) = v22;
            v23 = v0;
            v24 = *((&v0 as &char + 16) as &i128);
            v25 = *((&v0 as &char + 32) as &i128);
            *((v20 + 48) as &i128) = *((&v0 as &char + 48) as &i128);
            *((v20 + 32) as &i128) = v25;
            *((v20 + 16) as &i128) = v24;
            *(v20 as &i128) = v23;
            return struct16 {
                field_0: 0
                field_8: v11
            };
        },
    }
}
