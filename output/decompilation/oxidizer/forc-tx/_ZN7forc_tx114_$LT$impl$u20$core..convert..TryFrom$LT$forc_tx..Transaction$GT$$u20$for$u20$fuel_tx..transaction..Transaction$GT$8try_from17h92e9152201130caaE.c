fn forc_tx::<impl core::convert::TryFrom<forc_tx::Transaction> for fuel_tx::transaction::Transaction>::try_from(a1: i64) -> : struct112 {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0x718]
    let v1: iNone;  // [bp-0x708]
    let v2: u64;  // [bp-0x6f8]
    let v3: iNone;  // [bp-0x6e8]
    let v4: iNone;  // [bp-0x6d8]
    let v5: u64;  // [bp-0x6c8]
    let v6: iNone;  // [bp-0x6b8]
    let v7: iNone;  // [bp-0x6a8]
    let v8: iNone;  // [bp-0x698]
    let v9: u64;  // [bp-0x688]
    let v10: Result<struct368, struct48>;  // [bp-0x678], Other Possible Types: struct432
    let v11: u64;  // [bp-0x670]
    let v12: u64;  // [bp-0x650]
    let v13: iNone;  // [bp-0x4c8]
    let v14: iNone;  // [bp-0x4b8]
    let v15: u64;  // [bp-0x4a8]
    let v16: u8;  // [bp-0x4a0]
    let v17: iNone;  // [bp-0x360]
    let v18: iNone;  // [bp-0x350]
    let v19: iNone;  // [bp-0x340]
    let v20: i8;  // [bp-0x330]
    let v21: u8;  // [bp-0x320]
    let v22: u8;  // [bp-0x1e0]
    let v23: u8;  // [bp-0x100]
    let v25: u64;  // rsi
    let v26: u64;  // r12

    v25 = a1 + 8;
    if *(a1 as &i32) == 1 {
        memcpy(&v23, v25, 224);
        v10 = forc_tx::<impl core::convert::TryFrom<forc_tx::Script> for fuel_tx::transaction::types::chargeable_transaction::ChargeableTransaction<fuel_tx::transaction::types::script::ScriptBody,fuel_tx::transaction::types::script::ScriptMetadata>>::try_from(&v23);
        v0 = *((&v10 as &char + 8) as &i128);
        v1 = *((&v10 as &char + 24) as &i128);
        v2 = v12;
        match v10 {
            Err(_) => {
                *((a0 + 48) as &u64) = v2;
                *((a0 + 32) as void*) = v1;
                *((a0 + 16) as void*) = v0;
                *((a0 + 8) as &i64) = 1;
            },
            Ok(_) => {
                memcpy(&v21, &v10 as u8, 320);
                v3 = v0;
                v4 = v1;
                v5 = v2;
                v26 = 0x8000000000000000;
            },
        }
    } else {
        memcpy(&v22, v25, 224);
        v10 = forc_tx::<impl core::convert::TryFrom<forc_tx::Create> for fuel_tx::transaction::types::chargeable_transaction::ChargeableTransaction<fuel_tx::transaction::types::create::CreateBody,fuel_tx::transaction::types::create::CreateMetadata>>::try_from(&v22);
        v0 = *(&(&v10)[2] as &i128);
        v1 = *(&(&v10)[4] as &i128);
        if v10.field_0 == 0x8000000000000000 {
            return struct56 {
                field_0: 9223372036854775814
                field_8: 0
                field_16: v11
                field_24: v0
                field_40: v1
            };
        }
        memcpy(&v15, &v10 as u8, 384);
        v13 = v0;
        v14 = v1;
        v3 = v13;
        v4 = v14;
        v5 = v15;
        memcpy(&v21, &v16, 320);
        v6 = v17;
        v7 = v18;
        v8 = v19;
        v9 = *(&v20 as &i64);
    }
    return struct256 {
        field_0: v26
        field_8: v11
        field_16: v3
        field_32: v4
        field_48: v5
        padding_56: <UNKNOWN>
        field_376: <UNKNOWN>
        padding_112: <UNKNOWN>
        field_392: <UNKNOWN>
        padding_168: <UNKNOWN>
        field_408: <UNKNOWN>
        padding_216: <UNKNOWN>
        field_424: <UNKNOWN>
    };
}
