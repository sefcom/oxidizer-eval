fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0xa0]
    let v1: i64;  // [sp-0x98]
    let v2: i64;  // [sp-0x90]
    let v3: i64;  // [sp-0x88]
    let v4: i64;  // [sp-0x80]
    let v5: i64;  // [sp-0x78]
    let v6: i64;  // [sp-0x70]
    let v7: struct41;  // [sp-0x60], Other Possible Types: i328
    let v9: i64;  // rcx
    let v10: i64;  // r15
    let v11: i64;  // rax
    let v12: i64;  // r8
    let v13: i64;  // rbp
    let v14: i64;  // r13
    let v15: i64;  // r13
    let v16: i64;  // r13
    let v17: i64;  // r13
    let v18: i64;  // r13
    let v19: i64;  // r13
    let v20: i64;  // r14
    let v22: i64;  // r13
    let v23: i64;  // r13
    let v25: i64;  // rdi
    let v26: i64;  // r9

    v7 = uu_sort::Output::into_write(a2);
    v5 = *(a0 as &i64);
    v9 = *((a0 + 8) as &i64);
    v1 = *((a0 + 16) as &i64);
    v10 = *((a0 + 24) as &i64);
    v3 = *((a0 + 32) as &i64);
    v2 = *((a0 + 40) as &i64);
    v11 = *((a0 + 48) as &i64);
    v0 = *((a0 + 56) as &i64);
    v11 = *((a0 + 64) as &i64);
    v6 = *((a0 + 72) as &i64);
    v4 = *((a0 + 80) as &i64);
    loop {
        v14 = v10;
        if v15 {
            v10 = v14;
            v13 = v1;
            v16 = v9;
            v17 = v16;
            v18 = v16;
            if !(!v11) {
                goto LABEL_4cd4b0;
            }
            goto LABEL_4cd449;
        }
        if v14 && v14 != v3 {
            v10 = v14 + 24;
            v13 = v2;
            v17 = v14;
            v18 = v14;
            if !v11 {
                goto LABEL_4cd449;
            }
LABEL_4cd4b0:
            v9 = v18;
            v11 = v11;
            v11 = v11;
            v0 = v0;
            if !(!v9) {
                goto LABEL_4cd4c4;
            }
            goto LABEL_4cd410;
        }
        v10 = v14;
        v19 = 0;
        v17 = v19;
        v18 = v19;
        if !(!v11) {
            goto LABEL_4cd4b0;
        }
LABEL_4cd449:
        v9 = v17;
        if !(v11) || !(v11 != v6) {
            if !v9 {
                break;
            }
            v20 = v11;
            goto LABEL_4cd413;
        }
        v11 += 24;
        v0 = v4;
        if !v9 {
LABEL_4cd410:
            v20 = v11;
LABEL_4cd413:
            v9 = 0;
            v22 = v16;
            goto LABEL_4cd416;
        } else {
LABEL_4cd4c4:
            if uu_sort::compare_by() as i64 != 1 {
                v9 = 0;
                v0 = v0;
                v23 = v9;
            } else {
                v1 = v13;
LABEL_4cd416:
                v11 = 0;
                v23 = v25;
            }
            uu_sort::Line::print(v23, &v7, a1, v22, v12, v26);
        }
    }
}
