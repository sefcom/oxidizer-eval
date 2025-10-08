long long forc_crypto::keys::parse_secret::handler(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x408], Other Possible Types: void*, char
    void* v1;  // [bp-0x3f8], Other Possible Types: unsigned long long
    int v2;  // [bp-0x3e8], Other Possible Types: char, unsigned long
    int v3;  // [bp-0x3e7]
    unsigned long long v4;  // [bp-0x3e0]
    int v5;  // [bp-0x3d8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x3c8]
    unsigned long long v7;  // [bp-0x3b8]
    int v8;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x3a0]
    unsigned long long v10;  // [bp-0x398]
    void* v11;  // [bp-0x390]
    void* v12;  // [bp-0x380]
    int v13;  // [bp-0x378]
    int v14;  // [bp-0x368]
    int v15;  // [bp-0x358]
    int v16;  // [bp-0x348]
    int v17;  // [bp-0x338]
    unsigned long long v18;  // [bp-0x328]
    char v19;  // [bp-0x317]
    char v20;  // [bp-0x310]
    unsigned long v21;  // [bp-0x308]
    void* v22;  // [bp-0x300]
    int v23;  // [bp-0x2f8]
    int v24;  // [bp-0x2e9], Other Possible Types: char
    int v25;  // [bp-0x2d0], Other Possible Types: char
    int v26;  // [bp-0x2c0]
    int v27;  // [bp-0x2b0]
    int v28;  // [bp-0x2a0]
    int v29;  // [bp-0x290]
    int v30;  // [bp-0x280]
    int v31;  // [bp-0x270]
    unsigned long long v32;  // [bp-0x260]
    char v33;  // [bp-0x258]
    char v34;  // [bp-0x257]
    char v35;  // [bp-0x256]
    unsigned long long v36;  // [bp-0x248]
    char v37;  // [bp-0x247]
    char v38;  // [bp-0x188]
    char v39;  // [bp-0x187]
    int v40;  // [bp-0x178]
    int v41;  // [bp-0x168]
    int v42;  // [bp-0x158]
    int v43;  // [bp-0x148]
    int v44;  // [bp-0x138]
    int v45;  // [bp-0x128]
    int v46;  // [bp-0x118]
    int v47;  // [bp-0x108]
    unsigned long long v48;  // [bp-0xf8]
    int v49;  // [bp-0xf0]
    int v50;  // [bp-0xe0]
    int v51;  // [bp-0xd0]
    int v52;  // [bp-0xc0]
    int v53;  // [bp-0xb0]
    unsigned long long v54;  // [bp-0xa0]
    char v55;  // [bp-0x98]
    char v57;  // al

    v33.from_str(a1->field_8, a1->field_10);
    v57 = v34;
    if (v33 == 1)
    {
        *((long long *)&a0->field_1[7]) = v57.from();
        a0->field_0 = 6;
    }
    else
    {
        memcpy(&v24, &v37, 16);
        *((int128_t *)&v23) = *((int128_t *)&v35);
        v38 = v57;
        v40 = v24;
        memcpy(&v39, &(char)v23, 16);
        if (a1->field_18 == 1)
        {
            v2 = v57;
            *((int128_t *)&v3) = (int128_t)v23;
            v5 = v24;
            v33.try_from_bytes(&v2);
            v25.expect(&v33, &g_a2efd8);
            v49 = v27;
            v50 = v28;
            v51 = v29;
            v52 = v30;
            v53 = v31;
            v54 = v32;
            v41 = v25;
            v42 = v26;
            v43 = v49;
            v44 = v50;
            v45 = v51;
            v46 = v52;
            v47 = v53;
            v48 = v54;
            memcpy(&v33, &v41, 208);
            v18 = v32;
            v17 = v31;
            v16 = v30;
            v15 = v29;
            v14 = v28;
            v13 = v27;
            v55.from_public_key(&v13);
            v11 = 0;
            v12 = 0;
            v13.to_vec("peer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 7);
            v10 = (long long)v14;
            v8 = v13;
            v0.spec_to_string(&v55);
            serde_json::value::to_value(&v13, &v0);
            v6.unwrap(&v13, &g_a2eff0);
            v13.insert(&v11, &(char)v8, &v6);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v13);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v13.to_vec("type    q", 4);
            v1 = (long long)v14;
            v0 = v13;
            v8 = "p2pforc-plugins/forc-crypto/src/keys/parse_secret.rs";
            v9 = 3;
            serde_json::value::to_value(&v13, &v8);
            v6.unwrap(&v13, &g_a2eff0);
            v13.insert(&v11, &v0, &v6);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v13);
            memcpy(&v20, &v11, 16);
            v22 = 0;
            core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(&v33);
        }
        else
        {
            v33.public_key(&v38);
            v55.owner(&v33);
            v0 = 0;
            v1 = 0;
            v33.to_vec("addresspeer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 7);
            v5 = v36;
            *((int128_t *)&v2) = *((int128_t *)&v33);
            v6.spec_to_string(&v55);
            serde_json::value::to_value(&v33, &v6);
            (char)v13.unwrap(&v33, &g_a2efc0);
            v33.insert(&v0, &(char)v2, &(char)v13);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v33);
            core::ptr::drop_in_place<alloc::string::String>(&v6);
            v33.to_vec("type    q", 4);
            v7 = v36;
            memcpy(&v6, &v33, 16);
            v2 = "block-production";
            v4 = 16;
            serde_json::value::to_value(&v33, &(char)v2);
            (char)v13.unwrap(&v33, &g_a2efc0);
            v33.insert(&v0, &v6, &(char)v13);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v33);
            memcpy(&v20, &v0, 16);
            v22 = 0;
        }
        a0->field_0 = 5;
        *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v19);
        *((unsigned long *)&a0->field_1[15]) = v21;
        *((unsigned long long *)&a0->field_8) = 0;
    }
    core::ptr::drop_in_place<forc_crypto::keys::parse_secret::Arg>(a1);
    return a0;
}
