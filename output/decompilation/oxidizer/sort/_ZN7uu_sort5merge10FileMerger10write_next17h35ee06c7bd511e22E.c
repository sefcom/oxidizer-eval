fn uu_sort::merge::FileMerger::write_next(a0: &struct24, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x180]
    let v1: struct128;  // [bp-0x178], Other Possible Types: u64
    let v2: u64;  // [bp-0x170]
    let v3: i64;  // [bp-0x168]
    let v4: u64;  // [bp-0x158]
    let v5: u64;  // [bp-0x148], Other Possible Types: Option<struct40>
    let v6: u128;  // [bp-0x140]
    let v7: u64;  // [bp-0x138]
    let v8: struct24;  // [bp-0x130]
    let v9: struct16;  // [bp-0x120]
    let v10: struct16;  // [bp-0x110]
    let v11: u8;  // [bp-0x100]
    let v12: u128;  // [bp-0xf0]
    let v13: u128;  // [bp-0xe0]
    let v14: u64;  // [bp-0xd0]
    let v15: u64;  // [bp-0xc8]
    let v16: struct120;  // [bp-0xc8]
    let v17: u8;  // [bp-0xc0]
    let v18: u128;  // [bp-0xb8]
    let v19: struct16;  // [bp-0xa8]
    let v20: struct16;  // [bp-0x98]
    let v21: u128;  // [bp-0x78]
    let v22: u128;  // [bp-0x68]
    let v23: struct24;  // [bp-0x48]
    let v25: i64;  // r14
    let v26: i64;  // r12
    let v27: struct24;  // xmm1
    let v28: u64;  // r15
    let v29: u64;  // rax
    let v30: i64;  // rax
    let v31: u64;  // rax
    let v32: u64;  // rax
    let v33: u64;  // rax
    let v34: u64;  // rdx
    let v35: u64;  // rcx
    let v36: u64;  // r8

    if !*((a0 + 32) as &i64) {
        return 0;
    }
    v25 = *((a0 + 24) as &i64);
    v26 = *((v25 + 16) as &i64);
    alloc::rc::RcInnerPtr::inc_strong(v26);
    v27 = *((v25 + 24) as &i128);
    v4 = *((a0 + 88) as &i64);
    v3 = *((a0 + 72) as &i128);
    *((a0 + 72) as &struct_1 *) = v26;
    v23 = v27;
    *((a0 + 80) as &struct24) = v23;
    v5 = struct32 {
        field_0: v25
        field_8: a1
        field_16: &v3
        field_24: a2
    };
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v5, *((*((v26 + 16) as &i64) + 32) as &i64), *((*((v26 + 16) as &i64) + 40) as &i64));
    v28 = a0 + 16;
    if *((*((v26 + 16) as &i64) + 40) as &i64) == v23 as u64 + 1 {
        v29 = std::sync::mpmc::Receiver<T>::recv(v25, a1, a2);
        v0 = v29;
        if v29 {
            v1 = v29;
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            v15 = v28;
            v17 = 0;
            v5 = 1;
            v6 = 1;
            v7 = v29;
            v30 = alloc::boxed::Box<T>::new(&v5);
            *((*((a0 + 24) as &i64) + 16) as &struct_4 *) = v30;
            v17 = 1;
            *((*((v15 + 8) as &i64) + 24) as &i64) = 0;
        } else {
            v5 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v28);
        }
    } else if *((a0 + 32) as &i64) {
        v5 = v28;
        v6 = 1;
        *((*((a0 + 24) as &i64) + 24) as &i64) = *((*((a0 + 24) as &i64) + 24) as &i64) + 1;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    v33 = v32;
    if !v3 {
        return v33 & -0x100 | *((a0 + 32) as &i64);
    }
    v1 = alloc::rc::Rc<T,A>::try_unwrap(v3);
    v2 = v34;
    v33 = v31;
    if !v1 {
        v16 = uu_sort::chunks::Chunk::recycle(v34);
        v5 = v4;
        v6 = v16.field_0;
        v8 = v18;
        v9 = v19;
        v10 = v20;
        memcpy(&v11, &v16 as u128, 16);
        v12 = v21;
        v13 = v22;
        v14 = v16.field_88;
        std::sync::mpmc::Sender<T>::send(a0, &v5, v35, v36);
    }
    return v33 & -0x100 | *((a0 + 32) as &i64);
}
