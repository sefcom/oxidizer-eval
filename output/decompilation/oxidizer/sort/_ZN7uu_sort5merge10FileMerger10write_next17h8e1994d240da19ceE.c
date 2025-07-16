fn uu_sort::merge::FileMerger::write_next(a0: &struct24, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x180]
    let v1: struct128;  // [bp-0x178], Other Possible Types: u64
    let v2: u64;  // [bp-0x170]
    let v3: i64;  // [bp-0x168]
    let v4: u64;  // [bp-0x158]
    let v5: u64;  // [bp-0x148]
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
    let v16: u8;  // [bp-0xc0]
    let v17: u128;  // [bp-0xb8]
    let v18: struct16;  // [bp-0xa8]
    let v19: struct16;  // [bp-0x98]
    let v20: u8;  // [bp-0x88]
    let v21: u128;  // [bp-0x78]
    let v22: u128;  // [bp-0x68]
    let v23: i8;  // [bp-0x58]
    let v24: struct24;  // [bp-0x48]
    let v26: i64;  // r14
    let v27: i64;  // r12
    let v28: struct24;  // xmm1
    let v29: u64;  // r15
    let v30: u64;  // rax
    let v31: i64;  // rax
    let v32: u64;  // rax
    let v33: u64;  // rax
    let v34: u64;  // rax
    let v35: u64;  // rdx
    let v36: u64;  // rcx
    let v37: u64;  // r8

    if !*((a0 + 32) as &i64) {
        return 0;
    }
    v26 = *((a0 + 24) as &i64);
    v27 = *((v26 + 16) as &i64);
    alloc::rc::RcInnerPtr::inc_strong(a1);
    v28 = *((v26 + 24) as &i128);
    v4 = *((a0 + 88) as &i64);
    v3 = *((a0 + 72) as &i128);
    *((a0 + 72) as &struct_1 *) = v27;
    v24 = v28;
    *((a0 + 80) as &struct24) = v24;
    v5 = struct32 {
        field_0: v26
        field_8: a1
        field_16: &v3
        field_24: a2
    };
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v5, *((*((v27 + 16) as &i64) + 32) as &i64), *((*((v27 + 16) as &i64) + 40) as &i64));
    v29 = a0 + 16;
    if *((*((v27 + 16) as &i64) + 40) as &i64) == v24 as u64 + 1 {
        v30 = std::sync::mpmc::Receiver<T>::recv(v26, a1, a2);
        v0 = v30;
        if v30 {
            v1 = v30;
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            v15 = v29;
            v16 = 0;
            v5 = 1;
            v6 = 1;
            v7 = v30;
            v31 = alloc::boxed::Box<T>::new(&v5);
            *((*((a0 + 24) as &i64) + 16) as &struct_4 *) = v31;
            v16 = 1;
            *((*((v15 + 8) as &i64) + 24) as &i64) = 0;
        } else {
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v29, a2);
        }
    } else if *((a0 + 32) as &i64) {
        v5 = v29;
        v6 = 1;
        *((*((a0 + 24) as &i64) + 24) as &i64) = *((*((a0 + 24) as &i64) + 24) as &i64) + 1;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    v34 = v33;
    if !v3 {
        return v34 & -0x100 | *((a0 + 32) as &i64);
    }
    v1 = alloc::rc::Rc<T,A>::try_unwrap(v3);
    v2 = v35;
    v34 = v32;
    if !v1 {
        uu_sort::chunks::Chunk::recycle(v35, a2);
        v5 = v4;
        v6 = *(&v15 as &i128);
        v8 = v17;
        v9 = v18;
        v10 = v19;
        memcpy(&v11, &v20, 16);
        v12 = v21;
        v13 = v22;
        v14 = *(&v23 as &i64);
        std::sync::mpmc::Sender<T>::send(a0, &v5, v36, v37);
    }
    return v34 & -0x100 | *((a0 + 32) as &i64);
}
