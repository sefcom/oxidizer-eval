fn starship::modules::gleam::parse_gleam_version(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x68]
    let v1: struct24;  // [bp-0x58]
    let v2: struct16;  // [bp-0x50]
    let v3: struct40;  // [bp-0x40]
    let v4: struct24;  // [bp-0x18]
    let v6: void*;  // rax

    v3 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v2 = struct16 {
        field_0: 0
        field_8: a2
    };
    v4 = 1;
    v6 = core::iter::traits::double_ended::DoubleEndedIterator::try_rfold(&v2, a1, a2);
    if !v6 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, a2);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
    };
}
