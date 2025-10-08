fn fuel_core_client::client::FuelClient::submit_opt(a0: i64, a1: u64, a2: u64) -> void {
    *((a0 + 120) as &u64) = a1;
    *((a0 + 128) as &u64) = a2;
    *((a0 + 137) as &i16) = 0x200;
    return;
}
