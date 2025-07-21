fn uu_env::split_iterator::SplitIterator::state_root(a1: i64) -> Option<struct40> {
    let a0: i64;  // rdi
    let v1: struct40;  // [bp-0x40]
    let v2: core::fmt::Arguments;  // [bp-0x30]

    do {
        vvar_82{stack -64} = struct40 OrderedDict({0: 𝜙@128b [((5085612, None), vvar_71{stack -64}), ((5085552, None), None)]})
        uu_env::split_iterator::SplitIterator::state_delimiter(&v1, a1);
    } while (v1.field_0 as i32 == 7);
    if v1.field_0 as i32 != 6 {
        return Some(struct40 {
            field_0: v1.field_0
            field_16: v2
            field_32: v1.field_32
        });
    }
    return struct4 {
        field_0: 8
    };
}
