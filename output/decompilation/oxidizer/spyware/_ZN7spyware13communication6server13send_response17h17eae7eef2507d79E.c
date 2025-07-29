fn spyware::communication::server::send_response(a0: u32, a1: u64) -> long long {
    let v0: u64;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: i64;  // [bp-0x80]
    let v5: struct24;  // [bp-0x78], Other Possible Types: u64
    let v6: u64;  // [bp-0x78]
    let v7: u64;  // [bp-0x70]
    let v8: i64;  // [bp-0x68], Other Possible Types: u64
    let v9: u64;  // [bp-0x60]
    let v10: void*;  // [bp-0x58]
    let v11: i64;  // [bp-0x48]
    let v12: u64;  // [bp-0x40]
    let v13: struct40;  // [bp-0x38]

    v3 = a1;
    v5 = spyware::communication::serialization::serialize_message(a0);
    if (((0 ^ v5.field_0 as i64) & (0 ^ -(v6))) >> 63) as char {
        return v1;
    }
    v0 = v5.field_0;
    v1 = v7;
    v2 = v8;
    if core::sync::atomic::atomic_load() < 4 {
        return std::io::Write::write_all(&v3, v1, v2);
    }
    v4 = &v0;
    v11 = &v4;
    v12 = <&T as core::fmt::Debug>::fmt;
    v5 = "Sending response buffer: ";
    v7 = 1;
    v10 = 0;
    v8 = &v11;
    v9 = 1;
    v13 = struct40 {
        field_0: "spyware::communication::server"
        field_16: "spyware::communication::server"
        field_32: log::__private_api::loc("src/communication/server.rs")
    };
    log::__private_api::log(&v5, 4, &v13);
    return std::io::Write::write_all(&v3, v1, v2);
}
