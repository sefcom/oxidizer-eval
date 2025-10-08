fn starship::modules::localip::get_local_ipv4(a0: i64) -> int {
    let v0: u64;  // [bp-0x4c]
    let v1: struct16;  // [bp-0x48]
    let v2: struct24;  // [bp-0x48]
    let v3: struct30;  // [bp-0x48]
    let v5: &str;  // [bp-0x40], Other Possible Types: unsigned long
    let v6: core::str::pattern::CharSearcher;  // [bp-0x21]
    let v12: struct40;  // rax
    let v14: core::option::Option<u8>;  // eax
    let v15: struct16;  // rcx
    let v16: struct56;  // dl

    v1 = std::net::each_addr();
    if v1.field_0 as i32 == 1 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v5
        };
    }
    v12 = std::net::each_addr(&v0);
    if v12 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v12
        };
    }
    v3 = std::net::tcp::TcpStream::local_addr(&v0);
    if v3.field_0 != 2 {
        *(v15 as &core::option::Option<u8>) = v14;
        v6 = v16;
        v2 = <T as alloc::string::SpecToString>::spec_to_string(&v6);
        return struct24 {
            field_0: v2.field_0
            field_16: v2.field_16
        };
    }
    *((a0 + 8) as &&str) = v5;
}
