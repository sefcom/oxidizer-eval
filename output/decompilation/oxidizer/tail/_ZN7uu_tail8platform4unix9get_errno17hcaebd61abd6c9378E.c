fn uu_tail::platform::unix::get_errno() -> long long {
    let v0: struct9;  // [bp-0x28]

    v0 = std::io::error::repr_bitpacked::decode_repr(std::sys::pal::unix::os::errno() * 0x100000000 | 2);
    if v0.field_0 {
        core::option::unwrap_failed(); /* do not return */
    }
    return *((&v0.field_0 as &char + 4) as &i32);
}
