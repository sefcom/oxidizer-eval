fn uu_tail::paths::Input::from(a1: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x70]
    let v1: Result<struct24, struct24>;  // [bp-0x70]
    let v2: void*;  // [bp-0x68]
    let v3: u64;  // [bp-0x60], Other Possible Types: unsigned long
    let v4: struct24;  // [bp-0x58], Other Possible Types: struct44
    let v5: Result<struct24, struct24>;  // [bp-0x48]
    let v6: Option<struct24>;  // [bp-0x38]
    let v8: void*;  // rax
    let v9: u64;  // rdx

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    v6 = <uu_tail::paths::InputKind as core::convert::From<&std::ffi::os_str::OsStr>>::from(v8, v9);
    if (((0 ^ v6 as i64) & (0 ^ -(v6 as i64))) >> 63) as char {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("standard input");
        v5 = v3;
        v4 = *(&v0.field_0 as &i128);
    } else {
        v1 = alloc::string::String::from_utf8_lossy(v8, v9);
        v4 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v2, v3);
    }
    return struct48 {
        field_0: v4
        field_16: v5
        field_24: *((&v1 as &char + 56) as &i128)
        field_40: *((&v1 as &char + 72) as &i64)
    };
}
