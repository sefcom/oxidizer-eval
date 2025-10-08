fn uu_sort::ext_sort::sorter(a0: u32, a1: u64, a2: u32, a3: u64, a4: &u64) -> void {
    let v0: i64;  // [bp-0x48]
    let v1: u64;  // [bp-0x38]
    let v3: i64;  // rax

    v3 = std::sync::mpmc::Receiver<T>::recv(a0, a1);
    v0 = v3;
    if v0 {
        do {
            uu_sort::sort_by(*((v3 + 32) as &i64), *((v3 + 40) as &i64), a4, v3 + 48);
            v1 = std::sync::mpmc::Sender<T>::send(a2, a3, v3);
            if v1 {
                return;
            }
            v3 = std::sync::mpmc::Receiver<T>::recv(a0, a1);
            v0 = v3;
        } while (v0);
    }
    return;
}
