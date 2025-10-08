long long forc_crypto::address::dump_address(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0xf0]
    char v1;  // [bp-0xef]
    char v2;  // [bp-0xec]
    int v3;  // [bp-0xe9]
    char v4;  // [bp-0xe8]
    int v5;  // [bp-0xe0], Other Possible Types: char
    void* v6;  // [bp-0xd9]
    char v7;  // [bp-0xd0]
    int v8;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0xc5]
    unsigned long long v10;  // [bp-0xc1]
    int v11;  // [bp-0xb9]
    int v12;  // [bp-0xb8]
    char v13;  // [bp-0xa9]
    void* v14;  // [bp-0xa0]
    void* v15;  // [bp-0x90]
    char v16;  // [bp-0x88]
    unsigned long long v17;  // [bp-0x78]
    char v18;  // [bp-0x70]
    char v19;  // [bp-0x58]
    void* v20;  // [bp-0x48]
    int v21;  // [bp-0x38]
    int v22;  // [bp-0x28]
    uint128_t v24[2];  // rax
    unsigned long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    char v28;  // cl
    unsigned long long v29;  // rax

    v24 = a1[1].as_ref(a1[2]);
    if (v25 == 32)
    {
        *((uint128_t *)&v22) = v24[1];
        *((uint128_t *)&v21) = v24[0];
        *((uint128_t *)&v12) = v24[1];
        v8 = v21;
    }
    else
    {
        forc_crypto::address::handle_string_conversion(&v0, a1);
        if (v0)
        {
            v26 = *((long long *)&v4);
            *((unsigned long long *)&a0->field_1[7]) = v26;
            a0->field_0 = 6;
            return v26;
        }
        v9 = *((int *)&v2);
        v8 = *((int *)&v1);
        v27 = *((long long *)&v4);
        v28 = v7;
        *((int128_t *)&v11) = *((int128_t *)&v5);
        v13 = v28;
        v10 = v27;
    }
    v14 = 0;
    v15 = 0;
    v0.to_vec("Address/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/sway/forc-plugins/forc-crypto/src/address.rs cannot be parsed to a valid address/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/sway/forc-plugins/forc-crypto/src/keccak256.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/block-buffer-0.10.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.42/src/util/flat_map.rs", 7);
    v17 = (long long)v5;
    memcpy(&v16, &v0, 16);
    v18.spec_to_string(&(char)v8);
    serde_json::value::to_value(&v0, &v18);
    v19.unwrap(&v0, &g_a2c088);
    v0.insert(&v14, &v16, &v19);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&v18);
    v20 = 0;
    *((int128_t *)&v3) = *((int128_t *)&v14);
    v6 = 0;
    a0->field_0 = 5;
    v29 = (long long)(&v3)[8];
    *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v0);
    *((unsigned long long *)&a0->field_1[15]) = v29;
    a0->field_8 = 0;
    if (v25 != 32)
        return 0;
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(a1);
}
