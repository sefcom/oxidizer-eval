fn uu_ls::get_time(a1: i32, a2: i64) -> : struct16 {
    let a0: u64;  // rdi
    let v1: u64;  // rax
    let v2: u32;  // edx

    v1 = uu_ls::get_system_time(a1, a2) as u64;
    if v2 != 0x3b9aca00 {
        return <chrono::datetime::DateTime<chrono::offset::local::Local> as core::convert::From<std::time::SystemTime>>::from(a0, v1, a2) as u64;
    }
    return struct4 {
        field_0: 0
    };
}
