fn firecracker::api_server_adapter::ApiServerAdapter::run_microvm(a0: i64, a1: u32, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u64, a8: u64) -> int {
    let v0: struct12;  // [bp-0x1f0], Other Possible Types: struct17, struct56
    let v1: u8;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x40]
    let v3: u32;  // [bp-0x38]
    let v4: i8;  // [bp-0x30]
    let v6: core::fmt::rt::Argument;  // rax
    let v7: Result<struct24, struct16>;  // rcx

    if _ccall(14, 24, atomic_fetch_add(a7) as u64 + 1, 0, (&v4 < 456) as u8 as u64) as char {
        [D] Unsupported jumpkind Ijk_NoDecode at address 5602512()
    }
    v0 = struct56 {
        field_0: 1
        field_8: 1
        field_16: 0
        field_20: 0
        field_24: a2
        field_32: a3
        field_40: a4
        field_48: a5
    };
    memcpy(&v1, a6, 376);
    v2 = a7;
    v3 = a1;
    <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(a8, alloc::boxed::Box<T>::new(&v0), &g_7a3aa0);
    do {
        v0 = event_manager::manager::EventManager<S>::run_with_timeout(a8);
        core::result::Result<T,E>::expect(&v0, "EventManager events driver fatal error", "src/firecracker/src/api_server_adapter.rs");
        v0 = std::sync::poison::mutex::Mutex<T>::lock(a7 + 16);
        v6 = core::result::Result<T,E>::unwrap(&v0, "src/firecracker/src/api_server_adapter.rs");
        v7 = *((v6 + 532) as &i8);
    } while (v7 as u32 == 158);
    if v7 as u32 {
        return struct2 {
            field_0: 29
            field_1: v7 as u8
        };
    }
    return struct1 {
        field_0: 32
    };
}
