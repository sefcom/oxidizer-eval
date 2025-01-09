fn uu_cksum::had_reset(a0: u32, a1: u32) -> u64 {
    let v0: struct16;  // [sp-0x40], Other Possible Types: u64
    let v1: u64;  // [sp-0x38]
    let v6: u64;  // rdx

    v0 = a0;
    v1 = a0 + a1 * 24;
    v0 = struct16 {
        field_0: a0
        field_8: vvar_29{reg 56}
    };
    v0 = struct16 {
        field_0: v0
        field_8: vvar_29{reg 56}
    };
    if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position() != 1 {
        return 0;
    } else if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) != 1 {
        return 0;
    } else if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v0) != 1 {
        return 0;
    } else if v6 >= v6 {
        return 0;
    } else {
        return -0x100 | v6 < v6;
    }
}
