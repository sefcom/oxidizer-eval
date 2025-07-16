fn uu_cp::platform::linux::handle_reflink_auto_sparse_auto(a1: i64, a2: i64, a3: i64, a4: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x50]
    let v1: u8;  // [bp-0x48]
    let v3: u64;  // [bp-0x38]
    let v5: u64;  // rax
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: u8;  // r12b
    let v10: struct24;  // r13b
    let v11: u8;  // bpl
    let v12: void*;  // rax
    let v13: u8;  // al

    uu_cp::platform::linux::check_for_data(a1, a2, a3);
    if v1 != 2 {
        v3 = *(&v0 as &i64);
        uu_cp::platform::linux::check_sparse_detection(a1, a2, a3);
        if !v0 {
            v12 = 0;
            return struct5 {
                field_0: v13
                field_1: v9
                field_2: 4
                field_3: v11
                field_4: v10
            };
        }
    }
    *((a0 + 8) as &u64) = v5;
    v7 = 1;
    v8 = v5 & -0x100 | 1;
}
