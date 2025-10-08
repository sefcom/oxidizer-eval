fn forc_crypto::keys::vanity::generate_wallet(a0: i64, a1: u32) -> long long {
    let v0: u64;  // [bp-0x150]
    let v1: u64;  // [bp-0x148]
    let v2: u128;  // [bp-0x148]
    let v3: u128;  // [bp-0x140]
    let v4: u64;  // [bp-0x138]
    let v5: u128;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x118]
    let v8: u128;  // [bp-0x108]
    let v9: struct32;  // [bp-0x108]
    let v10: u128;  // [bp-0xf9]
    let v11: u128;  // [bp-0xf8]
    let v12: struct33;  // [bp-0xe8], Other Possible Types: u64
    let v13: struct32;  // [bp-0xe8]
    let v14: u8;  // [bp-0xe7]
    let v15: u128;  // [bp-0xe0]
    let v16: u128;  // [bp-0xd8]
    let v17: struct32;  // [bp-0xd0]
    let v18: iNone;  // [bp-0xc8], Other Possible Types: struct32
    let v19: iNone;  // [bp-0xb8], Other Possible Types: struct24
    let v20: iNone;  // [bp-0xa8]
    let v21: u64;  // [bp-0x98]
    let v22: Option<struct25>;  // [bp-0x88], Other Possible Types: struct32
    let v23: struct64;  // [bp-0x88]
    let v24: u64;  // [bp-0x70]
    let v25: struct32;  // [bp-0x68]
    let v26: u128;  // [bp-0x58]
    let v27: struct17;  // [bp-0x48]
    let v28: iNone;  // [bp-0x38]
    let v29: Option<struct32>;  // [bp-0x28]
    let v31: u64;  // rax
    let v32: struct24;  // al
    let v33: u128;  // xmm0
    let v34: u64;  // rcx
    let v35: iNone;  // xmm0

    v0 = rand::rngs::thread::thread_rng();
    if a1 {
        v22 = fuels_accounts::signers::private_key::generate_mnemonic_phrase(v0);
        v31 = v22 as i64;
        v2 = *((&v22 as &char + 8) as &i128);
        v4 = v24;
        if v31 != 12 {
            v19 = v26;
            v18 = v25;
            v15 = v2;
            v17 = v4;
            v12 = v31;
            return struct32 {
                field_0: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v12 as u8)
                padding_8: <UNKNOWN>
                field_64: <UNKNOWN>
            };
        }
        v5 = v2;
        v7 = v4;
        v12 = fuel_crypto::secp256::secret::SecretKey::new_from_mnemonic_phrase_with_path(v6, v4, "m/44'/1179993420'/0'/0/0");
        v32 = v14;
        if v12.field_0 == 1 {
            return struct32 {
                field_0: anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v14)
                padding_8: <UNKNOWN>
                field_64: <UNKNOWN>
            };
        }
        v33 = *(&(&v12.field_0)[2] as &i128);
        v10 = *((&v12.field_1 as &char + 9) as &i128);
        v8 = v33;
        v34 = v5;
        v29 = *((&v5 as &char + 8) as &i128);
    } else {
        v13 = secp256k1::key::SecretKey::new(&v0);
        v22 = <fuel_crypto::secp256::secret::SecretKey as core::convert::From<secp256k1::key::SecretKey>>::from(&v13);
        v32 = v22.field_0 as i8;
        v8 = *((&v22.field_0 as &char + 1) as &i128);
        v10 = v22.field_16;
        v34 = 0x8000000000000000;
    }
    v27 = struct17 {
        field_0: v32
        field_1: v8
    };
    v1 = v34;
    *(&v3 as &Option<struct32>) = v29;
    <fuel_crypto::secp256::public::PublicKey as core::convert::From<&fuel_crypto::secp256::secret::SecretKey>>::from(&v23, &v27);
    v9 = fuel_crypto::secp256::public::PublicKey::hash(&v23);
    v35 = v9.field_0;
    v16 = v11;
    *(&v12 as void*) = v35;
    v20 = *(&v1 as &i128);
    v21 = v4;
    v18 = *(&v27.field_0 as &i128);
    v19 = v28;
    return struct88 {
        field_0: v35
        field_16: v11
        field_32: v18
        field_48: v28
        field_64: v20
        field_80: v4
    };
}
