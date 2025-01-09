fn uu_cp::copydir::ends_with_slash_dot(a0: u64) -> u64 {
    let v0: i192;  // [sp-0x30], Other Possible Types: struct24
    let v1: i64;  // [sp-0x18]
    let v2: i64;  // [sp-0x10]
    let v4: i64;  // rdx

    v1 = <&T as core::convert::AsRef<U>>::as_ref(a0);
    v2 = v4;
    v0 = <T as alloc::string::ToString>::to_string(&v1);
    return core::slice::<impl [T]>::ends_with(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), "/.") as i32;
}
