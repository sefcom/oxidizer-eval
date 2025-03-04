fn uu_sort::merge::FileMerger::write_next(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x180]
    let v1: i64;  // [sp-0x178]
    let v2: i64;  // [sp-0x170]
    let v3: iNone;  // [sp-0x168]
    let v4: i64;  // [sp-0x158]
    let v5: struct24;  // [bp-0x148], Other Possible Types: unsigned long, struct32, Option<struct40>
    let v7: i64;  // [sp-0xc8], Other Possible Types: struct128, struct120
    let v8: i8;  // [sp-0xc0]
    let v9: iNone;  // [sp-0x48]
    let v11: i64;  // r14
    let v12: i64;  // r12
    let v13: i64;  // rax
    let v14: iNone;  // xmm1
    let v15: iNone;  // xmm0
    let v16: i64;  // rax
    let v17: i64;  // r15
    let v18: iNone;  // ymm0
    let v19: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v29: i64;  // rcx

    if !*((a0 + 32) as &i64) {
        return 0;
    }
    v11 = *((a0 + 24) as &i64);
    v12 = *((v11 + 16) as &i64);
    alloc::rc::RcInnerPtr::inc_strong(v12);
    v14 = *((v11 + 24) as &i128);
    v4 = *((a0 + 88) as &i64);
    v15 = *((a0 + 72) as &i128);
    v3 = v15;
    *((a0 + 72) as &unsigned long) = v12;
    v9 = v14;
    *((a0 + 80) as void*) = v9;
    v5 = struct32 {
        field_0: v11
        field_8: a1
        field_16: &v3
        field_24: a2
    };
    v16 = *((v12 + 16) as &i64);
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v5, *((v16 + 32) as &i64), *((v16 + 40) as &i64));
    v17 = a0 + 16;
    if *((*((v12 + 16) as &i64) + 40) as &i64) == ((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 as u256) as u64 + 1 {
        v19 = std::sync::mpmc::Receiver<T>::recv(v11, a1, a2);
        v0 = v19;
        if !v19 {
            v5 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v17);
        } else {
            v1 = v19;
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
            }
            v7 = v17;
            v8 = 0;
            v5 = struct24 {
                field_0: 1
                field_8: 1
                field_16: v19
            };
            alloc::boxed::Box<T>::new(&v5);
        }
    } else if !*((a0 + 32) as &i64) {
        core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
    }
    v24 = v22;
    if v3 as i64 {
        v1 = alloc::rc::Rc<T,A>::try_unwrap(v3 as i64);
        v2 = v25;
        v24 = v21;
        if !v1 {
            v7 = uu_sort::chunks::Chunk::recycle(v25);
            v5 = v4;
            v7 = std::sync::mpmc::Sender<T>::send(a0, &v5, v29);
            v24 = 0x8000000000000000;
        }
    }
    v13 = v24 & -0x100 | *((a0 + 32) as &i64);
    return v13;
}
