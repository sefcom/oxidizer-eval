fn uu_sort::ext_sort::sorter(a0: u64, a1: u64, a2: &u64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x50], Other Possible Types: &u64, struct16
    let v1: u64;  // [sp-0x48]
    let v2: &u64;  // [sp-0x40]
    let v3: &&struct_0;  // [sp-0x38]
    let v5: &u64;  // rax
    let v7: u64;  // rcx
    let v8: u64;  // r8
    let v9: u64;  // rdi
    let v10: u64;  // rsi
    let v12: u64;  // r9
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rsi
    let v17: u64;  // rdx

    v5 = std::sync::mpmc::Receiver<T>::recv(a0, a1, a2);
    if !v5 {
        return v5;
    }
    loop {
        v2 = v5;
        v9 = v5[4];
        v10 = v5[5];
        if !(!*((&a2[16] as &char + 3) as &i8) && !*((&a2[16] as &char + 4) as &i8)) {
            v0 = struct16 {
                field_0: a2
                field_8: v11
            };
            rayon::slice::mergesort::par_mergesort(v9, v10, &v0, v7, v8, v12);
        } else {
            v0 = a2;
            v1 = v5 + 6;
            v3 = &v0;
            if !v10 {
                v14 = 64;
            } else {
                v14 = (BinaryOp ExpCmpNE ? (BinaryOp ExpCmpNE ? 63 - UnaryOp Clz : v1) : (BinaryOp ExpCmpNE ? 63 - UnaryOp Clz : v1)) ^ 63;
            }
            rayon::slice::quicksort::recurse(v9, v10, &v3, 0, 64 - v14 & 4294967295);
        }
        v0 = std::sync::mpmc::Sender<T>::send(a1, v5, v15);
        if v0 {
            v5 = self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v0);
            return v5;
        }
        v5 = std::sync::mpmc::Receiver<T>::recv(a0, v16, v17);
        if !v5 {
            return v5;
        }
    }
}
