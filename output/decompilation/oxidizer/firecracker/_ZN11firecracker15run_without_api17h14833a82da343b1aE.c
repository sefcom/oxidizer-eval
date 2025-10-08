fn firecracker::run_without_api(a1: i64, a2: &struct24, a3: &struct80, a4: i8, a5: i8, a6: i64, a7: i64, a8: i64) -> : struct1 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x480]
    let v1: iNone;  // [bp-0x478]
    let v2: u64;  // [bp-0x478]
    let v3: iNone;  // [bp-0x468]
    let v4: iNone;  // [bp-0x458]
    let v5: iNone;  // [bp-0x448]
    let v6: u64;  // [bp-0x430]
    let v7: iNone;  // [bp-0x428]
    let v8: iNone;  // [bp-0x418]
    let v9: iNone;  // [bp-0x408]
    let v10: iNone;  // [bp-0x3f8]
    let v11: struct12;  // [bp-0x3e8], Other Possible Types: struct184, struct57, struct17
    let v12: struct376;  // [bp-0x3e8]
    let v13: struct40;  // [bp-0x3e0]
    let v14: struct72;  // [bp-0x3d8]
    let v15: &str;  // [bp-0x3d0]
    let v16: iNone;  // [bp-0x3c0]
    let v17: iNone;  // [bp-0x3b0]
    let v18: struct184;  // [bp-0x268]
    let v24: u8;  // [bp-0x168]
    let v26: i8;  // [bp-0x30]
    let v28: i64;  // rax
    let v29: u64;  // rcx

    v11 = event_manager::manager::EventManager<S>::new_with_capacity();
    v18 = core::result::Result<T,E>::expect(&v11, "src/firecracker/src/main.rs");
    v11 = 1;
    v13 = 1;
    v14 = 0;
    v15 = firecracker::metrics::PeriodicMetrics::new();
    v6 = alloc::boxed::Box<T>::new(&v11) as u64;
    if _ccall(14, 24, atomic_fetch_add(v6) as u64 + 1, 0, (&v26 < 1112) as u8 as u64) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 5621798()
    }
    <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(&v18, v6, &g_7a3cc0);
    if (((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63) as char {
        core::option::unwrap_failed(); /* do not return */
    }
    v12 = firecracker::build_microvm_from_json(a1, &v18, a2, a3, a4, a5, a6, a7, a8);
    v1 = *(&(&v12)[1] as &i128);
    v3 = *(&(&v12)[3] as &i128);
    v4 = v16;
    v5 = v17;
    if v12.field_0 == 0x8000000000000000 {
        v7 = v1;
        v8 = v3;
        v9 = v4;
        v10 = v5;
        v0[48] = v5;
        v0[32] = v4;
        v0[16] = v3;
        *(v0) = v1;
    }
    memcpy(&v24, &v12 as u8, 312);
    v11 = std::sync::poison::mutex::Mutex<T>::lock(v6 + 16);
    firecracker::metrics::PeriodicMetrics::start(core::result::Result<T,E>::expect(&v11, "src/firecracker/src/main.rs") + 8);
    do {
        v11 = event_manager::manager::EventManager<S>::run_with_timeout(&v18);
        core::result::Result<T,E>::expect(&v11, "Failed to start the event manager", "src/firecracker/src/main.rs");
        v11 = std::sync::poison::mutex::Mutex<T>::lock(v2 + 16);
        v28 = core::result::Result<T,E>::unwrap(&v11, "src/firecracker/src/main.rs");
        v29 = *((v28 + 532) as &i8);
    } while (v29 == 158);
    if v29 {
        *(v0 as &i8) = 28;
        *(&v0[1] as &u8) = v29;
    }
    return struct1 {
        field_0: 29
    };
}
