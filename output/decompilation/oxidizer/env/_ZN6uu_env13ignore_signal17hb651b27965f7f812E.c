fn uu_env::ignore_signal(a0: i32) -> long long {
    let v0: u32;  // [bp-0x9c]
    let v1: u8;  // [bp-0x98]
    let v2: u8;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u64;  // [bp-0x80]
    let v5: alloc::raw_vec::Cap;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v7: i64;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: struct24;  // [bp-0x58], Other Possible Types: u64
    let v10: u64;  // [bp-0x50]
    let v11: std::env::VarsOs;  // [bp-0x48]
    let v12: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0x40]
    let v13: void*;  // [bp-0x38]
    let v14: struct28;  // [bp-0x28]
    let v16: u64;  // rdx

    nix::sys::signal::signal(&v1, a0, 1);
    if *(&v1 as &i32) != 4 {
        return 0;
    }
    v0 = a0;
    v3 = nix::errno::<impl nix::errno::consts::Errno>::desc(*(&v2 as &i32)) as u64;
    v4 = v16;
    v5 = &v0;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v7 = &v3;
    v8 = <&T as core::fmt::Display>::fmt;
    v9 = "failed to set signal action for signal ";
    v10 = 2;
    v13 = 0;
    v11 = &v5;
    v12 = 2;
    v9 = core::option::Option<T>::map_or_else(v16);
    v14 = struct28 {
        field_0: <UNKNOWN>
        field_16: <UNKNOWN>
        field_24: 125
    };
    return alloc::boxed::Box<T>::new(&v14);
}
