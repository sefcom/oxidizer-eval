fn starship::modules::julia::parse_julia_version(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: core::option::Option<(&str, &str)>;  // [bp-0x88]
    let v1: u64;  // [bp-0x78]
    let v2: struct16;  // [bp-0x70]
    let v3: struct24;  // [bp-0x68]
    let v4: struct24;  // [bp-0x58]
    let v5: struct16;  // [bp-0x50]
    let v6: struct40;  // [bp-0x40]
    let v7: u16;  // [bp-0x18]
    let v9: struct72;  // rax

    v0 = core::str::<impl str>::split_once(a1, a2, 140);
    if let Some(_) = v0 {
        v6 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(v1, v2);
        v5 = struct16 {
            field_0: 0
            field_8: v2
        };
        v7 = 1;
        v9 = core::iter::traits::iterator::Iterator::try_fold(&v5);
        if v9 {
            v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, a2);
            return struct24 {
                field_0: *(&v3.field_0 as &i128)
                field_16: v4
            };
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
