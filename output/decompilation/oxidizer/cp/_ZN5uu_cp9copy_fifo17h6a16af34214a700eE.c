fn uu_cp::copy_fifo(a0: &Option<Result<struct64, struct8>>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0x128]
    let v1: i64;  // [sp-0x120]
    let v2: i64;  // [sp-0x118]
    let v3: i64;  // [sp-0x110]
    let v4: i64;  // [sp-0x108]
    let v5: i8;  // [sp-0x100]
    let v6: struct24;  // [sp-0xf8]
    let v7: Result<struct176, struct8>;  // [sp-0xe0], Other Possible Types: unsigned long, Option<struct1>
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0]
    let v10: i64;  // [sp-0xc8]
    let v11: i64;  // [sp-0xc0]
    let v13: i32;  // ebx
    let v14: i64;  // rax
    let v15: iNone;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2
    let v18: i64;  // rax
    let v19: i64;  // rcx
    let v20: i64;  // rax

    v7 = std::fs::metadata(a1, a2);
    if v13 != 2 {
        v7 = uu_cp::OverwriteMode::verify(a3 as u64, a1, a2, a4 as u64);
        match v7 {
            Some(_) => {
                v15 = v7 as i128;
                v16 = *((&v7 as &char + 16) as &i128);
                v17 = *((&v7 as &char + 32) as &i128);
                v18 = a0;
                return Some(struct64 {
                    field_0: v15
                    field_16: v16
                    field_32: v17
                    field_48: *((&v7 as &char + 48) as &i128)
                });
            },
            None => {
                v14 = std::fs::remove_file(a1, a2);
                if v14 {
                    v19 = a0;
                    *(v19 as &i64) = 2;
                    *((v19 + 8) as &unsigned long) = v14;
                    v18 = v14;
                }
            },
        }
    }
    v7 = <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(a1, a2);
    if mkfifo(core::result::Result<T,E>::unwrap(&v7), 438) != -1 {
        return struct8 {
            field_0: 13
        };
    }
    v2 = 1;
    v3 = a1;
    v4 = a2;
    v5 = 1;
    v0 = &v2;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v7 = "cannot create fifo ";
    v8 = 2;
    v11 = 0;
    v9 = &v0;
    v10 = 1;
    v6 = core::option::Option<T>::map_or_else(&v7);
    v18 = v20;
}
