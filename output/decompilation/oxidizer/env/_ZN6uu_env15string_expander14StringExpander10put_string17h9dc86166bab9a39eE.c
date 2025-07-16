fn uu_env::string_expander::StringExpander::put_string(a1: i64) -> : struct8 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v6: &std::ffi::os_str::OsStr;  // rax:rdx

    v6 = <std::ffi::os_str::OsString as core::convert::AsRef<std::ffi::os_str::OsStr>>::as_ref(*((a0 + 8) as &i64));
    v1 = v6.data_ptr;
    v2 = v6.length;
    v0 = 0x8000000000000000;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(v6.data_ptr);
    return;
}
