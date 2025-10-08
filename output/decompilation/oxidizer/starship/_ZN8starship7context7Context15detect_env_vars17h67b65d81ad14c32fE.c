fn starship::context::Context::detect_env_vars(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x30]
    let v1: struct16;  // [bp-0x20]
    let v7: struct700;  // rax
    let v8: u64;  // rax

    if !a2 {
        return v8 & -0x100 | 1;
    } else if starship::context::Context::has_negated_env_var(a1, a2) {
        return 0;
    } else {
        v1 = struct16 {
            field_0: a1
            field_8: a2 * 16 + a1
        };
        v0 = 0;
        v7 = core::option::Option<T>::get_or_insert_with(&v0, &v1);
        if !*(v7 as &i64) {
            return v7 & -0x100 | 1;
        }
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, 0x1);
    }
}
