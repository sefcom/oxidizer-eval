long long forc_crypto::keys::get_public_key::examples()
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    uint128_t v5;  // [bp-0x40]
    char v6;  // [bp-0x28]
    unsigned long long v8;  // rax

    v2 = &g_a2f298;
    v3 = 1;
    v4 = &v0;
    v5 = 0;
    v1.map_or_else("    # Get the public key from a message and its signature\n    forc crypto get-public-key \\\n            0x1eff08081394b72239a0cf7ff6b499213dcb7a338bedbd75d072d504588ef27a1f74d5ceb2f111ec02ede097fb09ed00aa9867922ed39299dae0b1afc0fa8661 \\\n            \"This is a message that is signed\"\n\n", 284, &v2);
    alloc::str::join_generic_copy(&v6, &v1, 1);
    v8 = v6.into_boxed_slice();
    core::ptr::drop_in_place<forc_crypto::address::Args>(&v1);
    return v8;
}
