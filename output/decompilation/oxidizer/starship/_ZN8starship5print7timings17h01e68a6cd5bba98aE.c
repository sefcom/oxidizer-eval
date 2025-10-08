fn starship::print::timings(a0: void*) -> void {
    let v0: struct16;  // [bp-0x810]
    let v1: Option<struct24>;  // [bp-0x810]
    let v2: u192;  // [bp-0x810]
    let v3: Option<struct24>;  // [bp-0x808], Other Possible Types: u64
    let v4: struct24;  // [bp-0x800], Other Possible Types: struct73
    let v5: struct48;  // [bp-0x7f8]
    let v6: struct24;  // [bp-0x7f0]
    let v7: struct17;  // [bp-0x7e8]
    let v8: struct40;  // [bp-0x7e0]
    let v9: i64;  // [bp-0x7d8]
    let v10: u64;  // [bp-0x7d0]
    let v11: i64;  // [bp-0x7c8]
    let v12: u64;  // [bp-0x7c0]
    let v13: struct24;  // [bp-0x7b8]
    let v14: struct40;  // [bp-0x7b0]
    let v15: Option<struct48>;  // [bp-0x7a8]
    let v16: u8;  // [bp-0x7a0]
    let v17: u64;  // [bp-0x798]
    let v18: i64;  // [bp-0x790]
    let v19: struct24;  // [bp-0x788]
    let v20: struct24;  // [bp-0x768]
    let v21: core::fmt::Arguments;  // [bp-0x748]
    let v22: u8;  // [bp-0x718]
    let v23: struct361;  // [bp-0x700]
    let v25: u64;  // rbx
    let v26: struct24;  // r14
    let v28: &str;  // rdx
    let v29: struct32;  // rdx
    let v30: struct24;  // r15
    let v31: struct40;  // r13
    let v32: struct24;  // rbp
    let v33: struct24;  // rbx
    let v34: struct24;  // r14
    let v35: struct24;  // r12

    v0 = 0x8000000000000000;
    v23 = starship::context::Context::new(a0, &v0 as u32);
    starship::print::compute_modules(&v0, &v23);
    core::iter::traits::iterator::Iterator::collect(&v16, v3, v4 * 96 + v3);
    v25 = v17;
    v26 = v18;
    alloc::slice::<impl [T]>::sort_by(v25, v26);
    v15 = v28;
    v13 = v29;
    v30 = &v0 as u384;
    println!("\n Here are the timings of modules in your prompt (>=1ms or output):");
    v14 = v25;
    if !v26 {
        return;
    }
    v12 = v26 * 80;
    v31 = 0;
    v32 = &v22;
    do {
        v33 = v32;
        v34 = v14;
        alloc::slice::<impl [T]>::repeat(v30, " ", v15 - *((v34 + v31 + 64) as &i64));
        v19 = v2;
        v35 = v30;
        alloc::slice::<impl [T]>::repeat(v35, " ", v13 - *((v34 + v31 + 72) as &i64));
        v20 = v2;
        v32 = v33;
        starship::print::format_duration(v33, v34 + v31 + 48);
        v1 = v34 + v31;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &v19;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v20;
        v7 = <alloc::string::String as core::fmt::Display>::fmt;
        v8 = v32;
        v9 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = v34 + v31 + 24;
        v11 = <alloc::string::String as core::fmt::Display>::fmt;
        v30 = v35;
        v21 = core::fmt::Arguments {
            pieces: [" ", &g_11f6780, "  -  ", &g_11f67a0, "  -   \"", "\"\n"]
            args: &[core::fmt::rt::Argument] {
                ptr: v35
                len: 5
            }
            fmt: 0
        };
        std::io::stdio::_print(&v21);
        v31 += 80;
    } while (v12 != v31);
    return;
}
