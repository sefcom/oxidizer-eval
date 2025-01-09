fn uu_sort::chunks::Chunk::try_new(a0: &struct16, a1: &struct24, a2: &struct120) -> int {
    let v0: Result<struct96, struct16>;  // [sp-0xf8]
    let v1: struct120;  // [bp-0x98]
    let v3: i64;  // rax
    let v4: i64;  // r14
    let v5: i128;  // xmm0
    let v6: i256;  // ymm0
    let v7: i256;  // ymm0

    v3 = __rust_alloc(120, 8);
    if v3 {
        v4 = v3;
        *((v4 + 16) as &i64) = *((a1 + 16) as &i64);
        v5 = *(a1 as &i128);
        *(v4 as &i128) = v5;
        v7 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a2 + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a2 as &i128);
        v1 = struct120 {
            field_0: v6 as u128
            field_16: *((a2 + 16) as &i128)
            field_32: *((a2 + 32) as &i128)
            field_48: *((a2 + 48) as &i128)
            field_64: v6 as u128
            field_80: v6 as u128
            field_96: v6 as u128
            field_112: *((a2 + 112) as &i64)
        };
        v0 = uu_sort::chunks::read::{{closure}}(&v1, *((v4 + 8) as &i64), *((v4 + 16) as &i64));
        return struct16 {
            field_0: 0
            field_8: v4
        };
    }
    core::option::unwrap_failed("src/uu/sort/src/chunks.rs"); /* do not return */
}
