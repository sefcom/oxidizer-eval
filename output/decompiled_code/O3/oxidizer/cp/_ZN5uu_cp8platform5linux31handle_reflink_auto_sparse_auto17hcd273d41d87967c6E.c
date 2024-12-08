fn uu_cp::platform::linux::handle_reflink_auto_sparse_auto(a0: void*, a1: u64, a2: u64, a3: u64, a4: u64) -> u64 {
    let v0: i72;  // [sp-0x50], Other Possible Types: struct9
    let v1: i8;  // [bp-0x40]
    let v2: i64;  // [sp-0x38]
    let v5: i64;  // rax
    let v6: i64;  // r14
    let v8: i8;  // bpl
    let v9: i64;  // rax

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    if *((&v0 as &char + 8) as &i8) == 2 {
        v5 = v0;
        goto LABEL_513519;
    } else {
        v2 = v0;
        v6 = v1;
        v0 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if !v0 {
            v8 = *((&v0 as &char + 1) as &i8);
            *((a0 + 1) as &u8) = (v2 - 1 < 511) * 2;
            *((a0 + 2) as &i8) = 4;
            *((a0 + 3) as &i8) = v8 * 2 | 1;
            *((a0 + 4) as &i32) = (!uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as i8 ? !v8 ^ 3 : 1);
            v9 = 0;
        } else {
            v5 = v0;
LABEL_513519:
            *((a0 + 8) as &i64) = v5;
            v9 = v5 | -0x100 | 1;
        }
    }
    return struct1 {
        field_0: 1
    };
}
