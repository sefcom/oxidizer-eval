void forc_crypto::sha256::hash(uint128_t a0[2], unsigned long long a1)
{
    int v0;  // [bp-0x138], Other Possible Types: char
    int v1;  // [bp-0x128]
    int v2;  // [bp-0x118]
    int v3;  // [bp-0x108]
    int v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    int v6;  // [bp-0xd8]
    int v7;  // [bp-0xc8]
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    int v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    int v12;  // [bp-0x78]
    int v13;  // [bp-0x68]
    char v14;  // [bp-0x50]
    int v15;  // [bp-0x38], Other Possible Types: char
    char v16;  // [bp-0x28]

    v0.default();
    v13 = v6;
    v12 = v5;
    v11 = v4;
    v10 = v3;
    v9 = v2;
    v8 = v1;
    v7 = v0;
    v0.into(a1);
    v7.update(&v0);
    v6 = v13;
    v5 = v12;
    v4 = v11;
    memcpy(&v3, &v10, 16);
    v2 = v9;
    v1 = v8;
    v0 = v7;
    v15.finalize(&v0);
    hex::encode(&v14, &v15);
    serde_json::value::to_value(&v0, &v14);
    v15.unwrap(&v0, &g_a2c070);
    a0[1] = *((int128_t *)&v16);
    *((void*)&a0[0]) = v15;
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    return;
}
