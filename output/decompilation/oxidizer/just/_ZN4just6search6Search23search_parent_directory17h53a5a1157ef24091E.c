fn just::search::Search::search_parent_directory(a0: u64, a1: &u8, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct24;  // [bp-0x40]
    let v2: struct80;  // rax
    let v3: u64;  // rdx
    let v4: core::option::Option<&str>;  // rax
    let v5: iNone;  // xmm0

    v2 = std::path::Path::parent(a1, a2);
    if v2 {
        v4 = std::path::Path::parent(v2, v3);
        if let Some(_) = v4 {
            return just::search::Search::find_in_directory(a0, a3, a4, v4, v3) as u64;
        }
    }
    v0 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(a1, a2);
    v5 = *(&v0.field_8 as &i128);
    return struct40 {
        field_0: 0x8000000000000000
        field_8: 9223372036854775811
        field_16: v0.field_0
        field_24: v5
    };
}
