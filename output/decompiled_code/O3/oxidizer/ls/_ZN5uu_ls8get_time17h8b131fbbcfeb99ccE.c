fn uu_ls::get_time(a0: &u32, a1: u64, a2: u64) -> u64 {
    let v1: u64;  // rax
    let v2: u32;  // edx
    let v3: u32;  // rdx

    v1 = uu_ls::get_system_time(a1, a2);
    if v2 != 0x3b9aca00 {
        return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(a0, v1, v3);
    }
    return struct4 {
        field_0: 0
    };
}
