fn fuel_core_client::client::FuelClient::decode_response(a0: i64, a1: void*, a2: i64) -> int {
    let v0: u128;  // [bp-0xf8]
    let v1: u128;  // [bp-0xe8]
    let v2: u128;  // [bp-0xd8]
    let v3: u128;  // [bp-0xc8]
    let v4: u128;  // [bp-0xb8]
    let v5: u128;  // [bp-0xa8]
    let v6: u128;  // [bp-0x98]
    let v7: u128;  // [bp-0x88]
    let v8: u128;  // [bp-0x78]
    let v9: u64;  // [bp-0x68]
    let v10: u8;  // [bp-0x58]
    let v11: struct32;  // [bp-0x40]
    let v13: u64;  // rax
    let v14: u64;  // r14
    let v15: u128;  // xmm0
    let v16: u128;  // xmm1
    let v17: u128;  // xmm2

    fuel_core_client::client::FuelClient::update_chain_state_info(a1, a2);
    if *((a2 + 152) as &i32) != 2 && *((a2 + 184) as &i8) != 2 && (*((a2 + 184) as &i8) & 1) {
        return struct16 {
            field_0: 9223372036854775817
            field_8: std::io::error::Error::new(40, "The required block height was not met")
        };
    }
    v7 = *((a2 + 136) as &i128);
    v6 = *((a2 + 120) as &i128);
    v5 = *((a2 + 104) as &i128);
    v4 = *((a2 + 88) as &i128);
    v3 = *((a2 + 72) as &i128);
    v2 = *((a2 + 56) as &i128);
    v1 = *((a2 + 40) as &i128);
    v0 = *((a2 + 24) as &i128);
    v8 = *(a2 as &i128);
    v9 = *((a2 + 16) as &i64);
    if v0 as i64 != 9223372036854775817 {
        v14 = a2 + 24;
        v15 = *(v14 as &i128);
        v16 = *((v14 + 16) as &i128);
        v17 = *((v14 + 32) as &i128);
        return struct128 {
            field_0: v15
            field_16: v16
            field_32: v17
            field_48: *((v14 + 48) as &i128)
            field_64: *((v14 + 64) as &i128)
            field_80: *((v14 + 80) as &i128)
            field_96: *((v14 + 96) as &i128)
            field_112: *((v14 + 112) as &i128)
        };
        return;
    }
    if v8 as i64 == 0x8000000000000000 {
        v13 = std::io::error::Error::new(40, "Invalid response");
    } else {
        v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
        core::iter::traits::iterator::Iterator::collect(&v10, &v11);
        v13 = fuel_core_client::client::from_strings_errors_to_std_error(&v10);
    }
    return struct16 {
        field_0: 9223372036854775817
        field_8: v13
    };
}
