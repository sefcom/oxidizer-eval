fn uu_tail::paths::Input::from(a0: &struct48, a1: u64) -> int {
    let v0: i192;  // [sp-0x60], Other Possible Types: struct24
    let v1: i128;  // [sp-0x48], Other Possible Types: struct24
    let v2: i64;  // [sp-0x38]
    let v3: Option<struct24>;  // [sp-0x30]
    let v5: i64;  // rax
    let v6: i64;  // rdx

    v5 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    v3 = <uu_tail::paths::InputKind as core::convert::From<&std::ffi::os_str::OsStr>>::from(v5, v6);
    match v3 {
        None => {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("standard input");
            v2 = *((&v0 as &char + 16) as &i64);
            v1 = v0;
        },
        Some(_) => {
            v0 = std::sys::os_str::bytes::Slice::to_string_lossy(v5, v6);
            v1 = <alloc::borrow::Cow<str> as alloc::string::ToString>::to_string(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
        },
    }
    return struct48 {
        field_0: v1
        field_16: v2
        field_24: v10
        field_40: *((&v3 as &char + 16) as &i64)
    };
}
