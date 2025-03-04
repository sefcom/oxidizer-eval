fn uu_sort::chunks::Chunk::try_new(a0: &struct16, a1: &struct24, a2: &struct120) -> int {
    let v0: struct96;  // [sp-0xf8]
    let v1: struct120;  // [bp-0x98]
    let v3: i64;  // rax
    let v4: i64;  // r14
    let v5: iNone;  // xmm0
    let v10: iNone;  // ymm0
    let v11: iNone;  // ymm0
    let v12: i64;  // rax
    let v15: iNone;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2

    v3 = __rust_alloc(120, 8);
    if !v3 {
        core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
    }
    v4 = v3;
    *((v4 + 16) as &i64) = *((a1 + 16) as &i64);
    v5 = *(a1 as &i128);
    *(v4 as void*) = v5;
    v11 = ((((v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 96) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 80) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 64) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a2 as &i128);
    v1 = struct120 {
        field_0: v9
        field_16: *((a2 + 16) as &i128)
        field_32: *((a2 + 32) as &i128)
        field_48: *((a2 + 48) as &i128)
        field_64: v8
        field_80: v7
        field_96: v6
        field_112: *((a2 + 112) as &i64)
    };
    v0 = uu_sort::chunks::read::{{closure}}(&v1, *((v4 + 8) as &i64), *((v4 + 16) as &i64));
    if v0.field_0 as i64 == 0x8000000000000000 {
        return (v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10 as u128) as u64;
    }
    v12 = v4 + 24;
    *((v12 + 80) as &i128) = *(&v0.field_80 as &i128);
    *((v12 + 64) as &u128) = v0.field_64;
    v15 = v0.field_0;
    v16 = v0.field_16;
    v17 = v0.field_32;
    *((v12 + 48) as &u128) = v0.field_48;
    *((v12 + 32) as void*) = v17;
    *((v12 + 16) as void*) = v16;
    *(v12 as void*) = v15;
    return struct16 {
        field_0: 0
        field_8: v4
    };
}
