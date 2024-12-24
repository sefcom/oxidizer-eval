fn uu_env::string_expander::StringExpander::put_string(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x28]
    let v1: i64;  // [sp-0x20]
    let v2: i64;  // [sp-0x18]
    let v4: i64;  // rdx

    v1 = <std::ffi::os_str::OsString as core::convert::AsRef<std::ffi::os_str::OsStr>>::as_ref(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    v2 = v4;
    v0 = 0x8000000000000000;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v1, v4 + v1);
    return;
}
