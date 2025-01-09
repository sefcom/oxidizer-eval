fn uu_ls::get_time(a0: &Option<struct16>, a1: u32, a2: u32) -> u64 {
    let v2: u32;  // rdx

    return struct4 {
        field_0: 0
    };
    return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(a0, uu_ls::get_system_time(a1, a2), v2);
}
