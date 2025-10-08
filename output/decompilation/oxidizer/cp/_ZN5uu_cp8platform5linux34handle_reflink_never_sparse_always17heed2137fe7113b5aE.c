fn uu_cp::platform::linux::handle_reflink_never_sparse_always(a1: i32, a2: i32, a3: i64, a4: i64) -> : struct9 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x50]
    let v1: struct17;  // [bp-0x48]
    let v2: Result<struct1, struct8>;  // [bp-0x48]
    let v4: u64;  // rax
    let v5: u8;  // al
    let v6: u8;  // r13b
    let v7: struct17;  // bpl
    let v8: u8;  // r12b
    let v10: u8;  // al

    v1 = uu_cp::platform::linux::check_for_data(a1, a2);
    if *((&v2 as &char + 8) as &i8) != 2 {
        v0 = v1.field_16;
        v2 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if let Ok(_) = v2 {
            return struct5 {
                field_0: v10
                field_1: v8
                field_2: 1
                field_3: v7
                field_4: (uu_cp::platform::linux::check_dest_is_fifo(a3, a4) as u8 | v6) & 1
            };
        }
    }
    *((a0 + 8) as &u64) = v4;
    v5 = 1;
}
