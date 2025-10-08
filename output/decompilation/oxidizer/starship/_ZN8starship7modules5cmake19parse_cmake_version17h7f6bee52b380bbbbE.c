fn starship::modules::cmake::parse_cmake_version(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x68]
    let v1: <anon>;  // [bp-0x58]
    let v2: struct16;  // [bp-0x50]
    let v3: struct40;  // [bp-0x40]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x18]
    let v6: void*;  // rax

    v3 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v2 = struct16 {
        field_0: 0
        field_8: a2
    };
    v4 = 1;
    if !core::iter::traits::iterator::Iterator::advance_by(&v2, 2) {
        v6 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if v6 {
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, a2);
            return struct24 {
                field_0: *(&v0.field_0 as &i128)
                field_16: v1
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
