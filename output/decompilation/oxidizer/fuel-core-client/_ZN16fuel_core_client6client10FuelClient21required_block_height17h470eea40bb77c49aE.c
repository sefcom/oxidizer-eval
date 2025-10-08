fn fuel_core_client::client::FuelClient::required_block_height(a0: i64) -> long long {
    let v0: struct17;  // [bp-0x28]
    let v1: i64;  // [bp-0x20]

    if *((a0 + 88) as &i32) == 1 {
        return *((a0 + 92) as &i32);
    }
    v0 = std::sync::poison::mutex::Mutex<T>::lock(*((a0 + 96) as &i64) + 16);
    return *((v1 + 8) as &i32);
}
