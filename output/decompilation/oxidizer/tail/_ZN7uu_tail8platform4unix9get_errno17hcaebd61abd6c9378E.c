fn uu_tail::platform::unix::get_errno() -> u64 {
    let v0: i72;  // [sp-0x28], Other Possible Types: struct9

    v0 = std::io::error::repr_bitpacked::decode_repr(std::sys::pal::unix::os::errno() as i32 * 0x100000000 | 2);
    if v0 {
        core::option::unwrap_failed("src/uu/tail/src/platform/unix.rs"); /* do not return */
    }
    return vvar_31{reg 56};
}
