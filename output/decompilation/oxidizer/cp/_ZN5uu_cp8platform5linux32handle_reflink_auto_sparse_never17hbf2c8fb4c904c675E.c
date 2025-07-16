fn uu_cp::platform::linux::handle_reflink_auto_sparse_never(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x40]
    let v1: u8;  // [bp-0x3f]
    let v2: u8;  // [bp-0x38]
    let v4: u32;  // rcx
    let v5: u64;  // rax
    let v6: u8;  // al
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: void*;  // rax
    let v10: u8;  // al

    uu_cp::platform::linux::check_for_data(a1, a2, v4);
    if v2 != 2 {
        uu_cp::platform::linux::check_sparse_detection(a1, a2, v4);
        if !v0 {
            v6 = v1;
            v9 = 0;
            return struct4 {
                field_0: v10
                field_1: (!v2 ? (*(&v0 as &i64) < 0x200) as u8 as u8 * 3 : 3)
                field_2: 1
                field_3: v6 * 2 | 1
            };
        }
    }
    *((a0 + 8) as &u64) = v5;
    v7 = 1;
    v8 = v5 & -0x100 | 1;
}
