fn bat::input::InputDescription::set_kind(a1: &struct24) -> : struct24 {
    let a0: i64;  // rdi
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x18]
    let v2: i64;  // rax

    v0 = v2;
    *((a0 + 64) as &i64) = *((a1 + 16) as &i64);
    *((a0 + 48) as &i128) = *(a1 as &i128);
    return;
}
