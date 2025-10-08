fn bat::input::InputDescription::summary(a0: u64, a1: i64) -> long long {
    let v0: alloc::string::String;  // [bp-0x20]

    if !((((0 ^ *((a1 + 72) as &i64)) & (0 ^ -(*((a1 + 72) as &i64)))) >> 63) as char) {
        v0 = <alloc::string::String as core::clone::Clone>::clone(a1 + 72);
        return struct24 {
            field_0: v0.vec.buf.inner.cap.__0
            field_8: *(&v0.vec.buf.inner.ptr as &i128)
        };
    }
    bat::input::InputDescription::summary::{{closure}}(a0, a1);
    return a0;
}
