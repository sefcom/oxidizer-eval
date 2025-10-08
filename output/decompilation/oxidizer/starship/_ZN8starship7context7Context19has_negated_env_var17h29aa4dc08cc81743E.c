fn starship::context::Context::has_negated_env_var(a0: u64, a1: u64) -> char {
    let v0: struct16;  // [bp-0x10]

    v0 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), 0x1);
}
