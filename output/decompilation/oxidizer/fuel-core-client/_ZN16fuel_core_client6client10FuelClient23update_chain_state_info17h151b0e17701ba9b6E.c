fn fuel_core_client::client::FuelClient::update_chain_state_info(a0: i64, a1: i64) -> int {
    let v0: struct17;  // [bp-0x48]
    let v1: i64;  // [bp-0x40]
    let v2: u64;  // [bp-0x30]
    let v4: u32;  // ebp
    let v5: u32;  // r12d
    let v6: u32;  // r12d
    let v7: u64;  // 4097
    let v8: u64;  // cc_ndep
    let v9: u32;  // ebx
    let v10: i64;  // rax

    v4 = *((a1 + 48) as &i32);
    if v4 != 2 {
        if *((a1 + 64) as &i32) == 1 {
            v5 = *((a1 + 68) as &i32);
            v0 = std::sync::poison::mutex::Mutex<T>::lock(*((a0 + 120) as &i64) + 16);
            if v0.field_0 != 1 {
                *((v1 + 8) as &i32) = 1;
                *((v1 + 12) as &u32) = v5;
            }
        }
        if *((a1 + 72) as &i32) == 1 {
            v6 = *((a1 + 76) as &i32);
            v0 = std::sync::poison::mutex::Mutex<T>::lock(*((a0 + 128) as &i64) + 16);
            if v0.field_0 != 1 {
                *((v1 + 8) as &i32) = 1;
                *((v1 + 12) as &u32) = v6;
            }
        }
    }
    if (*((a0 + 88) as &i8) & 1) {
        return;
    }
    v7 = atomic_fetch_add(*((a0 + 96) as &i64));
    if _ccall(14, 24, v7 + 1, 0, _ccall(17, (*((a0 + 88) as &i8) & 1) as u8 as u64, 0, v8)) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 6896833()
    }
    v2 = *((a0 + 96) as &i64);
    if v4 == 2 || *((a1 + 56) as &i32) != 1 {
        return;
    }
    v9 = *((a1 + 60) as &i32);
    v0 = std::sync::poison::mutex::Mutex<T>::lock(v2 + 16);
    v10 = core::result::Result<T,E>::expect(&v0);
    if *((v10 + 8) as &i32) != 1 || v9 >= *((v10 + 12) as &i32) {
        *((v10 + 8) as &i32) = 1;
        *((v10 + 12) as &u32) = v9;
    }
    return;
}
