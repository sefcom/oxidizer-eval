fn uu_cp::platform::linux::handle_reflink_never_sparse_auto(a1: i32, a2: i32, a3: i64, a4: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct17;  // [bp-0x50]
    let v1: Result<struct1, struct8>;  // [bp-0x50]
    let v2: u64;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v6: u64;  // rax
    let v7: u8;  // al
    let v9: Result<struct4, struct8>;  // r12b
    let v10: u8;  // bpl
    let v11: u8;  // r13b
    let v12: u8;  // al

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    if v0.field_8 != 2 {
        v3 = v2;
        v1 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if let Ok(_) = v1 {
            return struct5 {
                field_0: v12
                field_1: v11
                field_2: 1
                field_3: v10
                field_4: v9
            };
        }
    }
    *((a0 + 8) as &u64) = v6;
    v7 = 1;
}
