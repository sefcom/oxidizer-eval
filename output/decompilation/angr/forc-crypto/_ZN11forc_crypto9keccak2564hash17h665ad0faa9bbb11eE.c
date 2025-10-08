void forc_crypto::keccak256::hash(uint128_t a0[2], unsigned long long a1)
{
    char v0;  // [bp-0x318]
    int v1;  // [bp-0x300], Other Possible Types: char
    int v2;  // [bp-0x2f0]
    char v3;  // [bp-0x2e0]
    char v4;  // [bp-0x180]

    v4.default();
    v3.into(a1);
    v4.update(&v3);
    memcpy(&v3, &v4, 352);
    v1.finalize_fixed(&v3);
    hex::encode(&v0, &v1);
    serde_json::value::to_value(&v3, &v0);
    v1.unwrap(&v3, &g_a2c0c0);
    *((void*)&a0[1]) = v2;
    *((void*)&a0[0]) = v1;
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
