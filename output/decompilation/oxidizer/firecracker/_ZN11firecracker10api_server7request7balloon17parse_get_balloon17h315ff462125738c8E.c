fn firecracker::api_server::request::balloon::parse_get_balloon(a0: i64, a1: i64, a2: i64) -> double {
    let v1: u128;  // [bp-0xd8]
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u128;  // [bp-0xba]
    let v5: u64;  // [bp-0xaa]
    let v7: iNone;  // xmm0
    let v8: u64;  // rax
    let v9: u64;  // rcx

    if !a1 {
        v3 = 9;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v3);
        return struct8 {
            field_0: 0
        };
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "statistics") {
        v3 = 10;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v3);
        return struct8 {
            field_0: 0
        };
    } else {
        format!("Unrecognized GET request path `{}`.", &v0);
        v4 = v1;
        v5 = v2;
        v7 = *(&v3 as &i128);
        v8 = *((&(&v3)[1] as &char + 6) as &i64);
        v9 = v5;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v9
            field_32: <UNKNOWN>
        };
    }
}
