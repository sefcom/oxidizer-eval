fn starship::init::StarshipPath::str_path(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x28], Other Possible Types: struct24
    let v2: struct700;  // rax
    let v3: void*;  // rcx

    v0 = core::str::converts::from_utf8(a1, a2);
    if let Err(_) = v0 {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("can't convert to str");
        v2 = std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v0), &g_11f1380);
    }
    return struct16 {
        field_0: v3
        field_8: v2
    };
}
