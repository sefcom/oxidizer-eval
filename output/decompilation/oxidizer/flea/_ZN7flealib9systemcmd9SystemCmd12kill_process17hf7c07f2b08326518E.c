fn flealib::systemcmd::SystemCmd::kill_process(a0: i64, a1: u32, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0xa8]
    let v1: u64;  // [bp-0xa0]
    let v2: i64;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: void*;  // [bp-0x88]
    let v5: struct24;  // [bp-0x78], Other Possible Types: struct_0 *
    let v6: u64;  // [bp-0x70]
    let v7: alloc::string::String;  // [bp-0x60]
    let v8: u64;  // [bp-0x48]
    let v9: u64;  // [bp-0x40]
    let v10: i64;  // [bp-0x38]
    let v11: u64;  // [bp-0x30]
    let v12: alloc::string::String;  // [bp-0x28]
    let v14: u64;  // r8

    v8 = a2;
    v9 = a3;
    v5 = &v8;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = "kill ";
    v1 = 1;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v7 = core::option::Option<T>::map_or_else(&v0, a2, a3, v14);
    v5 = flealib::systemcmd::SystemCmd::execute_bash_command(a1, v7);
    v10 = &v5;
    v11 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = "Bash executed ";
    v1 = 1;
    v4 = 0;
    v2 = &v10;
    v3 = 1;
    v12 = core::option::Option<T>::map_or_else(&v0, a2, a3, v14);
    return struct24 {
        field_0: *(&v12.vec.buf.inner.cap as &i128)
        field_16: v12.vec.len
    };
}
