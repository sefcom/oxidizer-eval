long long forc_crypto::keys::new_key::handler(struct_0 *a0, unsigned int a1)
{
    int v0;  // [bp-0x588], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x580]
    unsigned long long v2;  // [bp-0x578]
    int v3;  // [bp-0x568], Other Possible Types: char
    unsigned long long v4;  // [bp-0x558]
    int v5;  // [bp-0x548]
    int v6;  // [bp-0x538]
    int v7;  // [bp-0x528]
    int v8;  // [bp-0x518]
    int v9;  // [bp-0x508]
    unsigned long long v10;  // [bp-0x4f8]
    int v11;  // [bp-0x4e8], Other Possible Types: void*
    int v12;  // [bp-0x4d8], Other Possible Types: void*
    void* v13;  // [bp-0x4d8]
    int v14;  // [bp-0x4c8], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x4c0]
    unsigned long long v16;  // [bp-0x4b8]
    void* v17;  // [bp-0x4b0]
    void* v18;  // [bp-0x4a0]
    char v19;  // [bp-0x497]
    char v20;  // [bp-0x490]
    unsigned long v21;  // [bp-0x488]
    void* v22;  // [bp-0x480]
    char v23;  // [bp-0x478]
    int v24;  // [bp-0x460], Other Possible Types: char
    char v25;  // [bp-0x450]
    int v26;  // [bp-0x390], Other Possible Types: char
    int v27;  // [bp-0x380]
    int v28;  // [bp-0x370]
    int v29;  // [bp-0x360]
    int v30;  // [bp-0x350]
    int v31;  // [bp-0x340]
    int v32;  // [bp-0x330]
    unsigned long long v33;  // [bp-0x320]
    int v34;  // [bp-0x318], Other Possible Types: char
    int v35;  // [bp-0x308]
    int v36;  // [bp-0x2f8]
    int v37;  // [bp-0x2e8]
    int v38;  // [bp-0x2d8]
    int v39;  // [bp-0x2c8]
    int v40;  // [bp-0x2b8]
    int v41;  // [bp-0x2a8]
    int v42;  // [bp-0x298]
    unsigned long long v43;  // [bp-0x288]
    int v44;  // [bp-0x280]
    int v45;  // [bp-0x270]
    int v46;  // [bp-0x260]
    int v47;  // [bp-0x250]
    int v48;  // [bp-0x240]
    unsigned long long v49;  // [bp-0x230]
    char v50;  // [bp-0x228]
    char v51;  // [bp-0x1d8]
    char v52;  // [bp-0x198]
    unsigned long long v54;  // rdx

    v52.from_entropy();
    v24.new(&v52);
    v34.from(&v24);
    v51.public_key(&v34);
    v23.spec_to_string(&v34);
    if (a1)
    {
        v12 = v35;
        v11 = v34;
        v24.try_from_bytes(&v11);
        v26.expect(&v24, &g_a2ef90);
        v44 = v28;
        v45 = v29;
        v46 = v30;
        v47 = v31;
        v48 = v32;
        v49 = v33;
        v36 = v26;
        v37 = v27;
        v38 = v44;
        v39 = v45;
        v40 = v46;
        v41 = v47;
        v42 = v48;
        v43 = v49;
        memcpy(&v24, &v36, 208);
        v10 = v33;
        v9 = v32;
        v8 = v31;
        v7 = v30;
        v6 = v29;
        v5 = v28;
        v50.from_public_key(&v5);
        v17 = 0;
        v18 = 0;
        v5.to_vec("secretaddresspeer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 6);
        v2 = (long long)v6;
        v0 = v5;
        serde_json::value::to_value(&v5, &v23);
        v3.unwrap(&v5, &g_a2efa8);
        v5.insert(&v17, &(char)v0, &v3);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v5);
        v5.to_vec("peer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 7);
        v16 = (long long)v6;
        v14 = v5;
        (char)v0.spec_to_string(&v50);
        serde_json::value::to_value(&v5, &(char)v0);
        v3.unwrap(&v5, &g_a2efa8);
        v5.insert(&v17, &(char)v14, &v3);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v5);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        v5.to_vec("type    q", 4);
        v2 = (long long)v6;
        v0 = v5;
        v14 = "p2pforc-plugins/forc-crypto/src/keys/parse_secret.rs";
        v15 = 3;
        serde_json::value::to_value(&v5, &v14);
        v3.unwrap(&v5, &g_a2efa8);
        v5.insert(&v17, &(char)v0, &v3);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v5);
        memcpy(&v20, &v17, 16);
        v22 = 0;
        core::ptr::drop_in_place<libp2p_identity::keypair::Keypair>(&v24);
    }
    else
    {
        v50.owner(&v51);
        v11 = 0;
        v12 = 0;
        v24.to_vec("secretaddresspeer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 6);
        v4 = *((long long *)&v25);
        v3 = v24;
        serde_json::value::to_value(&v24, &v23);
        (char)v5.unwrap(&v24, &g_a2ef78);
        v24.insert(&v11, &v3, &(char)v5);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v24);
        v24.to_vec("addresspeer_idforc-plugins/forc-crypto/src/keys/new_key.rs", 7);
        v4 = *((long long *)&v25);
        v3 = v24;
        serde_json::value::to_value(&v24, &v50, v54);
        (char)v5.unwrap(&v24, &g_a2ef78);
        v24.insert(&v11, &v3, &(char)v5);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v24);
        v24.to_vec("type    q", 4);
        v4 = *((long long *)&v25);
        v3 = v24;
        v0 = "block-production";
        v1 = 16;
        serde_json::value::to_value(&v24, &v0);
        (char)v5.unwrap(&v24, &g_a2ef78);
        v24.insert(&v11, &v3, &(char)v5);
        core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v24);
        memcpy(&v20, &v11, 16);
        v22 = v13;
    }
    a0->field_0 = 5;
    *((int128_t *)&a0->field_1[0]) = *((int128_t *)&v19);
    *((unsigned long *)&a0->field_1[15]) = v21;
    *((void* *)&a0->field_10) = v22;
    core::ptr::drop_in_place<alloc::string::String>(&v23);
    return a0;
}
