fn uu_sort::chunks::Chunk::try_new(a1: i64, a2: &struct24) -> : struct16 {
    let a0: i64;  // rsi
    let v0: Result<struct96, struct24>;  // [bp-0xf8]
    let v1: u128;  // [bp-0xe8]
    let v2: u128;  // [bp-0xd8]
    let v3: u128;  // [bp-0xc8]
    let v4: u128;  // [bp-0xb8]
    let v5: u128;  // [bp-0xa8]
    let v6: u960;  // [bp-0x98]
    let v8: core::result::Result<(), std::io::error::Error>;  // rax
    let v9: i64;  // r14
    let v10: i64;  // rdi
    let v11: u64;  // rax
    let v12: u128;  // xmm0
    let v13: i64;  // rdi

    v8 = __rust_alloc(120, 8);
    match v8 {
        Ok(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Err(_) => {
            v9 = v8;
            *((v9 + 16) as &i64) = *((a0 + 16) as &i64);
            *(v9 as &i128) = *(a0 as &i128);
            v6 = struct120 {
                field_0: *(a1 as &i128)
                field_16: *((a1 + 16) as &i128)
                field_32: *((a1 + 32) as &i128)
                field_48: *((a1 + 48) as &i128)
                field_64: *((a1 + 64) as &i128)
                field_80: *((a1 + 80) as &i128)
                field_96: *((a1 + 96) as &i128)
                field_112: *((a1 + 112) as &i64)
            };
            v0 = uu_sort::chunks::read::{{closure}}(&v6, *((v9 + 8) as &i64), *((v9 + 16) as &i64));
            match v0 {
                Ok(_) => {
                    v11 = v9 + 24;
                    *((v11 + 80) as &u128) = v5;
                    *((v11 + 64) as &u128) = v4;
                    v12 = v0 as i128;
                    *((v11 + 48) as &u128) = v3;
                    *((v11 + 32) as &u128) = v2;
                    *((v11 + 16) as &u128) = v1;
                    *(v11 as &u128) = v12;
                    *((v13 + 8) as &struct_1 *) = v9;
                    *(v13 as &i64) = 0;
                    return;
                },
                Err(_) => {
                    *(v10 as &i128) = *((&v0 as &char + 8) as &i128);
                    return;
                },
            }
        },
    }
}
