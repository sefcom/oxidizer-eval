fn uu_env::ignore_signal(a0: u32) -> u64 {
    let v0: u32;  // [sp-0x9c]
    let v1: u8;  // [bp-0x98]
    let v2: u8;  // [bp-0x90]
    let v3: u64;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: i192;  // [sp-0x28], Other Possible Types: struct28
    let v6: u32;  // [sp-0x10]
    let v9: u64;  // rdx

    nix::sys::signal::signal(&v1, a0, 1);
    if *(&v1 as &i32) != 4 {
        return 0;
    }
    v0 = a0;
    v3 = nix::errno::<impl nix::errno::consts::Errno>::desc(*(&v2 as &i32));
    v4 = v9;
    v5 = format!("failed to set signal action for signal {:?}: {:?}", &v0, &v3);
    v6 = 125;
    return alloc::boxed::Box<T>::new(&v5);
}
