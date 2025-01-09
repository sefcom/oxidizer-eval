fn uu_env::string_expander::StringExpander::put_string(a0: &struct8, a1: &u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v4: u64;  // rdx

    v1 = <std::ffi::os_str::OsString as core::convert::AsRef<std::ffi::os_str::OsStr>>::as_ref(a1[1], a1[2]);
    v2 = v4;
    v0 = 0x8000000000000000;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v1, v4 + v1);
    return;
}
