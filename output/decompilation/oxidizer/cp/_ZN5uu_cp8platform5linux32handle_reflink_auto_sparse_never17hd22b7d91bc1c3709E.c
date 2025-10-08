fn uu_cp::platform::linux::handle_reflink_auto_sparse_never(a1: i32, a2: i32) -> : struct9 {
    let a0: i64;  // rdi
    let v0: struct17;  // [bp-0x40]
    let v1: Result<struct1, struct8>;  // [bp-0x40]
    let v3: u64;  // rax
    let v4: u8;  // al
    let v5: u8;  // al
    let v6: u8;  // al

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    if *((&v1 as &char + 8) as &i8) != 2 {
        v1 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if let Ok(v6) = v1 {
            *((a0 + 1) as &i32) = (0x200 <= v1 as i64 ? ((*((&v1 as &char + 8) as &i8) & 1)) as u8 as u8 * 3 : 3);
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &u8) = v6 * 2 + 1;
        }
    }
    v4 = 1;
    return struct16 {
        field_0: v5
        padding_1: <UNKNOWN>
        field_8: v3
    };
}
