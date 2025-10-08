fn uu_env::ignore_signal(a0: i32, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: u32;  // [bp-0x9c]
    let v1: Result<struct16, struct12>;  // [bp-0x98]
    let v2: u64;  // [bp-0x88]
    let v3: struct44;  // [bp-0x80]
    let v4: alloc::string::String;  // [bp-0x28]
    let v7: struct44;  // rdx

    v1 = nix::sys::signal::signal(a0, 1, a3);
    match v1 {
        Ok(_) => {
            return 0;
        },
        Err(_) => {
            v0 = a0;
            v2 = nix::errno::<impl nix::errno::consts::Errno>::desc(*((&v1 as &char + 8) as &i32) as i8);
            v3 = v7;
            v4 = format!("failed to set signal action for signal {}: {}", &v0, &v2);
            return alloc::boxed::Box<T>::new(&v4) as u64;
        },
    }
}
