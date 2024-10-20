fn uu_shuf::parse_range(a0: void*, a1: &u8, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb8]
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i8;  // [sp-0xa0]
    let v4: Argument;  // [sp-0x98], Other Possible Types: String, i192
    let v5: Arguments;  // [bp-0x80]
    let v6: i128;  // [sp-0x50], Other Possible Types: Enum
    let v7: Argument;  // [bp-0x40]
    let v9: i64;  // r12
    let v10: i64;  // rdx
    let v11: i64;  // rcx
    let v12: i64;  // rcx
    let v14: i64;  // r13
    let v15: i64;  // r12
    let v16: i64;  // rbp
    let v17: i64;  // rax
    let v18: i64;  // rax

    v9 = 0;
    loop {
        v10 = a2 - v9;
        if v10 <= 15 {
            if a2 == v9 {
                goto LABEL_48e3fc;
            }
            v11 = 0;
            while (*((a1 + v9 + v11) as &i8) != 45) {
                v11 += 1;
                if v10 == v11 {
                    goto LABEL_48e3fc;
                }
            }
        } else if !(core::slice::memchr::memchr_aligned(45, a1 + v9) == 1) {
            goto LABEL_48e3fc;
        }
        v14 = v12 + v9;
        v9 = v9 + v12 + 1;
        if v14 < a2 && *((a1 + v14) as &i8) == 45 {
            break;
        }
        if a2 < v9 {
            goto LABEL_48e3fc;
        }
    }
    v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, v14);
    if !v6 {
        v14 = a2 - v9;
        v15 = v9 + a1;
        v16 = *((&v6 as &char + 8) as &i64);
        v6 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v15, v14);
        if v6 {
            v0 = 0;
            v1 = v15;
            goto LABEL_48e368;
        } else {
            v17 = *((&v6 as &char + 8) as &i64);
            if !(v16 > v17) || !(v16 != v17 + 1) {
                *((a0 + 8) as &i64) = v16;
                *((a0 + 16) as &i64) = v17;
                *((a0 + 24) as &i8) = 0;
                *(a0 as &i64) = 0;
                return a0;
            }
LABEL_48e3fc:
            v0 = 0;
            v1 = a1;
            v2 = a2;
            v3 = 1;
            v4 = Argument {
                value: &v0
                formatter: <os_display::Quoted as core::fmt::Display>::fmt
            };
            v5 = Arguments {
                pieces: ["invalid input range: "]
                args: [&v4]
                fmt: None
            };
            alloc::fmt::format::format_inner(a0 + 8, &v5);
        }
    } else {
        v0 = 0;
        v1 = a1;
LABEL_48e368:
        v2 = v14;
        v3 = 1;
        v7 = Argument {
            value: &v0
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v5 = Arguments {
            pieces: ["invalid input range: "]
            args: [&v7]
            fmt: None
        };
        v4 = alloc::fmt::format::format_inner(&v5);
        v18 = *((&v4 as &char + 16) as &i64);
        *((a0 + 8) as &i192) = v4;
        *((a0 + 24) as &i64) = v18;
    }
    *(a0 as &i64) = 1;
    return a0;
}
