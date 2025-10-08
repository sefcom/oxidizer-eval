fn starship::context::Context::detect_env_vars2(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x30]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r14
    let v5: u64;  // rbx
    let v6: u64;  // rax
    let v7: struct40;  // rax

    if !a2 {
        return 0;
    }
    v2 = v4;
    v1 = v5;
    v6 = starship::context::Context::has_negated_env_var(a1, a2);
    if v6 {
        return v6 & -0x100 | 1;
    }
    v0 = struct32 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: a1
        field_24: a2 * 16 + a1
    };
    v7 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, 0x1);
    return v7 & -0x100 | v7 as u8 ^ 3;
}
