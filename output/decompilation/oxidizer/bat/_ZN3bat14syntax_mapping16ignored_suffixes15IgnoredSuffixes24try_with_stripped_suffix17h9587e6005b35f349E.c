fn bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(a0: &u8, a1: void*, a2: u64, a3: u64, a4: u32) -> long long {
    let v0: i8;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: u8;  // [bp-0x20]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // rax
    let v5: u32;  // rdx

    v4 = core::str::converts::from_utf8(a2, a3);
    if *(&v0 as &i32) != 1 {
        v4 = bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix(a1, v1, *(&v2 as &i64));
        if let Err(_) = v4 {
            return bat::syntax_mapping::SyntaxMapping::get_syntax_for::{{closure}}(a0, a4, v4, v5) as u64;
        }
    }
    return struct16 {
        field_0: 13
        padding_1: <UNKNOWN>
        field_8: 3
    };
}
