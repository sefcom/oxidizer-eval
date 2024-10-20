fn uu_csplit::split_name::SplitName::new(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i32;  // [sp-0x13c]
    let v1: i64;  // [bp-0x138]
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120], Other Possible Types: Enum
    let v5: i64;  // [sp-0x118]
    let v6: i64;  // [sp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [sp-0x100]
    let v9: i64;  // [bp-0xe0]
    let v10: i64;  // [sp-0xd8]
    let v11: i64;  // [sp-0xd0]
    let v12: i64;  // [sp-0xc8]
    let v13: i128;  // [sp-0xc0]
    let v14: i128;  // [sp-0xb0]
    let v15: i128;  // [sp-0xa0]
    let v16: i64;  // [sp-0x90]
    let v17: i192;  // [bp-0x88]
    let v18: i128;  // [sp-0x68]
    let v19: i64;  // [sp-0x58]
    let v20: i8;  // [bp-0x48]
    let v23: i64;  // r13
    let v24: i64;  // rax
    let v25: i64;  // rbx
    let v27: i64;  // r15
    let v28: i64;  // r14
    let v29: i8;  // bpl
    let v30: i64;  // r14
    let v32: i32;  // eax
    let v35: i64;  // rbx
    let v36: i64;  // rax
    let v37: i64;  // rsi

    if v3 != 0x8000000000000000 {
        v3 = *(a1 as &i64);
        v2 = *((a1 + 8) as &i64);
        v23 = *((a1 + 16) as &i64);
    } else {
        v23 = 2;
        v24 = __rust_alloc(2, 1);
        v2 = v24;
        *(v24 as &i16) = 30840;
        v3 = 2;
    }
    v25 = *(a3 as &i64);
    if v25 != 0x8000000000000000 {
        a2 = a2;
        v28 = *((a3 + 8) as &i64);
        a3 = *((a3 + 16) as &i64);
        v4 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v28, a3);
        if v4 {
            *((a0 + 8) as &i64) = 8;
            *((a0 + 16) as &i64) = v25;
            *((a0 + 24) as &i64) = v28;
            *((a0 + 32) as &i64) = a3;
            *(a0 as &i64) = 0x8000000000000000;
            v29 = 0;
            goto LABEL_541da9;
        } else {
            v27 = v5;
        }
    }
    v10 = v27;
    v29 = a3 | -0x100 | *(a2 as &i64) != 0x8000000000000000;
    if *(a2 as &i64) != 0x8000000000000000 {
        v0 = 0;
    } else {
        v11 = &v10;
        v12 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v4 = "%0";
        v5 = 2;
        v8 = 0;
        v6 = &v11;
        v7 = 1;
        v0 = (&v11 | -0x100 | 1) as u32;
        v0 = alloc::fmt::format::format_inner(&v20, &v4) | -0x100 | 1;
    }
    v19 = *((v30 + 16) as &i64);
    v18 = *(v30 as &i128);
    v17 = v18;
    v4 = uucore::features::format::Format<F>::parse(&v17);
    if v11 != 0x8000000000000000 {
        v15 = *((&v4 as &char + 48) as &i128);
        v16 = v9;
        v13 = *((&v4 as &char + 16) as &i128);
        v14 = *((&v4 as &char + 32) as &i128);
        v11 = v4;
        v12 = v5;
        if v23 {
            v1 = a2;
            v36 = __rust_alloc(v23, 1);
        }
        memcpy(v35, v2, v23);
        *((a0 + 24) as &i64) = v11;
        *((a0 + 40) as &i128) = v13;
        *((a0 + 56) as &i128) = v14;
        *((a0 + 72) as &i128) = v15;
        *((a0 + 88) as &i64) = v16;
        *(a0 as &i64) = v23;
        *((a0 + 8) as &i64) = v35;
        *((a0 + 16) as &i64) = v23;
        if !v3 {
            return a0;
        }
    } else {
        v32 = *((&v4 as &char + 8) as &i32);
        *((a0 + 8) as &u64) = (-0x100 | v32 == 10) + 9;
        *(a0 as &i64) = 0x8000000000000000;
        if (v32 - 6 < 8 ? v32 - 6 : 3) <= 6 {
            goto *((4618916 + vvar_92{reg 24} * 4) as &i32) + 4618916;
        }
LABEL_541da9:
        v37 = *(a2 as &i64);
        if !(!v29) || !(v37 != 0x8000000000000000) {
            return a0;
        } else if !v37 {
            return a0;
        }
    }
    return a0;
}
