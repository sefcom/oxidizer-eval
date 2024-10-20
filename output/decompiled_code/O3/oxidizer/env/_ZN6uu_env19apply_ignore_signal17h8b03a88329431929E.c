fn uu_env::apply_ignore_signal(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0xb4]
    let v1: i64;  // [sp-0xb0], Other Possible Types: Arguments
    let v2: i8;  // [bp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [sp-0x78]
    let v6: i192;  // [sp-0x70], Other Possible Types: String
    let v7: i32;  // [sp-0x58]
    let v8: Argument;  // [bp-0x50]
    let v9: Argument;  // [bp-0x48]
    let v10: i64;  // [sp-0x38]
    let v12: i64;  // r15
    let v14: i64;  // rbx
    let v15: i64;  // rbp
    let v16: i32;  // r14d
    let v17: i128;  // xmm0
    let v18: i64;  // rdx
    let v19: i128;  // xmm0

    v12 = *((a0 + 112) as &i64);
    if !v12 {
        return 0;
    }
    v15 = 0;
    loop {
        v16 = *((*((a0 + 104) as &i64) + v15) as &i32);
        if v16 - 1 >= 31 {
            v1 = 0x8000000000000000;
            v3 = 94489280514;
            v14 = __rust_alloc(32, 8);
            v17 = v1;
            *((v14 + 16) as &i8) = v2;
            *(v14 as &i128) = v17;
            return v14;
        } else if signal(v16) as i64 != -1 {
            v15 += 8;
            if v12 << 3 == v15 {
                return 0;
            }
        } else {
            v0 = v16;
            v4 = nix::errno::desc(nix::errno::consts::from_i32(*(__errno_location() as &i32)) as i32);
            v5 = v18;
            v8 = Argument {
                value: &v0
                formatter: core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt
            };
            v9 = Argument {
                value: core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt
                formatter: &v4
            };
            v10 = <&T as core::fmt::Display>::fmt;
            v1 = Arguments {
                pieces: ["failed to set signal action for signal ", ": "]
                args: [&v8, &v9]
                fmt: None
            };
            v6 = alloc::fmt::format::format_inner(&v1);
            v7 = 125;
            v14 = __rust_alloc(32, 8);
            v19 = v6;
            *((v14 + 16) as &i192) = v6;
            *(v14 as &i128) = v19;
            return v14;
        }
    }
}
