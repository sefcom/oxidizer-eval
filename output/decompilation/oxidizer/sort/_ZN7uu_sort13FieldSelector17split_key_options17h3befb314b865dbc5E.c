fn uu_sort::FieldSelector::split_key_options(a1: i64, a2: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u192;  // [bp-0x58]
    let v1: u8;  // [bp-0x40]
    let v2: i8;  // [bp-0x30]
    let v4: &u8;  // rax
    let v5: u32;  // edx
    let v6: u64;  // rax

    v0 = struct24 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    if v5 != 0x110000 {
        v6 = core::str::<impl str>::split_at_checked(&v1, a1, a2, v4) as u64;
        return struct32 {
            field_0: v1
            field_16: *(&v2 as &i128)
        };
    }
    return struct32 {
        field_0: a1
        field_8: a2
        field_16: 1
        field_24: 0
    };
}
