fn starship::modules::gradle::parse_gradle_version_from_properties(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: core::option::Option<(&str, &str)>;  // [bp-0x98]
    let v1: i64;  // [bp-0x88]
    let v2: struct56;  // [bp-0x80]
    let v3: core::option::Option<(&str, &str)>;  // [bp-0x78]
    let v4: struct16;  // [bp-0x58]
    let v5: core::str::pattern::CharSearcher;  // [bp-0x48]
    let v6: &str;  // [bp-0x18]
    let v8: struct24;  // rax
    let v9: core::option::Option<&str>;  // rax

    v5 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1, a2);
    v4 = struct16 {
        field_0: 0
        field_8: a2
    };
    v6 = 0;
    v8 = core::iter::traits::iterator::Iterator::try_fold(&v4);
    if v8 {
        v0 = core::str::<impl str>::rsplit_once(v8, a2, 47);
        if let Some(_) = v0 {
            v9 = <&str as core::str::pattern::Pattern>::strip_prefix_of("gradle-", v1, v2) as u64;
            if let Some(_) = v9 {
                v3 = core::str::<impl str>::rsplit_once(v9, a2, 45);
                if let Some(_) = v3 {
                    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v3 as i64, *((&v3 as &char + 8) as &i64)) as u64;
                }
            }
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
