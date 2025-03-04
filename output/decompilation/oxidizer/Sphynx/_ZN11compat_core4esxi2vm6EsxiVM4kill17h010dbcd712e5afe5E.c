fn compat_core::esxi::vm::EsxiVM::kill(a0: &Option<struct16>, a1: u32) -> u64 {
    let v0: i64;  // [bp-0x150], Other Possible Types: struct24
    let v1: i64;  // [sp-0x140]
    let v2: String;  // [sp-0x138]
    let v3: i64;  // [sp-0x120]
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0x108]
    let v7: struct20;  // [sp-0x100]
    let v8: struct16;  // [bp-0xe8], Other Possible Types: Arguments, struct149, struct8
    let v9: i64;  // [sp-0xc0]
    let v12: i64;  // rbx
    let v14: i64;  // r12
    let v16: i32;  // edx
    let v17: i64;  // rdx
    let v18: i64;  // rcx

    if !__rust_alloc(5, 1) {
        alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
    }
    v0 = struct24 {
        field_0: v11
        field_8: 5
        field_16: 0
    };
    alloc::raw_vec::RawVec<T,A>::reserve(&v0, 0, 5);
    v12 = v1;
    core::slice::<impl [T]>::copy_from_slice(v0 + v12, 5, "force");
    v1 = v12 + 5;
    v3 = &v0;
    v4 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = a1;
    v6 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v8 = Arguments {
        pieces: ["esxcli vm process kill --type=", " --world-id="]
        args: &[Argument] {
            ptr: 0
            len: <UNKNOWN>
        }
        fmt: &v3
    };
    v9 = 2;
    v2 = alloc::fmt::format(&v8);
    v14 = v2.cap;
    v8 = std::sys::unix::process::process_common::Command::new("/bin/sh");
    v8 = std::sys::unix::process::process_common::Command::stdout(std::process::Stdio::null() as i32, v16);
    v8 = std::sys::unix::process::process_common::Command::arg("-c");
    v8 = std::sys::unix::process::process_common::Command::arg(v2.ptr, v2.len);
    v7 = std::process::Command::status(&v8, v17, v18);
    if v7.field_0 != 1 {
        return struct1 {
            field_0: 3
        };
    }
    *(a0 as &i128) = *(&v7.field_0 as &i128);
}
