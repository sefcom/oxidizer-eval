fn forc_crypto::keys::get_public_key::examples() -> u64 {
    let v0: u8;  // [bp-0x78]
    let v1: struct24;  // [bp-0x70]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: i64;  // [bp-0x48]
    let v5: u128;  // [bp-0x40]
    let v6: Result<struct24, struct24>;  // [bp-0x28]

    v2 = "    # Get the public key from a message and its signature\n    forc crypto get-public-key \\\n            0x1eff08081394b72239a0cf7ff6b499213dcb7a338bedbd75d072d504588ef27a1f74d5ceb2f111ec02ede097fb09ed00aa9867922ed39299dae0b1afc0fa8661 \\\n            \"This is a message that is signed\"\n\n";
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v1 = core::option::Option<T>::map_or_else("    # Get the public key from a message and its signature\n    forc crypto get-public-key \\\n            0x1eff08081394b72239a0cf7ff6b499213dcb7a338bedbd75d072d504588ef27a1f74d5ceb2f111ec02ede097fb09ed00aa9867922ed39299dae0b1afc0fa8661 \\\n            \"This is a message that is signed\"\n\n", &v2);
    v6 = alloc::str::join_generic_copy(&v1, 1);
    return alloc::vec::Vec<T,A>::into_boxed_slice(&v6);
}
