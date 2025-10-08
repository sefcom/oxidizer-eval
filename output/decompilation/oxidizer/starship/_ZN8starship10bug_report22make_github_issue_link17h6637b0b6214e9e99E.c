fn starship::bug_report::make_github_issue_link(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xb8], Other Possible Types: u128
    let v1: u64;  // [bp-0xb0]
    let v2: i64;  // [bp-0xa8], Other Possible Types: u64
    let v3: u64;  // [bp-0xa0]
    let v4: void*;  // [bp-0x98]
    let v5: struct24;  // [bp-0x80], Other Possible Types: struct_1 *
    let v6: u64;  // [bp-0x78]
    let v7: i64;  // [bp-0x70]
    let v8: u64;  // [bp-0x68]
    let v9: struct24;  // [bp-0x60]
    let v10: u8;  // [bp-0x48]
    let v11: u64;  // [bp-0x38]
    let v12: struct24;  // [bp-0x30]

    v0 = urlencoding::enc::encode_binary(a1, a2);
    v9 = alloc::str::<impl str>::replace(v1, v2, "%20", "+");
    v12 = urlencoding::enc::encode_binary("Bug_report.md");
    v5 = &v12;
    v6 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v7 = &v9;
    v8 = <alloc::string::String as core::fmt::Display>::fmt;
    v0 = "https://github.com/starship/starship/issues/new?template=";
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 2;
    core::option::Option<T>::map_or_else(&v10, 0, a2, &v0);
    v0 = v10;
    v2 = v11;
    v5 = struct24 {
        field_0: v1
        field_8: v2 + v1
        field_16: 8100
    };
    core::iter::traits::iterator::Iterator::collect(a0, &v5);
    return;
}
