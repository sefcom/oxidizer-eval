fn uu_seq::print_seq(a0: &struct_0, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x200]
    let v1: u128;  // [sp-0x1f8]
    let v2: u128;  // [sp-0x1e8]
    let v3: u64;  // [sp-0x1d8]
    let v4: u64;  // [sp-0x190]
    let v5: u128;  // [sp-0x188]
    let v6: u128;  // [sp-0x178]
    let v7: u64;  // [sp-0x168]
    let v8: u128;  // [sp-0x158]
    let v9: u128;  // [sp-0x148]
    let v10: u64;  // [sp-0x138]
    let v11: u64;  // [sp-0x130]
    let v12: u64;  // [sp-0x118]
    let v13: u128;  // [sp-0xf8]
    let v14: u128;  // [sp-0xe8]
    let v15: u64;  // [sp-0xd8]
    let v16: u64;  // [sp-0xa8]
    let v17: u64;  // [sp-0xa0]
    let v18: u64;  // [sp-0x98]
    let v19: u64;  // [sp-0x90]
    let v20: i64;  // [bp+0x8]
    let v21: i8;  // [bp+0x10]
    let v22: i8;  // [bp+0x18]
    let v26: u64;  // rsi
    let v27: u64;  // rdx
    let v29: u64;  // 4096
    let v30: void*;  // rax
    let v31: void*;  // rax
    let v32: u64;  // rax
    let v33: void*;  // rdx
    let v34: u64;  // rax
    let v35: void*;  // rcx

    v16 = a2;
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v12 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v12, v26, v27);
    v3 = a0->field_20;
    v2 = a0->field_10;
    v1 = a0->field_0;
    v7 = *((&a0->field_38 as &char + 8) as &i64);
    v6 = *((&a0->field_28 as &char + 8) as &i128);
    v5 = *(&(&a0->field_20)[1] as &i128);
    v15 = a0->field_60;
    v14 = a0->field_50;
    v13 = *(&a0->field_48 as &i128);
    v30 = v29 + v21;
    if !v20 {
        v30 = 0;
    }
    v11 = *(v22 as &i64);
    if !uu_seq::done_printing(&v1, &v5, &v13) as i8 {
        v4 = 0x8000000000000000;
        if v11 != 0x8000000000000000 {
            v32 = v1;
            v33 = v32 + 9223372036854775809;
            if v32 >= 9223372036854775812 {
                v33 = 0;
            }
            goto *((4341192 + vvar_21{reg 64} * 4) as &i32) + 4341192;
        } else {
            v31 = uu_seq::write_value_float(&v0, &v1, v30, a1);
            if !v31 {
                v10 = v3;
                v9 = v2;
                v34 = v5;
                v35 = v34 + 9223372036854775809;
                if v34 >= 9223372036854775812 {
                    v35 = 0;
                }
                v8 = v1;
                goto *((4341212 + vvar_22{reg 32} * 4) as &i32) + 4341212;
            }
        }
    } else {
        v31 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
        if !v31 {
            return 0;
        }
    }
    return v31;
}
