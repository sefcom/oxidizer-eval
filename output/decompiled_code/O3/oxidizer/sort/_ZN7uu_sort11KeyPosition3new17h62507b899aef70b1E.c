fn uu_sort::KeyPosition::new(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: i8;  // [sp-0xdd]
    let v1: Enum;  // [sp-0xd8], Other Possible Types: i128
    let v2: i64;  // [sp-0xc8], Other Possible Types: Argument
    let v3: Argument;  // [bp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i64;  // [sp-0x98]
    let v9: i8;  // [sp-0x90]
    let v10: i192;  // [sp-0x88], Other Possible Types: String
    let v11: Arguments;  // [bp-0x60]
    let v12: i64;  // [sp-0x50]
    let v15: i64;  // r13
    let v16: i64;  // rdx
    let v17: i64;  // rsi
    let v18: i64;  // rax
    let v19: i64;  // rcx
    let v20: i64;  // rcx
    let v22: i64;  // rbp
    let v23: i64;  // rbp
    let v24: i64;  // rbp
    let v25: i64;  // 4096
    let v26: i64;  // 4096
    let v27: i64;  // rbp
    let v28: i64;  // rbp
    let v29: i64;  // r14
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdx
    let v33: i64;  // rdx
    let v34: i64;  // rcx
    let v35: i64;  // r14
    let v36: i64;  // r15
    let v37: i64;  // r14
    let v38: i64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rax

    do {
        v15 = 0;
        v16 = a2 - v15;
        v17 = a1 + v15;
        if v16 <= 15 {
            if a2 == v15 {
                break;
            }
            v19 = 0;
            while (*((v17 + v19) as &i8) != 46) {
                v19 += 1;
                if v16 == v19 {
                    goto LABEL_4c3c7b;
                }
            }
        }
        v18 = core::slice::memchr::memchr_aligned(46, v17);
        if v18 != 1 {
            if !(!v18) {
                goto LABEL_4c3ec7;
            }
            break;
        }
        v22 = v20 + v15 + 1;
        v15 += v20;
        if v15 < a2 && *((a1 + v15) as &i8) == 46 {
LABEL_4c3ec7:
            v27 = v23;
            do {
                v29 = v28;
                v30 = a2 - v29;
                if v30 > 15 {
                    v31 = core::slice::memchr::memchr_aligned(46, a1 + v29);
                    if v31 == 1 {
                        goto LABEL_4c3f24;
                    }
                    if !v31 {
                        break;
                    }
LABEL_4c3f63:
                    v25 = v34 - v27;
                    v24 = v27 + a1;
                    goto LABEL_4c3f59;
                }
                if a2 == v29 {
                    break;
                }
                v32 = 0;
                while (*((a1 + v29 + v32) as &i8) != 46) {
                    v32 += 1;
                    if v30 == v32 {
                        goto LABEL_4c3f53;
                    }
                }
LABEL_4c3f24:
                v34 = v29 + v33;
                if v34 < a2 && *((a1 + v34) as &i8) == 46 {
                    goto LABEL_4c3f63;
                }
                v35 = v29 + v33 + 1;
            } while (v35 <= a2);
LABEL_4c3f53:
            v25 = a2 - v27;
            v24 = v27 + a1;
LABEL_4c3f59:
            goto LABEL_4c3c80;
        }
    } while (v22 <= a2);
LABEL_4c3c7b:
    v24 = 0;
LABEL_4c3c80:
    v36 = v25;
    v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str(a1, v26);
    if v1 {
        v0 = *((&v1 as &char + 1) as &i8);
        v6 = 0;
        v7 = a1;
        v8 = v26;
        v9 = 1;
        v2 = &v6;
        v3 = Argument {
            value: <os_display::Quoted as core::fmt::Display>::fmt
            formatter: &v0
        };
        v4 = &v0;
        v5 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
        v11 = Arguments {
            pieces: ["failed to parse field index ", ": "]
            args: [&v2, &v3]
            fmt: None
        };
        v12 = &v2;
        v10 = alloc::fmt::format::format_inner(&v11);
        v38 = *((&v10 as &char + 16) as &i64);
        *((a0 + 8) as &i192) = v10;
        goto LABEL_4c3d4a;
    }
    v37 = *((&v1 as &char + 8) as &i64);
    if !v37 {
        v38 = 24;
        v39 = __rust_alloc(24, 1);
        *(v39 as &i128) = 43108423766924852320542625907104639334;
        *((v39 + 16) as &i64) = 3467883185200983918;
        *((a0 + 8) as &i64) = 24;
        *((a0 + 16) as &i64) = v39;
LABEL_4c3d4a:
        *((a0 + 24) as &i64) = v38;
        v41 = 1;
    } else {
        if v24 {
            v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v24, v36);
            if !v1 {
                a3 = *((&v1 as &char + 8) as &i64);
                goto LABEL_4c3f3b;
            }
            v0 = *((&v1 as &char + 1) as &i8);
            v6 = 0;
            v7 = v24;
            v8 = v36;
            v9 = 1;
            v2 = Argument {
                value: &v6
                formatter: <os_display::Quoted as core::fmt::Display>::fmt
            };
            v3 = Argument {
                value: <os_display::Quoted as core::fmt::Display>::fmt
                formatter: &v0
            };
            v5 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            v11 = Arguments {
                pieces: ["failed to parse character index ", ": "]
                args: [&v2, &v3]
                fmt: None
            };
            v10 = alloc::fmt::format::format_inner(&v11);
            v40 = v10;
            a3 = *((&v10 as &char + 8) as &i64);
            if v40 != 0x8000000000000000 {
                v38 = *((&v10 as &char + 16) as &i64);
                *((a0 + 8) as &i64) = v40;
                *((a0 + 16) as &i64) = a3;
                goto LABEL_4c3d4a;
            }
        }
LABEL_4c3f3b:
        *((a0 + 8) as &i64) = v37;
        *((a0 + 16) as &i64) = a3;
        *((a0 + 24) as &u8) = a4;
        v41 = 0;
    }
    *(a0 as &i64) = v41;
    return v41;
}
