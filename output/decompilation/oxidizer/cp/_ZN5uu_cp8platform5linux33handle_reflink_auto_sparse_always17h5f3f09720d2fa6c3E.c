fn uu_cp::platform::linux::handle_reflink_auto_sparse_always(a1: i64, a2: i64, a3: i32, a4: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x58]
    let v1: u8;  // [bp-0x57]
    let v2: u8;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v5: u8;  // bpl
    let v6: u64;  // rax
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: u8;  // al
    let v10: u8;  // r15b
    let v11: u8;  // al
    let v12: void*;  // rax

    uu_cp::platform::linux::check_for_data(a1, a2, a3);
    v5 = v2;
    if v5 != 2 {
        uu_cp::platform::linux::check_sparse_detection(a1, a2, a3);
        if !v0 {
            v10 = (!v1 ? 2 : 4 - (!v5));
            v11 = (!uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as i8 ? (!v5 ? 2 : 2 - (v3 < 1)) : 1);
            *((a0 + 1) as &i32) = (!v5 ? (*(&v0 as &i64) < 0x200) * 3 : 3);
            *((a0 + 2) as &i8) = 4;
            *((a0 + 3) as &u8) = v10;
            *((a0 + 4) as &u8) = v11;
            v12 = 0;
        }
    }
    v7 = 1;
    v8 = v6 & -0x100 | 1;
    return struct16 {
        field_0: v9
        padding_1: <UNKNOWN>
        field_8: v6
    };
}
