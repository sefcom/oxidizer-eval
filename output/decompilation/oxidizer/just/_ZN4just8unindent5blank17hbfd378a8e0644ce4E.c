fn just::unindent::blank(a0: i64, a1: i64) -> u8 {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 + a0
    };
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), None);
}
