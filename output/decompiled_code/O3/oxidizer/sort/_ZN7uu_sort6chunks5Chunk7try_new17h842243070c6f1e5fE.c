fn uu_sort::chunks::Chunk::try_new(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: Result<struct96, struct24>;  // [sp-0xf8], Other Possible Types: i768
    let v2: struct120;  // [bp-0x98]
    let v4: i64;  // rax
    let v5: i64;  // r14
    let v6: i64;  // rax
    let v7: i128;  // xmm0
    let v8: i128;  // xmm1
    let v9: i128;  // xmm2

    v4 = __rust_alloc(120, 8);
    if !v4 {
        core::option::unwrap_failed(); /* do not return */
    }
    v5 = v4;
    *((v5 + 16) as &i64) = *((a1 + 16) as &i64);
    *(v5 as &i128) = *(a1 as &i128);
    v0 = v5;
    v2 = struct120 {
        field_0: *(a2 as &i128)
        field_16: *((a2 + 16) as &i128)
        field_32: *((a2 + 32) as &i128)
        field_48: *((a2 + 48) as &i128)
        field_64: *((a2 + 64) as &i128)
        field_80: *((a2 + 80) as &i128)
        field_96: *((a2 + 96) as &i128)
        field_112: *((a2 + 112) as &i64)
    };
    v1 = uu_sort::chunks::read::{{closure}}(&v2, *((v0 + 8) as &i64), *((v0 + 16) as &i64));
    match v1 {
        Ok(_) => {
            v6 = v0 + 24;
            *((v6 + 80) as &i128) = *((&v1 as &char + 80) as &i128);
            *((v6 + 64) as &i128) = *((&v1 as &char + 64) as &i128);
            v7 = v1;
            v8 = *((&v1 as &char + 16) as &i128);
            v9 = *((&v1 as &char + 32) as &i128);
            *((v6 + 48) as &i128) = *((&v1 as &char + 48) as &i128);
            *((v6 + 32) as &i128) = v9;
            *((v6 + 16) as &i128) = v8;
            *(v6 as &i128) = v7;
            return struct16 {
                field_0: 0
                field_8: v0
            };
        },
        Err(_) => {
            return struct16 {
                field_0: *((&v1 as &char + 8) as &i128)
            };
        },
    }
}
