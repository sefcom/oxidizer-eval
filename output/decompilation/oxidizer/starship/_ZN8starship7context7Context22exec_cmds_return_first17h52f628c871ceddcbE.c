fn starship::context::Context::exec_cmds_return_first(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct16;  // [bp-0x18]

    v0 = struct16 {
        field_0: a2
        field_8: a2 + a3 * 24
    };
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(a0, &v0, a1);
    return a0;
}
