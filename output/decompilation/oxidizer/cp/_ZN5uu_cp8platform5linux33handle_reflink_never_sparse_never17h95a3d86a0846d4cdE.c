fn uu_cp::platform::linux::handle_reflink_never_sparse_never(a0: &Result<struct3, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: i72;  // [sp-0x40], Other Possible Types: struct9
    let v2: i8;  // bpl
    let v3: i64;  // rax
    let v5: i8;  // al
    let v6: i8;  // dl

    v0 = uu_cp::platform::linux::check_for_data(a1, a2);
    v2 = *((&v0 as &char + 8) as &i8);
    if v2 == 2 {
        v3 = v0;
        goto LABEL_513d82;
    } else {
        v0 = uu_cp::platform::linux::check_sparse_detection(a1, a2);
        if !v0 {
            v5 = *((&v0 as &char + 1) as &i8);
            v6 = (!v2 ? (v0 < 0x200) * 3 & 4294967295 & 4294967295 : 3);
            *((a0 + 1) as &i8) = v6;
            *((a0 + 2) as &i8) = 1;
            *((a0 + 3) as &i8) = v5 * 2 | 1;
        } else {
            v3 = v0;
LABEL_513d82:
            *((a0 + 8) as &i64) = v3;
        }
    }
    return struct1 {
        field_0: 1
    };
}
