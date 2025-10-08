fn forc_crypto::help() -> long long {
    let v0: struct16;  // [bp-0x110]
    let v1: struct16;  // [bp-0x100]
    let v2: struct16;  // [bp-0xf0]
    let v3: struct16;  // [bp-0xe0]
    let v4: struct16;  // [bp-0xd0]
    let v5: alloc::string::String;  // [bp-0xc0]
    let v6: alloc::string::String;  // [bp-0xb8]
    let v7: alloc::string::String;  // [bp-0x20]
    let v9: alloc::string::String;  // rdx

    v0 = struct16 {
        field_0: forc_crypto::args::examples()
        field_8: v9
    };
    v1 = struct16 {
        field_0: forc_crypto::address::examples()
        field_8: v9
    };
    v2 = struct16 {
        field_0: forc_crypto::keys::new_key::examples()
        field_8: v9
    };
    v3 = struct16 {
        field_0: forc_crypto::keys::parse_secret::examples()
        field_8: v9
    };
    v4 = struct16 {
        field_0: forc_crypto::keys::get_public_key::examples()
        field_8: v9
    };
    v5 = forc_crypto::keys::vanity::examples();
    v6 = v9;
    v7 = format!("EXAMPLES:\n{}{}{}{}{}{}", &v0, &v1, &v2, &v3, &v4, &v5);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v7);
}
