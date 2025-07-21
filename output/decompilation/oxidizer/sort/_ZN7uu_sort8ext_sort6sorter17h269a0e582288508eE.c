fn uu_sort::ext_sort::sorter(a0: i64, a1: i64, a2: i64) -> void {
    let v0: core::fmt::Arguments;  // [bp-0x40], Other Possible Types: u64
    let v1: core::option::Option<&str>;  // [bp-0x38]
    let v2: struct8;  // [bp-0x30]
    let v4: u64;  // rax

    v4 = std::sync::mpmc::Receiver<T>::recv(a0, a1, a2);
    v0 = v4;
    if v0 {
        do {
            v1 = v4;
            uu_sort::sort_by(v4 + 24, a2, v4 + 48);
            v2 = std::sync::mpmc::Sender<T>::send(a1, v1, a2);
            if v2 {
                return;
            }
            v4 = std::sync::mpmc::Receiver<T>::recv(a0, a1, a2);
            v0 = v4;
        } while (v0);
    }
    return;
}
