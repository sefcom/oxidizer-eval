fn just::signals::handler(a0: u32) -> long long {
    let v0: struct72;  // [bp-0x21]
    let v1: Result<struct8, struct4>;  // [bp-0x20]
    let v3: &mut [u8];  // rbp
    let v4: u32;  // eax
    let v5: u32;  // eax
    let v6: alloc::string::String;  // rax
    let v7: struct157;  // rsi

    v3 = a0;
    v4 = nix::errno::<impl nix::errno::consts::Errno>::last();
    if v3 as u32 < 0x100 {
        v5 = core::sync::atomic::atomic_load();
        if v5 == -1 {
            core::option::expect_failed("fd != -1"); /* do not return */
        }
        v0 = v3 as u8;
        v1 = nix::unistd::write(v5, &v0, 1);
        match v1 {
            Ok(_) => {
                return nix::errno::<impl nix::errno::consts::Errno>::set(v4 as u64);
            },
            Err(_) => {
                v6 = nix::errno::<impl nix::errno::consts::Errno>::desc(*((&v1 as &char + 4) as &i32) as i8);
            },
        }
    }
    just::signals::die(v6, v7); /* do not return */
}
