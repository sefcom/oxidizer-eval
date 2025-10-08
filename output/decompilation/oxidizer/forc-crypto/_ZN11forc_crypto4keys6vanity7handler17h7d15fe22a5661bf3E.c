fn forc_crypto::keys::vanity::handler(a0: i64, a1: void*) -> long long {
    let v0: iNone;  // [sp-0x2d8], Other Possible Types: struct24
    let v1: struct24;  // [bp-0x2d8]
    let v2: u64;  // [bp-0x2c8]
    let v3: struct24;  // [bp-0x2c0], Other Possible Types: u64
    let v4: Result<struct32, struct16>;  // [bp-0x2c0], Other Possible Types: struct48, Option<struct32>, struct24
    let v5: struct88;  // [bp-0x2c0]
    let v6: iNone;  // [bp-0x2b8], Other Possible Types: u64
    let v7: u64;  // [bp-0x2b0]
    let v8: u64;  // [bp-0x2a8]
    let v9: u128;  // [bp-0x2a0]
    let v10: u128;  // [bp-0x290]
    let v11: u64;  // [bp-0x288]
    let v12: u64;  // [bp-0x280]
    let v13: u128;  // [bp-0x278]
    let v14: void*;  // [bp-0x268]
    let v15: void*;  // [sp-0x258]
    let v16: i64;  // [sp-0x250], Other Possible Types: u8
    let v17: struct24;  // [bp-0x250]
    let v18: u128;  // [sp-0x248]
    let v19: u64;  // [bp-0x240]
    let v20: void*;  // [sp-0x238]
    let v21: u64;  // [bp-0x230]
    let v22: u128;  // [bp-0x228]
    let v23: u64;  // [bp-0x218]
    let v24: struct24;  // [sp-0x208]
    let v25: struct48;  // [sp-0x1e8], Other Possible Types: struct32
    let v26: Result<struct64, struct32>;  // [bp-0x1e8]
    let v27: u64;  // [bp-0x1d0]
    let v28: u128;  // [bp-0x1c8]
    let v29: u128;  // [bp-0x1b8]
    let v30: u128;  // [bp-0x1a8]
    let v31: void*;  // [bp-0x198]
    let v32: u128;  // [bp-0x188]
    let v33: core::fmt::rt::Argument;  // [bp-0x180]
    let v34: core::fmt::Arguments;  // [bp-0x178]
    let v35: struct24;  // [bp-0x168]
    let v36: u64;  // [bp-0x150]
    let v37: u128;  // [bp-0x148]
    let v38: u64;  // [bp-0x140]
    let v39: u128;  // [bp-0x138]
    let v40: u64;  // [bp-0x128]
    let v41: u64;  // [bp-0x118]
    let v42: u64;  // [bp-0x110]
    let v43: u128;  // [bp-0x108]
    let v44: u64;  // [bp-0x108]
    let v45: u128;  // [bp-0x100]
    let v46: iNone;  // [bp-0xf8]
    let v47: iNone;  // [bp-0xe8]
    let v48: u64;  // [bp-0xd8]
    let v49: struct16;  // [bp-0xd0]
    let v50: struct24;  // [bp-0xc0]
    let v51: iNone;  // [bp-0xa8]
    let v52: u64;  // [bp-0x98]
    let v53: u64;  // [bp-0x90]
    let v54: iNone;  // [bp-0x88]
    let v55: iNone;  // [bp-0x78]
    let v56: u128;  // [bp-0x68]
    let v57: u64;  // [bp-0x60]
    let v58: u64;  // [bp-0x58]
    let v59: u64;  // [bp-0x50]
    let v60: iNone;  // [bp-0x48]
    let v61: u64;  // [bp-0x38]
    let v63: u64;  // rax
    let v64: u64;  // r13
    let v65: u32;  // ebp
    let v66: u64;  // r14
    let v67: u64;  // r15
    let v70: Result<struct24, struct16>;  // rsi
    let v71: u32;  // edx
    let v72: iNone;  // xmm0
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm1
    let v76: u64;  // rax
    let v77: i8;  // r15b
    let v78: u8;  // r12b
    let v79: u64;  // rax
    let v80: iNone;  // xmm0

    v63 = forc_crypto::keys::vanity::Arg::validate(a1);
    v64 = a1 + 64;
    if v63 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v63
        };
    }
    v31 = a1[32] as i64;
    v30 = a1[16] as i128;
    v34 = a1[56] as i64;
    v32 = a1[40] as i128;
    v40 = *((v64 + 16) as &i64);
    v39 = *(v64 as &i128);
    v65 = a1[112] as i8;
    v66 = *(a1 as &i64);
    v67 = a1[8] as i64;
    v23 = a1[104] as i64;
    v22 = a1[88] as i128;
    v21 = v39;
    if (((0 ^ v39 as i64) & (0 ^ -(v39 as i64))) >> 63) as char {
        v4 = forc_crypto::keys::vanity::HexMatcher::new(v70, v31, v33, v34);
        if v4.field_0 as i64 == 0x8000000000000000 {
            return struct16 {
                field_0: 6
                padding_1: <UNKNOWN>
                field_8: v6
            };
        }
        v46 = *(&v4.field_32 as &i128);
        v43 = *(&v4.field_16 as &i128);
        v41 = v4.field_0;
        v42 = v6;
    } else {
        v4 = forc_crypto::keys::vanity::RegexMatcher::new(a1[72] as i64, a1[80] as i64);
        match v4 {
            Err(_) => {
                return struct16 {
                    field_0: 6
                    padding_1: <UNKNOWN>
                    field_8: v6
                };
            },
            Ok(_) => {
                v45 = *((&v4 as &char + 16) as &i128) as u128;
                v42 = v4 as i64;
                v44 = v6;
                v41 = 0x8000000000000000;
            },
        }
    }
    println!("Starting to generate vanity address...");
    v49 = struct16 {
        field_0: std::time::Instant::now()
        field_8: v71
    };
    v72 = *(&v41 as &i128);
    v25 = struct48 {
        field_0: v72
        field_16: v43
        field_32: v46
    };
    v5 = forc_crypto::keys::vanity::find_vanity_address_with_timeout(&v25, v65, v66, v67);
    if v12 == 9223372036854775809 {
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: v5.field_0
        };
    }
    v58 = v11;
    v73 = v5.field_8;
    v74 = v5.field_24;
    v56 = v5.field_40;
    v55 = v74;
    v54 = v73;
    v37 = v13;
    v59 = v5.field_0;
    v60 = v54;
    v61 = v55 as i64;
    v52 = v57;
    v53 = v58;
    v51 = (&v55)[8] as i128;
    v36 = v12;
    v16 = BinaryOp AddV;
    println!("Successfully found vanity address in {} seconds.\n", &v16);
    v17 = <T as alloc::string::SpecToString>::spec_to_string(&v59);
    v26 = fuels_core::types::checksum_address::checksum_encode(*((&v17.field_0 as &char + 8) as &i64), v19);
    v76 = v26 as i64;
    v0 = *((&v26 as &char + 8) as &i128);
    v2 = v27;
    v77 = v76 == 12;
    if v76 != 12 {
        v10 = v29;
        v9 = v28;
        v6 = v0;
        v8 = v2;
        v3 = v76;
        return struct16 {
            field_0: 6
            padding_1: <UNKNOWN>
            field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v3)
        };
    }
    v35 = v1;
    if v12 == 0x8000000000000000 {
        v14 = 0;
        v15 = 0;
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Address");
        v0 = v3;
        serde_json::value::to_value(&v4, &v35);
        v25 = core::result::Result<T,E>::unwrap(&v4, "forc-plugins/forc-crypto/src/keys/vanity.rs");
        v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v14, &v0, &v25);
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("PrivateKey");
        v24 = v3;
        hex::encode(&v0, &v51, 32);
        serde_json::value::to_value(&v4, &v0);
        v25 = core::result::Result<T,E>::unwrap(&v4, "forc-plugins/forc-crypto/src/keys/vanity.rs");
        v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v14, &v24, &v25);
        v18 = *(&v14 as &i128);
        v20 = 0;
        v16 = 5;
        v78 = 1;
        if v22 as i64 != 0x8000000000000000 {
            goto LABEL_7fadb7;
        }
    } else {
        v48 = v38;
        v47 = *(&v36 as &i128);
        v14 = 0;
        v15 = 0;
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Address");
        v0 = v3;
        serde_json::value::to_value(&v4, &v35);
        v25 = core::result::Result<T,E>::unwrap(&v4, "forc-plugins/forc-crypto/src/keys/vanity.rs");
        v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v14, &v0, &v25);
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("PrivateKey");
        v24 = v3;
        hex::encode(&v0, &v51, 32);
        serde_json::value::to_value(&v4, &v0);
        v25 = core::result::Result<T,E>::unwrap(&v4, "forc-plugins/forc-crypto/src/keys/vanity.rs");
        v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v14, &v24, &v25);
        v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Mnemonic");
        v0 = v3;
        serde_json::value::to_value(&v4, &v47);
        v25 = core::result::Result<T,E>::unwrap(&v4, "forc-plugins/forc-crypto/src/keys/vanity.rs");
        v4 = alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v14, &v0, &v25);
        v18 = *(&v14 as &i128);
        v20 = 0;
        v16 = 5;
        if v22 as i64 != 0x8000000000000000 {
LABEL_7fadb7:
            serde_json::ser::to_vec_pretty(&v3, &v16);
            v50 = struct24 {
                field_0: "Successfully found vanity address in "
                field_8: 2
                field_16: v7
            };
            v79 = std::fs::write(&v22, &v50);
            if v79 {
                return struct16 {
                    field_0: 6
                    padding_1: <UNKNOWN>
                    field_8: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v79)
                };
            }
        }
    }
    v80 = v17.field_0;
    return struct32 {
        field_0: v80
        field_16: *(&v19 as &i128)
    };
}
