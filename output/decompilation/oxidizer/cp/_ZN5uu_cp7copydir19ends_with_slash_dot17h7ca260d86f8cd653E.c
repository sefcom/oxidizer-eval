fn uu_cp::copydir::ends_with_slash_dot(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v3: struct16;  // [bp-0x18]
    let v5: u64;  // rdx

    v3 = struct16 {
        field_0: <&T as core::convert::AsRef<U>>::as_ref(a0)
        field_8: v5
    };
    v0 = <T as alloc::string::ToString>::to_string(&v3);
    return core::slice::<impl [T]>::ends_with(v1, v2, "/.");
}
