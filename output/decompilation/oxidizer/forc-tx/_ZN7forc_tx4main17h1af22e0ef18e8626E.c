fn forc_tx::main() -> long long {
    let v0: u64;  // [bp-0x4e8]
    let v1: u64;  // [bp-0x4e0]
    let v2: iNone;  // [bp-0x4d8], Other Possible Types: u64
    let v3: u128;  // [bp-0x4c8]
    let v4: struct29;  // [bp-0x4a8]
    let v5: Result<struct24, struct16>;  // [bp-0x488], Other Possible Types: u64
    let v6: struct112;  // [bp-0x488]
    let v7: u32;  // [bp-0x484]
    let v8: u64;  // [bp-0x480]
    let v9: u128;  // [bp-0x478]
    let v10: u128;  // [bp-0x468]
    let v11: u128;  // [bp-0x460]
    let v12: struct256;  // [bp-0x2d0]
    let v13: struct56;  // [bp-0x1d0]
    let v14: u8;  // [bp-0x198]
    let v16: u64;  // rbx
    let v17: iNone;  // xmm0
    let v20: u64;  // r15
    let v21: u64;  // rax
    let v22: u64;  // rax

    v12 = forc_tx::Command::parse();
    v5 = forc_tx::<impl core::convert::TryFrom<forc_tx::Transaction> for fuel_tx::transaction::Transaction>::try_from(&v12);
    v16 = v6.field_0;
    v0 = *(&v6.field_8 as &i128);
    v2 = *((&v6.field_16 as &char + 8) as &i128);
    v3 = v11;
    if v16 == 9223372036854775814 {
        v17 = v0;
        v10 = v3;
        *(&v9 as void*) = v2;
        *(&v5 as void*) = v17;
        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v5);
    } else {
        memcpy(&v14, &v6 as u8, 376);
        v13 = struct56 {
            field_0: v16
            field_8: v0
            field_24: v2
            field_40: v3
        };
        if v20 == 0x8000000000000000 {
            v5 = serde_json::ser::to_vec_pretty(&v13);
            match v5 {
                Ok(_) => {
                    v0 = v5 as i64;
                    v1 = v8;
                    v2 = v9;
                    println!("{}", &v0);
                    return 0;
                },
                Err(_) => {
                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v1);
                },
            }
        } else {
            v5 = std::fs::File::create(&v12 as u8);
            match v5 {
                Err(_) => {
                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v8);
                },
                Ok(_) => {
                    v4 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v7 as u64);
                    v22 = serde_json::ser::to_writer_pretty(&v4, &v13);
                    if !v22 {
                        return 0;
                    }
                    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v22);
                },
            }
        }
    }
    return v21;
}
