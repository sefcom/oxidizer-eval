fn uu_sort::merge::FileMerger::write_next(a1: i32, a2: i64) -> : struct128 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x180]
    let v1: struct16;  // [bp-0x178], Other Possible Types: struct32
    let v2: i64;  // [bp-0x168]
    let v3: struct24;  // [bp-0x158]
    let v4: struct16;  // [bp-0x148], Other Possible Types: struct24, struct32, u64
    let v5: u128;  // [bp-0x140]
    let v6: u64;  // [bp-0x138]
    let v7: struct32;  // [bp-0x130]
    let v8: struct24;  // [bp-0x120]
    let v9: u128;  // [bp-0x110]
    let v10: u128;  // [bp-0x100]
    let v11: u128;  // [bp-0xf0]
    let v12: u128;  // [bp-0xe0]
    let v13: u64;  // [bp-0xd0]
    let v14: struct16;  // [bp-0xc8]
    let v15: u8;  // [bp-0xc0]
    let v16: struct32;  // [bp-0xb8]
    let v17: struct24;  // [bp-0xa8]
    let v18: u128;  // [bp-0x98]
    let v19: u128;  // [bp-0x88]
    let v20: u128;  // [bp-0x78]
    let v21: u128;  // [bp-0x68]
    let v22: i8;  // [bp-0x58]
    let v23: struct16;  // [bp-0x48]
    let v25: i64;  // rdi
    let v26: i64;  // r14
    let v27: i64;  // r12
    let v28: struct16;  // xmm1
    let v29: struct16;  // r15
    let v30: u64;  // rax
    let v31: i64;  // rax
    let v32: u64;  // rdx
    let v33: u64;  // r8

    if !*((v25 + 32) as &i64) {
        return;
    }
    v26 = *((v25 + 24) as &i64);
    v27 = *((v26 + 16) as &i64);
    alloc::rc::RcInnerPtr::inc_strong(a0);
    v28 = *((v26 + 24) as &i128);
    v3 = *((v25 + 88) as &i64);
    v2 = *((v25 + 72) as &i128);
    *((v25 + 72) as &struct_3 *) = v27;
    v23 = v28;
    *((v25 + 80) as &struct16) = v23;
    v4 = struct32 {
        field_0: v26
        field_8: a0
        field_16: &v2
        field_24: a1 as u64
    };
    v4 = struct32 {
        field_0: v26
        field_8: a0
        field_16: &v2
        field_24: a1 as u64
    };
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v4, *((*((v27 + 16) as &i64) + 32) as &i64), *((*((v27 + 16) as &i64) + 40) as &i64));
    v29 = v25 + 16;
    if *((*((v27 + 16) as &i64) + 40) as &i64) == v23 as u64 + 1 {
        v30 = std::sync::mpmc::Receiver<T>::recv(v26, a0, a1);
        v0 = v30;
        if v30 {
            v1 = v30;
            if !*((v25 + 32) as &i64) {
                core::option::unwrap_failed(); /* do not return */
            }
            v14 = v29;
            v15 = 0;
            v4 = 1;
            v5 = 1;
            v6 = v30;
            v31 = alloc::boxed::Box<T>::new(&v4);
            *((*((v25 + 24) as &i64) + 16) as &struct_1 *) = v31;
            v15 = 1;
            *((*((v14 + 8) as &i64) + 24) as &i64) = 0;
        } else {
            binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v29, a1);
        }
    } else if *((v25 + 32) as &i64) {
        v4 = v29;
        v5 = 1;
        *((*((v25 + 24) as &i64) + 24) as &i64) = *((*((v25 + 24) as &i64) + 24) as &i64) + 1;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    if !v2 {
        return;
    }
    v1 = struct16 {
        field_0: alloc::rc::Rc<T,A>::try_unwrap(v2)
        field_8: v32
    };
    if !v1.field_0 {
        uu_sort::chunks::Chunk::recycle(v32, a1);
        v4 = v3;
        v5 = *(&v14.field_0 as &i128);
        v7 = v16;
        v8 = v17;
        v9 = v18;
        v10 = v19;
        v11 = v20;
        v12 = v21;
        v13 = *(&v22 as &i64);
        std::sync::mpmc::Sender<T>::send(v25, &v4, a2, v33);
    }
    return;
}
