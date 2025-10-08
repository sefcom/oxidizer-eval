fn fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::OpaqueTransaction> for fuel_tx::transaction::Transaction>::try_from(a0: void*, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x1d8]
    let v1: Result<struct432, struct32>;  // [bp-0x1c8]
    let v2: u128;  // [bp-0x1c0]
    let v3: u64;  // [bp-0x18]
    let v5: u64;  // rbx

    v3 = v5;
    v0 = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64)
    };
    v1 = fuel_types::canonical::Deserialize::decode(&v0);
    match v1 {
        Ok(_) => {
            memcpy(a0, &v1, 432);
        },
        Err(_) => {
            return struct40 {
                field_0: 9223372036854775814
                field_8: 6
                field_16: v2
                field_32: *((&v1 as &char + 24) as &i64)
            };
        },
    }
}
