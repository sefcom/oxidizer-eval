fn uu_install::mode::parse(a0: u64, a1: u64, a2: u32, a3: u32, a4: u32) -> long long {
    let v0: struct16;  // [bp-0x38]

    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1) {
        return uucore::features::mode::parse_numeric(a0, 0, a1, a2, a3);
    }
    return uucore::features::mode::parse_symbolic(a0, 0, a1, a2, a4, a3);
}
