fn fuel_core_keygen::new_key(a0: &struct154, a1: i32) -> u64 {
    let v0: struct32;  // [bp-0x568]
    let v1: struct32;  // [bp-0x568]
    let v2: iNone;  // [bp-0x558]
    let v3: iNone;  // [bp-0x548]
    let v4: iNone;  // [bp-0x538]
    let v5: struct120;  // [bp-0x520]
    let v6: iNone;  // [bp-0x510]
    let v7: iNone;  // [bp-0x500]
    let v8: iNone;  // [bp-0x4f0]
    let v9: iNone;  // [bp-0x4e0]
    let v10: iNone;  // [bp-0x4d0]
    let v11: iNone;  // [bp-0x4c0]
    let v12: u64;  // [bp-0x4b0]
    let v13: struct32;  // [bp-0x4a8]
    let v14: struct96;  // [bp-0x488], Other Possible Types: u128
    let v15: u128;  // [bp-0x478]
    let v16: u128;  // [bp-0x468]
    let v17: u128;  // [bp-0x458]
    let v18: u128;  // [bp-0x448]
    let v19: struct80;  // [bp-0x3b8]
    let v20: iNone;  // [bp-0x3a8]
    let v21: iNone;  // [bp-0x398]
    let v22: iNone;  // [bp-0x388]
    let v23: u128;  // [bp-0x378]
    let v24: u128;  // [bp-0x368]
    let v25: iNone;  // [bp-0x358]
    let v26: iNone;  // [bp-0x348]
    let v27: iNone;  // [bp-0x338]
    let v28: iNone;  // [bp-0x328]
    let v29: iNone;  // [bp-0x318]
    let v30: iNone;  // [bp-0x308]
    let v31: u64;  // [bp-0x2f8]
    let v32: iNone;  // [bp-0x2f0]
    let v33: iNone;  // [bp-0x2e0]
    let v34: iNone;  // [bp-0x2d0]
    let v35: iNone;  // [bp-0x2c0]
    let v36: iNone;  // [bp-0x2b0]
    let v37: u64;  // [bp-0x2a0]
    let v38: struct32;  // [bp-0x290]
    let v39: u64;  // [bp-0x290]
    let v40: Result<struct120, struct40>;  // [bp-0x290]
    let v41: struct64;  // [bp-0x1a8]
    let v42: u8;  // [bp-0x168]
    let v44: u8;  // al
    let v45: u64;  // rdx
    let v46: u8;  // cl
    let v47: iNone;  // xmm1
    let v48: iNone;  // xmm2
    let v49: iNone;  // xmm3
    let v50: Result<struct24, struct9>;  // xmm1

    rand_core::SeedableRng::from_entropy(&v42);
    v38 = secp256k1::key::SecretKey::new(&v42);
    v0 = <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(&v38);
    v41 = fuel_crypto::secp256::secret::SecretKey::public_key(&v0);
    if a1 {
        v13 = v1;
        v40 = libp2p_identity::secp256k1::SecretKey::try_from_bytes(&v13);
        v5 = core::result::Result<T,E>::expect(&v40, "crates/keygen/src/lib.rs");
        v32 = v7;
        v33 = v8;
        v34 = v9;
        v35 = v10;
        v36 = v11;
        v37 = v12;
        v24 = v5.field_0;
        v25 = v6;
        v26 = v32;
        v27 = v33;
        v28 = v34;
        v29 = v35;
        v30 = v36;
        v31 = v37;
        v39 = 1;
        memcpy(&v40 as u8, &v24, 208);
        v14 = struct96 {
            field_0: 1
            field_8: v7
            field_24: v8
            field_40: v9
            field_56: v10
            field_72: v11
            field_88: v12
        };
        v19 = libp2p_identity::peer_id::PeerId::from_public_key(&v14);
        v14 = v19.field_0;
        *(&v15 as void*) = v20;
        *(&v16 as void*) = v21;
        *(&v17 as void*) = v22;
        v18 = v23;
        v3 = v0.field_0;
        v4 = v2;
    } else {
        fuel_tx::transaction::types::input::Input::owner(&v38, &v41);
        v4 = v2;
        v3 = v0.field_0;
        v46 = 1;
        v45 = 0;
    }
    v47 = v15;
    v48 = v16;
    v49 = v17;
    v50 = *((&v40 as &char + 16) as &i128);
    return struct168 {
        field_0: v45
        field_8: v14
        field_24: v47
        field_40: v48
        field_56: v49
        field_72: v18
        field_88: v3
        field_104: v4
        field_120: v46
        field_121: <UNKNOWN>
        field_137: <UNKNOWN>
        field_153: <UNKNOWN>
    };
}
