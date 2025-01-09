fn uu_cp::platform::linux::handle_reflink_never_sparse_auto(a0: &Result<struct4, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct9;  // [sp-0x50], Other Possible Types: i72
    let v1: i64;  // [sp-0x38]
    let v3: i8;  // r14b
    let v4: i64;  // rax
    let v5: i8;  // bpl
    let v7: i8;  // r12b

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    v3 = *((&v0 as &char + 8) as &i8);
    if v3 == 2 {
        v4 = v0;
        goto LABEL_513ff9;
    } else {
        v1 = v0;
        v0 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if !v0 {
            v5 = *((&v0 as &char + 1) as &i8);
            if !(v3 || v1 < 0x200) {
                v7 = 0;
            } else if !v5 {
                v7 = a2 & -0x100 | 3;
            } else {
                v7 = a2 & -0x100 | 3;
            }
            *((a0 + 1) as &i8) = v7;
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &i8) = v5 * 2 | 1;
            *((a0 + 4) as &i32) = (!uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as i8 ? !v5 ^ 3 : 1);
        } else {
            v4 = v0;
LABEL_513ff9:
            *((a0 + 8) as &i64) = v4;
        }
    }
    return struct1 {
        field_0: 1
    };
}
