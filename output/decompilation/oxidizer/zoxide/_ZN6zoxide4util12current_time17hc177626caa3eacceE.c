fn zoxide::util::current_time() -> u64 {
    let v0: struct12;  // [bp-0x40]
    let v1: struct12;  // [bp-0x30]
    let v2: struct20;  // [bp-0x20]
    let v4: u32;  // edx

    v1 = struct12 {
        field_0: std::time::SystemTime::now()
        field_8: v4
    };
    v2 = std::time::SystemTime::duration_since(&v1, None, 0);
    v0 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v2);
    if v0.field_8 as i32 != 0x3b9aca00 {
        return 0;
    }
    return 1;
}
