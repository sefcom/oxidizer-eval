fn uu_env::string_expander::StringExpander::put_string(a1: i64) -> : struct8 {
    let a0: u64;  // rdi
    let v0: struct40;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v2: Option<struct25>;  // [bp-0x10]
    let v4: u64;  // rdx

    v1 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    v2 = v4;
    v0 = 0x8000000000000000;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0);
    return;
}
