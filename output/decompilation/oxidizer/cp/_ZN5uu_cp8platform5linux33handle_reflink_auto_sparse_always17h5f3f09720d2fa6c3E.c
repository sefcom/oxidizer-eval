fn uu_cp::platform::linux::handle_reflink_auto_sparse_always(a0: &Result<struct8, struct4>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct9;  // [sp-0x58], Other Possible Types: i72
    let v1: i8;  // [bp-0x48]
    let v3: i8;  // bpl
    let v4: i64;  // rax
    let v7: i8;  // bpl
    let v9: i8;  // r14b
    let v10: i8;  // r15b
    let v11: i8;  // al

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    v3 = *((&v0 as &char + 8) as &i8);
    if v3 == 2 {
        v4 = v0;
        goto LABEL_513ca2;
    } else {
        v0 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if !v0 {
            v7 = (!v3 ? 2 : 2 - (v1 < 1));
            if v3 {
                v9 = 3;
            } else {
                v9 = (v0 < 0x200) * 3 & 4294967295 & 255 & 4294967295;
            }
            v10 = (!*((&v0 as &char + 1) as &i8) ? 2 : 4 - (!v3));
            v11 = (!uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as i8 ? v7 : 1);
            *((a0 + 1) as &i8) = v9;
            *((a0 + 2) as &i8) = 4;
            *((a0 + 3) as &i8) = v10;
            *((a0 + 4) as &i8) = v11;
        } else {
            v4 = v0;
LABEL_513ca2:
            *((a0 + 8) as &i64) = v4;
        }
    }
    return struct1 {
        field_0: 1
    };
}
