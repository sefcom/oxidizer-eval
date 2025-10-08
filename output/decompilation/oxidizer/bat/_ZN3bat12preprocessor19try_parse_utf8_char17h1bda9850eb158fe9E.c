fn bat::preprocessor::try_parse_utf8_char(a0: u64, a1: u64) -> long long {
    let v0: i8;  // [bp-0x89]
    let v1: struct24;  // [bp-0x88]
    let v2: Option<struct24>;  // [bp-0x70]
    let v3: std::io::error::Error;  // [bp-0x70]
    let v4: Option<struct24>;  // [bp-0x58]
    let v5: Option<struct24>;  // [bp-0x40]
    let v7: core::result::Result<usize, std::io::error::Error>;  // rax

    if a1 {
        v7 = core::ops::function::FnOnce::call_once(a0, 1);
    }
    v1 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v0
    };
    v5 = core::option::Option<T>::or_else(&v3, &v1);
    v1 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v0
    };
    v2 = core::option::Option<T>::or_else(&v5, &v1);
    v1 = struct24 {
        field_0: a0
        field_8: a1
        field_16: &v0
    };
    v4 = core::option::Option<T>::or_else(&v2, &v1);
    return (!v4 as i64 ? 0x110000 : bat::preprocessor::try_parse_utf8_char::{{closure}}(&v4 as u8));
}
