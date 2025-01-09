fn uu_sort::FieldSelector::split_key_options(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0x58]
    let v4: Option<struct32>;  // rax
    let v5: u32;  // edx

    v0 = struct24 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    if v5 != 0x110000 {
        v4 = core::str::<impl str>::split_at_checked(a1, a2, v4);
        return struct32 {
            field_0: v6
            field_16: v1
        };
    }
    return struct32 {
        field_0: v3
        field_8: a2
        field_16: 1
        field_24: 0
    };
}
