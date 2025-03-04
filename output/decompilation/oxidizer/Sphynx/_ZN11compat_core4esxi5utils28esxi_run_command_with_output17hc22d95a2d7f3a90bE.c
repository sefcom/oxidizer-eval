fn compat_core::esxi::utils::esxi_run_command_with_output(a0: &Result<struct24, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x198], Other Possible Types: Result<struct36, struct16>, int, struct24
    let v1: i64;  // [bp-0x188]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [sp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: i64;  // [sp-0x150]
    let v6: iNone;  // [sp-0x148]
    let v7: iNone;  // [sp-0x138]
    let v8: i32;  // [sp-0x128]
    let v9: i8;  // [bp-0x118]
    let v10: struct16;  // [sp-0xe8], Other Possible Types: struct149, struct8, Result<struct32, struct16>, struct60
    let v12: i64;  // rcx
    let v16: i64;  // r15
    let v17: i64;  // rax
    let v19: i64;  // rbx

    v10 = std::sys::unix::process::process_common::Command::new("sh");
    v10 = std::sys::unix::process::process_common::Command::arg("-c");
    v10 = std::sys::unix::process::process_common::Command::stdout(std::process::Stdio::piped() as i32, a2);
    v10 = std::sys::unix::process::process_common::Command::arg(a1, a2);
    v0 = std::process::Command::spawn(&v10, a2, v12);
    v6 = *((&v0 as &char + 4) as &i128);
    v7 = *((&v0 as &char + 20) as &i128);
    v8 = *((&v0 as &char + 36) as &i32);
    if v0 as i32 != 1 {
        v0 = *(&v9 as &i288);
        v10 = std::process::Child::wait_with_output(&v0);
        if v10.field_0 == 1 {
            return Err(struct16 {
                field_0: v13
                field_8: v14
            });
        }
        v3 = v10.field_32;
        v10 = alloc::string::String::from_utf8_lossy(v10.field_8 as i64, v10.field_24);
        v2 = *((&v10 as &char + 8) as &i64);
        v16 = *((&v10 as &char + 16) as &i64);
        v4 = v10 as i64;
        if v4 == 1 {
            v16 = *((&v10 as &char + 24) as &i64);
        }
        v5 = v10.field_40;
        if !v16 {
            v0 = struct24 {
                field_0: v17
                field_8: v18
                field_16: 0
            };
            alloc::raw_vec::RawVec<T,A>::reserve(&v0, 0, v16);
            v19 = v0.field_16;
            core::slice::<impl [T]>::copy_from_slice(v0 + v19, v16, v2, v16);
            v1 = v19 + v16;
            return Ok(struct8 {
                field_8: <UNKNOWN>
            });
        }
        v17 = __rust_alloc(v16, 1);
        if !v17 {
            alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
        }
    }
}
