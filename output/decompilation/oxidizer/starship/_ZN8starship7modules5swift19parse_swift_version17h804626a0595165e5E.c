fn starship::modules::swift::parse_swift_version(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: struct24;  // [bp-0x70]
    let v1: struct24;  // [bp-0x68]
    let v2: &str;  // [bp-0x58]
    let v3: struct16;  // [bp-0x50]
    let v4: struct40;  // [bp-0x40]
    let v5: Option<struct48>;  // [bp-0x18]
    let v7: void*;  // rax

    v4 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v3 = struct16 {
        field_0: 0
        field_8: a2
    };
    v5 = 1;
    v0 = 0;
    if (core::iter::traits::iterator::Iterator::try_fold(&v3, &v0) & 1) {
        v7 = core::iter::traits::iterator::Iterator::try_fold(&v3);
        if v7 {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, a2);
            return struct24 {
                field_0: v1.field_0
                field_16: v2
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
