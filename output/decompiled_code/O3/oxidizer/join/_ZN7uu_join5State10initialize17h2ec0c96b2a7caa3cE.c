fn uu_join::State::initialize(a0: i64, a1: i64, a2: i8) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: Argument;  // [sp-0xc8], Other Possible Types: i64
    let v2: i64;  // [sp-0xc0]
    let v3: Arguments;  // [bp-0xb8]
    let v4: Argument;  // [bp-0x88]
    let v5: i64;  // [sp-0x78]
    let v6: i128;  // [sp-0x70]
    let v7: i128;  // [sp-0x60]
    let v8: i64;  // [sp-0x50]
    let v9: i448;  // [sp-0x48], Other Possible Types: Enum
    let v11: i64;  // rax
    let v12: i64;  // r14
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: i128;  // xmm0
    let v17: i128;  // xmm1
    let v18: i64;  // r14

    v9 = uu_join::State::read_line(a0, a1);
    v11 = v9;
    if v11 == 0x8000000000000000 {
        return 0;
    }
    if v11 == 9223372036854775809 {
        v0 = *((&v9 as &char + 8) as &i64);
        v1 = uucore::util_name();
        v2 = v13;
        v4 = Argument {
            value: &v1
            formatter: <&T as core::fmt::Display>::fmt
        };
        v3 = Arguments {
            pieces: [&g_4fafb8, ": "]
            args: [&v4]
            fmt: None
        };
        std::io::stdio::_eprint(&v3);
        v1 = Argument {
            value: &v0
            formatter: <std::io::error::Error as core::fmt::Display>::fmt
        };
        v3 = Arguments {
            pieces: [&g_4fafd8, "\n"]
            args: [&v1]
            fmt: None
        };
        std::io::stdio::_eprint(&v3);
        std::process::exit(1); /* do not return */
    }
    v5 = v11;
    v8 = *((&v9 as &char + 40) as &i64);
    v7 = *((&v9 as &char + 24) as &i128);
    v6 = *((&v9 as &char + 8) as &i128);
    v12 = *((a0 + 16) as &i64);
    if v12 == *(a0 as &i64) {
        alloc::raw_vec::RawVec<T,A>::grow_one(a0);
    }
    v14 = *((a0 + 8) as &i64);
    v15 = v12 * 48;
    v16 = v5;
    v17 = *((&v6 as &char + 8) as &i128);
    *((v14 + v15 + 32) as &i128) = *((&v7 as &char + 8) as &i128);
    *((v14 + v15 + 16) as &i128) = v17;
    *((v14 + v15) as &i128) = v16;
    v18 = v12 + 1;
    *((a0 + 16) as &i64) = v18;
    if a2 {
        if !v18 {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        return *((*((a0 + 8) as &i64) + 16) as &i64);
    }
}
