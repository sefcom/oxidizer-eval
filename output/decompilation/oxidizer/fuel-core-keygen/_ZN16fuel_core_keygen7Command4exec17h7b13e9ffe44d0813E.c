fn fuel_core_keygen::Command::exec(a0: i64, a1: void*) -> long long {
    let v0: struct33;  // [bp-0x200], Other Possible Types: struct9
    let v1: u32;  // [bp-0x1fc]
    let v2: u64;  // [bp-0x1f8]
    let v3: u128;  // [bp-0x1f0]
    let v4: Result<struct122, struct16>;  // [bp-0x1e0], Other Possible Types: struct16, u8
    let v5: u64;  // [bp-0x1d8]
    let v6: u128;  // [bp-0x1d0]
    let v7: u128;  // [bp-0x1c0]
    let v8: u128;  // [bp-0x1b0]
    let v9: u128;  // [bp-0x1a0]
    let v10: u128;  // [bp-0x190]
    let v11: u128;  // [bp-0x180]
    let v12: struct128;  // [bp-0x140]
    let v13: struct16;  // [bp-0xc0]
    let v14: u8;  // [bp-0xb0]
    let v21: u64;  // rax
    let v22: u64;  // rcx
    let v23: u8;  // dl
    let v24: u64;  // rax
    let v26: u32;  // ecx

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        fuel_core_keygen::new_key(&v4, a1[9] as i8);
        if v4 == 2 {
            return struct16 {
                field_0: v5
                padding_8: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        }
        memcpy(&v14, &v6, 144);
        v13 = v4;
        v0 = serde_json::value::to_value(&v13);
        if v0.field_0 != 6 {
            return struct48 {
                field_0: v21 as u8
                field_1: v1
                field_4: v22
                field_8: v3
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
            };
        }
    } else {
        v4 = fuel_core_keygen::parse_secret(a1[25] as i8, a1[8] as i64, a1[16] as i64);
        v24 = v5;
        match v4 {
            Err(_) => {
                return struct16 {
                    field_0: v24
                    padding_8: <UNKNOWN>
                    field_32: <UNKNOWN>
                };
            },
            Ok(_) => {
                v12 = struct128 {
                    field_0: v4 as i64
                    field_8: v24
                    field_16: v6
                    field_32: v7
                    field_48: v8
                    field_64: v9
                    field_80: v10
                    field_96: v11
                    field_112: *((&v4 as &char + 112) as &i128)
                };
                v0 = serde_json::value::to_value(&v12);
                if v0.field_0 as i8 != 6 {
                    v26 = *((&v0.field_0 as &char + 1) as &i32);
                    *((a0 + 4) as &u32) = v1;
                    *((a0 + 1) as &u32) = v26;
                    *((a0 + 16) as &u128) = v3;
                }
            },
        }
    }
    anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v2);
    return struct16 {
        field_0: v24
        padding_8: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
