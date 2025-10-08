fn bat::input::named(a1: i64, a2: i64, a3: i64) -> : struct160 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xd8]
    let v1: struct24;  // [bp-0xc0]
    let v2: struct24;  // [bp-0xc0]
    let v3: struct160;  // [bp-0xa8]
    let v4: struct24;  // [bp-0x80]

    if !a2 {
        memcpy(a0, a1, 160);
        return;
    }
    v3 = bat::input::Input::with_name(a1, a2, a3);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("File");
    v0 = v2;
    v4 = bat::input::InputDescription::set_kind(&v0);
    memcpy(a0, &v3, 160);
    return;
}
