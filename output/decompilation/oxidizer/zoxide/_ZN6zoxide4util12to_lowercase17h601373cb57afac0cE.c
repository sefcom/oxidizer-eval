fn zoxide::util::to_lowercase(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v1: u64;  // rax
    let v2: u64;  // rsi
    let v3: u64;  // rdx

    v1 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    v2 = v1;
    if !core::slice::ascii::is_ascii(v1, v3) {
        alloc::str::<impl str>::to_lowercase(a0, v2);
        return;
    }
    alloc::str::<impl str>::to_ascii_lowercase(a0, v2, v3);
    return;
}
