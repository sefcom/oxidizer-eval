fn harry::exec(a1: &struct24) -> : struct24 {
    let a0: u32;  // rdi
    let v0: u64;  // [bp-0x1f8]
    let v1: &str;  // [bp-0x1f0]
    let v2: u64;  // [bp-0x1f0]
    let v3: struct16;  // [bp-0x1e0]
    let v4: Result<struct52, struct16>;  // [bp-0x1e0]
    let v5: u128;  // [bp-0x1d0]
    let v6: u128;  // [bp-0x1c0]
    let v7: u64;  // [bp-0x1b0]
    let v8: struct16;  // [bp-0x1a8]
    let v9: i64;  // [bp-0x198]
    let v10: u64;  // [bp-0x190]
    let v11: u128;  // [bp-0x188]
    let v12: u64;  // [bp-0x178]
    let v13: struct40;  // [bp-0x168], Other Possible Types: u64
    let v14: u128;  // [bp-0x160]
    let v15: u128;  // [bp-0x138]
    let v16: u128;  // [bp-0x128]
    let v17: u32;  // [bp-0x120]
    let v18: u128;  // [bp-0x118]
    let v19: u32;  // [bp-0x110]
    let v20: u64;  // [bp-0x108]
    let v21: alloc::string::String;  // [bp-0xf8]
    let v22: u64;  // [bp-0xe8]
    let v23: struct208;  // [bp-0xe0], Other Possible Types: struct24, struct40, struct56
    let v25: i64;  // rax
    let v26: u64;  // rcx
    let v27: u64;  // rdx
    let v29: u128;  // xmm0
    let v30: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v31: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v25 = alloc::alloc::exchange_malloc(a0, a1);
    v26 = *(a1 as &i64);
    v27 = *((a1 + 16) as &i64);
    *(v25 as &&u8) = &g_45c315;
    *((v25 + 8) as &i64) = 2;
    *((v25 + 16) as &u64) = v26;
    *((v25 + 24) as &u64) = v27;
    v23 = alloc::slice::hack::into_vec(v25, 2);
    v12 = v23.field_16;
    v11 = *(&v23.field_0 as &i128);
    v1 = "sh";
    v3 = struct16 {
        field_0: &v1 as u64
        field_8: <&T as core::fmt::Display>::fmt
    };
    v23 = core::fmt::Arguments::new_v1("Running ", 2, &v3, 0x1);
    std::io::stdio::_print(&v23);
    v23 = std::process::Command::new(v2, 2);
    v4 = std::process::Command::output(std::process::Command::args(&v23, &v11));
    match v4 {
        Err(_) => {
            v0 = <&T as core::fmt::Display>::fmt;
            v8 = struct16 {
                field_0: a1
                field_8: <alloc::string::String as core::fmt::Display>::fmt
            };
            v9 = &v0;
            v10 = <std::io::error::Error as core::fmt::Display>::fmt;
            v13 = core::fmt::Arguments::new_v1("Failed to run command '", 2, &v8, 0x2);
            v21 = alloc::fmt::format(&v13);
            return struct24 {
                field_0: v21
                field_16: v22
            };
        },
        Ok(_) => {
            v20 = v7;
            v29 = v4 as i128;
            v18 = v6;
            v16 = v5;
            v15 = v29;
            v13 = 1;
            v14 = 0 as u128;
            v4 as u448 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v15 as i64, v16 as i64);
            v23 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, v17, v19);
            v30 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v4 as u8, &v4 as u448);
            core::result::Result<T,E>::unwrap(&v4 as u8, "src/main.rs");
            v31 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read_to_string(&v4 as u8, &v23);
            core::result::Result<T,E>::unwrap(&v4 as u8, "src/main.rs");
            return struct24 {
                field_0: *(&v13 as &i128)
                field_16: *((&v14 as &char + 8) as &i64)
            };
        },
    }
}
