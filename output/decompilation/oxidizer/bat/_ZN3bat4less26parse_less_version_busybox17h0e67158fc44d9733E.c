fn bat::less::parse_less_version_busybox(a0: &[u8]) -> u64 {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]

    v0 = core::str::converts::from_utf8(a0);
    match v0 {
        Err(_) => {
            return 2;
        },
        Ok(_) => {
            return 2 - <&str as core::str::pattern::Pattern>::is_contained_in("BusyBox ", v1, *((&v0 as &char + 16) as &i64)) as u32 as u64;
        },
    }
}
