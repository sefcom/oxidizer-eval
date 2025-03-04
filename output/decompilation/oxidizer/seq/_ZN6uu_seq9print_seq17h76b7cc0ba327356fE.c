fn uu_seq::print_seq(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u8, a7: u32, a8: &u64) -> u64 {
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
    let v20: u64;  // rax
    let v21: u64;  // r15
    let v22: void*;  // r13
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: u64;  // rsi
    let v26: u64;  // rax
    let v27: u64;  // rdx

    v16 = a2;
    v17 = a3;
    v18 = a4;
    v19 = a5;
    v12 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v12);
    v3 = a0->field_20;
    v2 = a0->field_10;
    v1 = a0->field_0;
    v7 = *((&a0->field_38 as &char + 8) as &i64);
    v6 = *((&a0->field_28 as &char + 8) as &i128);
    v5 = *(&(&a0->field_20)[1] as &i128);
    v15 = a0->field_60;
    v14 = a0->field_50;
    v13 = *(&a0->field_48 as &i128);
    v20 = a1 + 1;
    if !a1 {
        v20 = a1;
    }
    v21 = (a6 ? v20 + a7 : 0);
    v11 = *(a8);
    if uu_seq::done_printing(&v1, &v5, &v13) as i8 {
        v22 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
        if !v22 {
            return 0;
        }
        return v22;
    }
    v4 = 0x8000000000000000;
    if v11 == 0x8000000000000000 {
        v23 = uu_seq::write_value_float(&v0, &v1, v21, a1);
        v22 = v23;
        if v23 {
            return v22;
        }
        v10 = v3;
        v9 = v2;
        v26 = v5;
        v27 = (v26 < 9223372036854775812 ? v26 + 9223372036854775809 : 0);
        v8 = v1;
        goto *((4339864 + vvar_25{reg 32} * 4) as &i32) + 4339864;
    } else {
        v24 = v1;
        v25 = (v24 < 9223372036854775812 ? v24 + 9223372036854775809 : 0);
        goto *((4339844 + vvar_24{reg 64} * 4) as &i32) + 4339844;
    }
}
