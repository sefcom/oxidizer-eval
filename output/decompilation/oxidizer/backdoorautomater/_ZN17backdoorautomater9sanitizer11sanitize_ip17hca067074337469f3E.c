fn backdoorautomater::sanitizer::sanitize_ip(a1: &struct24, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    core::result::Result<T,E>::expect(core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::Ipv4Addr>::from_str(*((a1 + 8) as &i64), *((a1 + 16) as &i64)) as u64);
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
}
