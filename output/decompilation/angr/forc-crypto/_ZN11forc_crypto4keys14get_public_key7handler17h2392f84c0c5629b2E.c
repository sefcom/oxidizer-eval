long long forc_crypto::keys::get_public_key::handler(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x168]
    char v1;  // [bp-0x167]
    int v2;  // [bp-0x161]
    unsigned long long v3;  // [bp-0x158]
    void* v4;  // [bp-0x151]
    char v5;  // [bp-0x146]
    char v6;  // [bp-0x137]
    char v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x108]
    char v9;  // [bp-0xf8]
    void* v10;  // [bp-0xe0]
    void* v11;  // [bp-0xd0]
    char v12;  // [bp-0xc8]
    char v13;  // [bp-0xa0]
    char v14;  // [bp-0x9f]
    char v15;  // [bp-0x8f]
    char v16;  // [bp-0x7f]
    char v17;  // [bp-0x70]
    char v18;  // [bp-0x60]
    char v19;  // [bp-0x40]
    unsigned long long v21;  // rax

    v3 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    forc_crypto::args::read_content_filepath_or_stdin(&v13, &(char)v0);
    v19.hash(&v13);
    (char)v0.recover(a1 + 1, &v19);
    if ((char)v0 == 1)
    {
        *((long long *)&a0->field_1[7]) = v1.from();
        a0->field_0 = 6;
        return a0;
    }
    memcpy(&v17, &v6, 16);
    memcpy(&v16, &v5, 16);
    memcpy(&v15, &v3, 16);
    memcpy(&v14, &v0, 16);
    v13 = v1;
    v18.hash(&v13);
    v10 = 0;
    v11 = 0;
    (char)v0.to_vec("PublicKeyAddressforc-plugins/forc-crypto/src/keys/get_public_key.rs", 9);
    v8 = v3;
    memcpy(&v7, &v0, 16);
    v9.spec_to_string(&v13);
    serde_json::value::to_value(&(char)v0, &v9);
    v12.unwrap(&(char)v0, &g_a2ef60);
    (char)v0.insert(&v10, &v7, &v12);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&(char)v0);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    (char)v0.to_vec("Addressforc-plugins/forc-crypto/src/keys/get_public_key.rs", 7);
    v8 = v3;
    memcpy(&v7, &(char)v0, 16);
    v9.spec_to_string(&v18);
    serde_json::value::to_value(&(char)v0, &v9);
    v12.unwrap(&(char)v0, &g_a2ef60);
    (char)v0.insert(&v10, &v7, &v12);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&(char)v0);
    core::ptr::drop_in_place<alloc::string::String>(&v9);
    memcpy(&v12, &v10, 16);
    *((int128_t *)&v2) = *((int128_t *)&v10);
    v4 = 0;
    a0->field_0 = 5;
    v21 = (long long)(&v2)[8];
    *((int128_t *)&a0->field_1[0]) = (int128_t)v0;
    *((unsigned long long *)&a0->field_1[15]) = v21;
    *((unsigned long long *)&a0->field_8) = 0;
    return a0;
}
