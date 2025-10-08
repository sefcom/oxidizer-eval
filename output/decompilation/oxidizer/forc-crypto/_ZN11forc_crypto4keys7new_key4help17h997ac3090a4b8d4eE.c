fn forc_crypto::keys::new_key::help() -> long long {
    let v0: struct40;  // [bp-0xb0]
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x50]
    let v4: u64;  // [bp-0x48]
    let v5: alloc::string::String;  // [bp-0x20]
    let v7: u64;  // rdx

    v0 = struct40 {
        field_0: 0x8000000000000000
        field_8: "EXAMPLES:"
        field_24: 0
        field_32: 81604378627
    };
    v3 = forc_crypto::keys::new_key::examples();
    v4 = v7;
    v5 = format!("{}\n{}", &v0, &v3);
    v2 = v5.vec.len;
    *(&v1 as &i128) = *(&v5.vec.buf.inner.cap as &i128);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v1);
}
