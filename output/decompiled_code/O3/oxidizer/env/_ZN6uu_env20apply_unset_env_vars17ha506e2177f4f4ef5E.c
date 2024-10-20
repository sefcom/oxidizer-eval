fn uu_env::apply_unset_env_vars(a0: void*) -> u64 {
    let v0: Argument;  // [bp-0xa8]
    let v1: i192;  // [sp-0x98], Other Possible Types: String
    let v2: i64;  // [sp-0x80]
    let v3: i64;  // [sp-0x78]
    let v4: i64;  // [sp-0x70]
    let v5: i8;  // [sp-0x68]
    let v6: Arguments;  // [bp-0x60]
    let v8: i64;  // r13
    let v9: i64;  // r14
    let v10: i64;  // rbx
    let v11: i64;  // r14
    let v12: i64;  // r14
    let v13: i64;  // r15
    let v14: i64;  // r12
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // r15
    let v18: i64;  // r14
    let v19: i64;  // r15
    let v20: i64;  // r12

    v8 = *((a0 + 40) as &i64);
    if !v8 {
        return 0;
    }
    v9 = *((a0 + 32) as &i64);
    loop {
        v12 = v11;
        v13 = *(v12 as &i64);
        v14 = *((v12 + 8) as &i64);
        if !v4 {
            break;
        }
        if v4 <= 15 {
            v15 = 0;
            do {
                if !*((v3 + v15) as &i8) {
                    vvar_235{stack -128} = 1;
                    vvar_236{stack -120} = v13;
                    vvar_237{stack -112} = v14;
                    vvar_238{stack -104} = 1;
                    v0 = Argument {
                        value: &v2
                        formatter: <os_display::Quoted as core::fmt::Display>::fmt
                    };
                    v6 = Arguments {
                        pieces: ["cannot unset ", ": Invalid argument"]
                        args: [&v0]
                        fmt: None
                    };
                    vvar_239{stack -152} = alloc::fmt::format::format_inner(&v6);
                    vvar_241{reg 128} = v1;
                    vvar_242{reg 136} = *((&v1 as &char + 8) as &i64);
                    vvar_243{reg 112} = *((&v1 as &char + 16) as &i64);
                    vvar_244{reg 16} = __rust_alloc(32, 8);
                    *(v10 as &i64) = v18;
                    *((v10 + 8) as &i64) = v19;
                    *((v10 + 16) as &i64) = v20;
                    *((v10 + 24) as &i32) = 125;
                    return v10;
                }
            } while ((v15 += 1, v4 != v15));
            v16 = 0;
            while (*((v3 + v16) as &i8) != 61) {
                v16 += 1;
                if v4 == v16 {
                    goto LABEL_49da03;
                }
            }
        } else if !(core::slice::memchr::memchr_aligned(0, v3) != 1) || !(core::slice::memchr::memchr_aligned(61, v3) != 1) {
            break;
        }
LABEL_49da03:
        v17 = v12 + 16;
        std::env::remove_var(v12);
        if v17 == (v8 << 4) + v9 {
            return 0;
        }
    }
    v2 = 1;
    v3 = v13;
    v4 = v14;
    v5 = 1;
    v0 = Argument {
        value: &v2
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v6 = Arguments {
        pieces: ["cannot unset ", ": Invalid argument"]
        args: [&v0]
        fmt: None
    };
    v1 = alloc::fmt::format::format_inner(&v6);
    v18 = v1;
    v19 = *((&v1 as &char + 8) as &i64);
    v20 = *((&v1 as &char + 16) as &i64);
    v10 = __rust_alloc(32, 8);
    *(v10 as &i64) = v18;
    *((v10 + 8) as &i64) = v19;
    *((v10 + 16) as &i64) = v20;
    *((v10 + 24) as &i32) = 125;
    return v10;
}
