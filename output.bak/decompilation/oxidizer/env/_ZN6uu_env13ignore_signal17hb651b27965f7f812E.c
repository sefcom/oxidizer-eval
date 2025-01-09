fn uu_env::ignore_signal(a0: u32) -> u64 {
    let v0: u32;  // [sp-0x9c]
    let v1: u8;  // [bp-0x98]
    let v2: u8;  // [bp-0x90]
    let v3: u64;  // [sp-0x88]
    let v4: u64;  // [sp-0x80]
    let v5: &u8;  // [sp-0x78]
    let v6: u64;  // [sp-0x70]
    let v7: &u8;  // [sp-0x68]
    let v8: u64;  // [sp-0x60]
    let v9: u64;  // [sp-0x58]
    let v10: u64;  // [sp-0x50]
    let v11: &&struct_0;  // [sp-0x48]
    let v12: u64;  // [sp-0x40]
    let v13: void*;  // [sp-0x38]
    let v14: u8;  // [bp-0x28]
    let v15: u32;  // [sp-0x10]
    let v18: u64;  // rdx

    nix::sys::signal::signal(&v1, a0, 1);
    if *(&v1 as &i32) != 4 {
        return 0;
    }
    v0 = a0;
    v3 = nix::errno::<impl nix::errno::consts::Errno>::desc(*(&v2 as &i32));
    v4 = v18;
    v5 = &v0;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = "failed to set signal action for signal ";
    v10 = 2;
    v13 = 0;
    v11 = &v5;
    v12 = 2;
    core::option::Option<T>::map_or_else();
    v15 = 125;
    return alloc::boxed::Box<T>::new(&v14);
}
