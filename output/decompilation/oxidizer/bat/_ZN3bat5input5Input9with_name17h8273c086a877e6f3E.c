fn bat::input::Input::with_name(a0: u64, a1: void*, a2: u64, a3: u64) -> long long {
    let v0: u8;  // [bp-0xc0]
    let v2: u64;  // rdx

    memcpy(&v0, a1, 160);
    return bat::input::Input::_with_name(a0, &v0, <&T as core::convert::AsRef<U>>::as_ref(a2, a3), v2);
}
