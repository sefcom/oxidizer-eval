fn uu_wc::print_stats(a0: &u64, a1: &u64, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: &struct_0;  // [sp-0x180]
    let v1: u64;  // [sp-0x178]
    let v2: u64;  // [sp-0x170], Other Possible Types: void*
    let v3: u64;  // [sp-0x158]
    let v4: u64;  // [sp-0x150]
    let v5: u64;  // [sp-0x148]
    let v6: u64;  // [sp-0x140]
    let v7: u64;  // [sp-0x138]
    let v8: u64;  // [sp-0x130]
    let v9: void*;  // [sp-0x128]
    let v10: u64;  // [sp-0x120], Other Possible Types: struct24
    let v11: u64;  // [sp-0x110]
    let v12: u64;  // [sp-0x108]
    let v13: void*;  // [sp-0x100]
    let v14: u64;  // [sp-0xf8]
    let v15: u8;  // [sp-0xf0]
    let v16: u64;  // [sp-0xe8]
    let v17: u64;  // [sp-0xd8]
    let v18: u64;  // [sp-0xd0]
    let v19: u64;  // [sp-0xc8]
    let v20: u64;  // [sp-0xc0]
    let v21: u8;  // [sp-0xb8]
    let v22: struct24;  // [bp-0xb0]
    let v23: u64;  // [sp-0xa8]
    let v24: u64;  // [sp-0x98]
    let v25: u64;  // [sp-0x90]
    let v26: u64;  // [sp-0x88]
    let v27: u8;  // [sp-0x80]
    let v28: u64;  // [sp-0x78]
    let v29: u8;  // [sp-0x70]
    let v30: u64;  // [sp-0x68]
    let v31: u8;  // [sp-0x60]
    let v32: u64;  // [sp-0x58]
    let v33: u8;  // [sp-0x50]
    let v34: u64;  // [sp-0x48]
    let v35: u8;  // [sp-0x40]
    let v36: u64;  // [sp-0x38]
    let v38: u64;  // rsi
    let v39: u64;  // rdx
    let v40: void*;  // r14
    let v41: u64;  // rax
    let v42: &struct_0;  // rdi

    v10 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v10, v38, v39);
    v27 = *((&a0[3] as &char + 2) as &i8);
    v28 = a1[2];
    v29 = *((&a0[3] as &char + 3) as &i8);
    v30 = a1[3];
    v31 = *((&a0[3] as &char + 1) as &i8);
    v32 = a1[1];
    v33 = a0[3];
    v34 = *(a1);
    v35 = *((&a0[3] as &char + 4) as &i8);
    v36 = a1[4];
    v1 = 1;
    v2 = 0;
    v40 = 0;
    loop {
        while (!*((&v27 + v40) as &i8)) {
            v40 += 16;
            if v40 == 80 {
                goto LABEL_48b92d;
            }
        }
        v3 = &v28 + v40;
        v4 = &v1;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v3;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = a4;
        v9 = 0;
        v10 = 2;
        v11 = 2;
        v13 = 0;
        v14 = 32;
        v15 = 3;
        v16 = 2;
        v17 = 1;
        v18 = 2;
        v19 = 1;
        v20 = 32;
        v21 = 3;
        v22 = struct24 {
            field_0: &g_4154a8
            field_8: 2
            field_16: &v4
        };
        v25 = &v10;
        v26 = 2;
        v24 = 3;
        v41 = std::io::Write::write_fmt(&v0, &v22);
        if v41 {
            break;
        }
        v1 = &g_419fdd;
        v2 = 1;
        v40 += 16;
        if v40 == 80 {
            goto LABEL_48b92d;
        }
    }
LABEL_48b92d:
    if !a2 {
        v10 = struct24 {
            field_0: "\n"
            field_8: 1
            field_16: 8
        };
        v12 = 0;
        v41 = std::io::Write::write_fmt(&v0, &v10);
    } else {
        v23 = a3;
        v4 = &v1;
        v5 = <&T as core::fmt::Display>::fmt;
        v6 = &v22;
        v7 = <&T as core::fmt::Display>::fmt;
        v10 = struct24 {
            field_0: &g_4f3388
            field_8: 3
            field_16: &v4
        };
        v13 = 0;
        v12 = 2;
        v41 = std::io::Write::write_fmt(&v0, &v10);
    }
    v42 = v0;
    v42->field_c = v42->field_c - 1;
    if vvar_323 != 1 {
        return v41;
    }
    v42->field_0 = 0;
    v42->field_8 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x48ba0b;
    }
    if v42->field_8 == 2 {
        goto LABEL_0x48ba25;
    }
    goto LABEL_0x48ba13;
}
