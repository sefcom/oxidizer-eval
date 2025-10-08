fn uu_sort::chunks::Chunk::try_new(a1: &struct24, a2: &struct144) -> : struct16 {
    let a0: i64;  // rdi
    let v0: Result<struct120, struct24>;  // [bp-0x98]
    let v1: u64;  // [bp-0x98]
    let v2: alloc::string::String;  // [bp-0x88]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v5: u128;  // [bp-0x58]
    let v6: iNone;  // [bp-0x48]
    let v7: u128;  // [bp-0x38]
    let v9: i64;  // rax
    let v10: i64;  // r14
    let v11: u64;  // rax
    let v12: struct96;  // xmm0

    v9 = _RNvCsgYTF1aGAkck_7___rustc12___rust_alloc(144, 8);
    core::option::unwrap(v9);
    v10 = v9;
    *((v10 + 16) as &i64) = *((a1 + 16) as &i64);
    *(v10 as &i128) = *(a1 as &i128);
    v0 = uu_sort::chunks::read::{{closure}}(a2, *((v10 + 8) as &i64), *((v10 + 16) as &i64));
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v11 = v10 + 24;
        *((v11 + 112) as &i64) = *((&v0 as &char + 112) as &i64);
        *((v11 + 96) as &u128) = v7;
        *((v11 + 80) as void*) = v6;
        *((v11 + 64) as &u128) = v5;
        v12 = v0 as i128;
        *((v11 + 48) as &u128) = v4;
        *((v11 + 32) as &u128) = v3;
        *((v11 + 16) as &alloc::string::String) = v2;
        *(v11 as &struct96) = v12;
        return struct16 {
            field_0: 0
            field_8: v10
        };
    }
    return struct16 {
        field_0: *((&v0 as &char + 8) as &i128)
    };
}
