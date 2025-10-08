fn firecracker::api_server::parsed_request::describe_with_body(a0: i64, a1: i8, a2: i64, a3: i64, a4: &[u8]) -> int {
    let v0: u8;  // [bp-0xa1]
    let v1: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xa0]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: struct24;  // [bp-0x30]
    let v6: u64;  // rdx
    let v7: void*;  // rsi

    v0 = a1;
    v2 = a2;
    v3 = a3;
    v1 = core::str::converts::from_utf8(a4);
    v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, v6);
    format!("{} request on {} with body {}", &v0, &v2, &v4);
    return;
}
