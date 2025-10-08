fn fuel_core_keygen::parse_secret(a1: i8, a2: i64, a3: i64) -> Result<struct122, struct16> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x3f0], Other Possible Types: u32
    let v1: u32;  // [bp-0x3ed]
    let v2: struct32;  // [bp-0x3e8]
    let v3: iNone;  // [bp-0x3c8]
    let v4: u8;  // [bp-0x3b8]
    let v5: u32;  // [bp-0x3a8]
    let v6: u32;  // [bp-0x3a5]
    let v7: u64;  // [bp-0x3a1]
    let v8: iNone;  // [bp-0x399]
    let v9: u8;  // [bp-0x389]
    let v10: iNone;  // [bp-0x388]
    let v11: u8;  // [bp-0x378]
    let v12: struct2;  // [bp-0x368]
    let v13: struct96;  // [bp-0x368]
    let v14: u128;  // [bp-0x368]
    let v15: u32;  // [bp-0x364]
    let v16: i8;  // [bp-0x360]
    let v17: core::fmt::rt::Argument;  // [bp-0x358], Other Possible Types: char
    let v18: core::fmt::Arguments;  // [bp-0x348], Other Possible Types: u8
    let v19: u128;  // [bp-0x338]
    let v20: u128;  // [bp-0x328]
    let v21: struct120;  // [bp-0x2a0]
    let v22: iNone;  // [bp-0x290]
    let v23: iNone;  // [bp-0x280]
    let v24: iNone;  // [bp-0x270]
    let v25: iNone;  // [bp-0x260]
    let v26: iNone;  // [bp-0x250]
    let v27: iNone;  // [bp-0x240]
    let v28: u64;  // [bp-0x230]
    let v29: struct80;  // [bp-0x228]
    let v30: core::fmt::rt::Argument;  // [bp-0x218]
    let v31: core::fmt::Arguments;  // [bp-0x208]
    let v32: iNone;  // [bp-0x1f8]
    let v33: u128;  // [bp-0x1e8]
    let v34: u128;  // [bp-0x1d8]
    let v35: iNone;  // [bp-0x1c8]
    let v36: iNone;  // [bp-0x1b8]
    let v37: iNone;  // [bp-0x1a8]
    let v38: iNone;  // [bp-0x198]
    let v39: iNone;  // [bp-0x188]
    let v40: iNone;  // [bp-0x178]
    let v41: u64;  // [bp-0x168]
    let v42: iNone;  // [bp-0x160]
    let v43: iNone;  // [bp-0x150]
    let v44: iNone;  // [bp-0x140]
    let v45: iNone;  // [bp-0x130]
    let v46: iNone;  // [bp-0x120]
    let v47: u64;  // [bp-0x110]
    let v48: Result<struct120, struct40>;  // [bp-0x100], Other Possible Types: struct40, struct64
    let v49: u64;  // [bp-0x100]
    let v51: u64;  // rax
    let v52: u64;  // rdx
    let v53: u8;  // al
    let v54: u8;  // cl
    let v55: core::fmt::rt::Argument;  // xmm1
    let v56: core::fmt::Arguments;  // xmm2
    let v57: iNone;  // xmm3
    let v58: iNone;  // xmm1

    v12 = <fuel_crypto::secp256::secret::SecretKey as core::str::traits::FromStr>::from_str(a2, a3);
    if v12.field_0 as i8 == 1 {
        v48 = struct40 {
            field_0: "invalid secret key"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        return struct16 {
            field_0: 2
            field_8: anyhow::__private::format_err(&v48)
        };
    }
    v1 = v15;
    v0 = *(&v12 as &i32);
    v51 = *(&v16 as &i64);
    v10 = *(&v17 as &i128);
    v11 = v18;
    v3 = *(&v17 as &i128);
    v4 = v18;
    v6 = v1;
    v5 = v0;
    v7 = v51;
    v9 = v11;
    v8 = v10;
    if a1 {
        v2 = v0;
        v48 = libp2p_identity::secp256k1::SecretKey::try_from_bytes(&v2);
        v21 = core::result::Result<T,E>::expect(&v48, "crates/keygen/src/lib.rs");
        v42 = v23;
        v43 = v24;
        v44 = v25;
        v45 = v26;
        v46 = v27;
        v47 = v28;
        v34 = v21.field_0;
        v35 = v22;
        v36 = v42;
        v37 = v43;
        v38 = v44;
        v39 = v45;
        v40 = v46;
        v41 = v47;
        v49 = 1;
        memcpy(&v48 as u8, &v34, 208);
        v13 = struct96 {
            field_0: 1
            field_8: v23
            field_24: v24
            field_40: v25
            field_56: v26
            field_72: v27
            field_88: v28
        };
        v29 = libp2p_identity::peer_id::PeerId::from_public_key(&v13);
        v14 = v29.field_0;
        v17 = v30;
        v18 = v31;
        *(&v19 as void*) = v32;
        v20 = v33;
    } else {
        v48 = fuel_crypto::secp256::secret::SecretKey::public_key(&v5);
        fuel_tx::transaction::types::input::Input::owner(&v2 as u8, &v48);
    }
    v55 = v17.ty;
    v56 = *(&v18.pieces.ptr as &i128);
    v57 = v19;
    v58 = v2.field_16;
    return struct136 {
        field_0: v52
        field_8: v14
        field_24: v55
        field_40: v56
        field_56: v57
        field_72: v20
        field_88: v54
        field_89: <UNKNOWN>
        field_105: <UNKNOWN>
        field_121: <UNKNOWN>
    };
}
