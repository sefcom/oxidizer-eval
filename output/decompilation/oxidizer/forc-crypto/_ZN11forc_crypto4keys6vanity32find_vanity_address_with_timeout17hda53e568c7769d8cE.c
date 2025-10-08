fn forc_crypto::keys::vanity::find_vanity_address_with_timeout(a1: &struct48, a2: i8, a3: i8, a4: i64) -> : struct88 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x208]
    let v1: u64;  // [bp-0x200]
    let v2: u128;  // [bp-0x1f8]
    let v3: u128;  // [bp-0x1e8]
    let v4: u128;  // [bp-0x1d8]
    let v5: u64;  // [bp-0x1c8]
    let v6: u8;  // [bp-0x1c0]
    let v7: struct80;  // [bp-0x1b8]
    let v8: struct17;  // [bp-0x168], Other Possible Types: struct40, struct80
    let v9: u128;  // [bp-0x158]
    let v10: u128;  // [bp-0x148]
    let v11: u128;  // [bp-0x138]
    let v12: i8;  // [bp-0x128]
    let v13: u8;  // [bp-0xc0]
    let v14: i8;  // [bp-0x28]
    let v16: u64;  // rax

    v8 = struct17 {
        field_0: 1
        field_8: 1
        field_16: 0
    };
    v16 = alloc::boxed::Box<T>::new(&v8) as u64;
    if _ccall(14, 24, atomic_fetch_add(v16) as u64 + 1, 0, (&v14 < 480) as u8 as u64) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 8369721()
    }
    v0 = v16;
    v6 = a2;
    v5 = v16;
    v2 = *(a1 as &i128);
    v3 = *((a1 + 16) as &i128);
    v4 = *((a1 + 32) as &i128);
    if !(a3 & 1) {
        forc_crypto::keys::vanity::find_vanity_address_with_timeout::{{closure}}(a0, &v2);
    }
    v1 = a4;
    v8 = tokio::runtime::runtime::Runtime::new();
    if v8.field_0 != 2 {
        v7 = struct80 {
            field_0: v8.field_0
            field_8: 1
            field_16: v9
            field_32: v10
            field_48: v11
            field_64: *(&v12 as &i128)
        };
        v8 = struct80 {
            field_0: v2
            field_16: v3
            field_32: v4
            field_48: *(&v5 as &i128)
            field_64: &v1
            field_72: &v0
        };
        v13 = 0;
        tokio::runtime::runtime::Runtime::block_on(a0, &v7, &v8);
        return;
    }
    return struct32 {
        field_0: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(1)
        padding_8: <UNKNOWN>
        field_64: <UNKNOWN>
    };
}
