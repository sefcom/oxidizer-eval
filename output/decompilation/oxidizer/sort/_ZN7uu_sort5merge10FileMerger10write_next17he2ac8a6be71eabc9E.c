fn uu_sort::merge::FileMerger::write_next(a1: i32, a2: i64) -> : struct128 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x180]
    let v1: u64;  // [bp-0x178]
    let v2: u64;  // [bp-0x170]
    let v3: i64;  // [bp-0x168]
    let v4: struct16;  // [bp-0x158]
    let v5: u64;  // [bp-0x148], Other Possible Types: core::option::Option<&str>, struct16
    let v6: u64;  // [bp-0x140]
    let v7: u64;  // [bp-0x138]
    let v8: struct16;  // [bp-0x130]
    let v9: struct16;  // [bp-0x120]
    let v10: struct24;  // [bp-0x110]
    let v11: u8;  // [bp-0x100]
    let v12: u128;  // [bp-0xf0]
    let v13: u128;  // [bp-0xe0]
    let v14: u64;  // [bp-0xd0]
    let v15: core::option::Option<&str>;  // [bp-0xc8]
    let v16: u8;  // [bp-0xc0]
    let v17: struct16;  // [bp-0xb8]
    let v18: struct16;  // [bp-0xa8]
    let v19: struct24;  // [bp-0x98]
    let v20: u8;  // [bp-0x88]
    let v21: u128;  // [bp-0x78]
    let v22: u128;  // [bp-0x68]
    let v23: i8;  // [bp-0x58]
    let v24: struct8;  // [bp-0x48]
    let v26: i64;  // rdi
    let v27: i64;  // r14
    let v28: i64;  // r12
    let v29: struct8;  // xmm1
    let v30: core::option::Option<&str>;  // r15
    let v31: u64;  // rax
    let v32: i64;  // rax
    let v33: u64;  // rdx
    let v34: u64;  // r8

    if !*((v26 + 32) as &i64) {
        return;
    }
    v27 = *((v26 + 24) as &i64);
    v28 = *((v27 + 16) as &i64);
    alloc::rc::RcInnerPtr::inc_strong(a0);
    v29 = *((v27 + 24) as &i128);
    v4 = *((v26 + 88) as &i64);
    v3 = *((v26 + 72) as &i128);
    *((v26 + 72) as &struct_3 *) = v28;
    v24 = v29;
    *((v26 + 80) as &struct8) = v24;
    v5 = struct32 {
        field_0: v27
        field_8: a0
        field_16: &v3
        field_24: a1 as u64
    };
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v5, *((*((v28 + 16) as &i64) + 32) as &i64), *((*((v28 + 16) as &i64) + 40) as &i64));
    v30 = v26 + 16;
    if *((*((v28 + 16) as &i64) + 40) as &i64) == v24 as u64 + 1 {
        v31 = std::sync::mpmc::Receiver<T>::recv(v27, a0, a1);
        v0 = v31;
        if v31 {
            v1 = v31;
            if !*((v26 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            v15 = v30;
            v16 = 0;
            v5 = 1;
            v6 = 1;
            v7 = v31;
            v32 = alloc::boxed::Box<T>::new(&v5);
            *((*((v26 + 24) as &i64) + 16) as &struct_1 *) = v32;
            v16 = 1;
            *((*((v15 + 8) as &i64) + 24) as &i64) = 0;
        } else {
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v30, a1);
        }
    } else if *((v26 + 32) as &i64) {
        v5 = v30;
        v6 = 1;
        *((*((v26 + 24) as &i64) + 24) as &i64) = *((*((v26 + 24) as &i64) + 24) as &i64) + 1;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    if !v3 {
        return;
    }
    v1 = alloc::rc::Rc<T,A>::try_unwrap(v3);
    v2 = v33;
    if !v1 {
        uu_sort::chunks::Chunk::recycle(v33, a1);
        v5 = v4;
        *(&v6 as &core::option::Option<&str>) = v15;
        v8 = v17;
        v9 = v18;
        v10 = v19;
        memcpy(&v11, &v20, 16);
        v12 = v21;
        v13 = v22;
        v14 = *(&v23 as &i64);
        std::sync::mpmc::Sender<T>::send(v26, &v5, a2, v34);
    }
    return;
}
