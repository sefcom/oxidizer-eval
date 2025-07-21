fn uu_cp::platform::linux::handle_reflink_never_sparse_never(a1: i64, a2: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x40]
    let v1: u8;  // [bp-0x3f]
    let v2: u8;  // [bp-0x38]
    let v4: u32;  // rcx
    let v5: u64;  // rax
    let v6: u8;  // al
    let v7: u8;  // al
    let v8: u64;  // rax
    let v9: u8;  // al
    let v10: void*;  // rax

    uu_cp::platform::linux::check_for_data(a1, a2, v4);
    if v2 != 2 {
        uu_cp::platform::linux::check_sparse_detection(a1, a2, v4);
        if !v0 {
            v6 = v1;
            *((a0 + 1) as &i32) = (!v2 ? (*(&v0 as &i64) < 0x200) * 3 : 3);
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &u8) = v6 * 2 | 1;
            v10 = 0;
        }
    }
    v7 = 1;
    v8 = v5 & -0x100 | 1;
    return struct16 {
        field_0: v9
        padding_1: <UNKNOWN>
        field_8: v5
    };
}
