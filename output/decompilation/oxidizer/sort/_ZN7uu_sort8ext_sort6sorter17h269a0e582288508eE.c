fn uu_sort::ext_sort::sorter(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x40]
    let v1: u64;  // [sp-0x38]
    let v2: u64;  // [sp-0x30]
    let v4: u64;  // rax
    let v5: u64;  // rax

    v4 = std::sync::mpmc::Receiver<T>::recv(a0, a1, a2);
    v0 = v4;
    if !v0 {
        return v5;
    }
    loop {
        v1 = v4;
        uu_sort::sort_by(v4 + 24, a2, v4 + 48);
        if v2 {
            return v5;
        }
        v4 = std::sync::mpmc::Receiver<T>::recv(a0, a1, a2);
        v0 = v4;
        if !v0 {
            return v5;
        }
    }
}
