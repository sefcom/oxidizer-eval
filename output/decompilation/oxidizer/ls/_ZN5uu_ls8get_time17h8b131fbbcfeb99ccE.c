fn uu_ls::get_time(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v2: u32;  // edx
    let v3: u32;  // rdx

    if v2 != 0x3b9aca00 {
        return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(a0, uu_ls::get_system_time(a1, a2), v3);
    }
    return struct4 {
        field_0: 0
    };
}
