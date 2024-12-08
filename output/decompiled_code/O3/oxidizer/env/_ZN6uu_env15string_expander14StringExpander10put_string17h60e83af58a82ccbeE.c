fn uu_env::string_expander::StringExpander::put_string(a0: &u64, a1: u64, a2: i64) -> u64 {
    let v0: u64;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v2: u64;  // [sp-0x10]
    let v4: u64;  // rdx

    v1 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    v2 = v4;
    v0 = 0x8000000000000000;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, v1, v4 + v1);
}
