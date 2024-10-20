fn uu_dd::bufferedoutput::BufferedOutput::flush(a0: void*, a1: void*) -> u64 {
    let v0: Enum;  // [sp-0x68], Other Possible Types: u256
    let v1: i8;  // [bp-0x48]
    let v2: u128;  // [sp-0x38]
    let v4: u64;  // rax
    let v5: u64;  // r15
    let v6: u64;  // r13
    let v7: u64;  // r12
    let v8: u64;  // r12

    v0 = uu_dd::Output::write_blocks(a1 + 1, a1->field_8, a1->field_10);
    if v0 as i64 {
        a0->field_8 = *((&v0 as &char + 8) as &i64);
        v4 = 1;
    } else {
        v5 = *((&v0 as &char + 16) as &i64);
        v6 = *((&v0 as &char + 24) as &i64);
        v2 = v1;
        if v6 {
            core::result::unwrap_failed(); /* do not return */
        }
        v7 = a1->field_10;
        v8 = v7 - v5;
        if v7 < v5 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        a1->field_10 = 0;
        if !v5 {
            if !(v7 == v5) {
                goto LABEL_4a056d;
            }
        } else {
            if v7 != v5 {
                memmove(a1->field_8, a1->field_8 + v5, v8);
LABEL_4a056d:
                a1->field_10 = v8;
            }
        }
        a0->field_10 = v5;
        a0->field_18 = v6;
        a0->field_20 = v2;
        v4 = 0;
    }
    a0->field_0 = v4;
    return a0;
}
