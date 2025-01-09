fn uu_sort::merge::FileMerger::write_next(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x180]
    let v1: i64;  // [sp-0x178]
    let v2: i64;  // [sp-0x170]
    let v3: i128;  // [sp-0x168]
    let v4: i64;  // [sp-0x158]
    let v5: Option<struct40>;  // [bp-0x148], Other Possible Types: struct32, struct24, i64, struct128
    let v6: i8;  // [bp-0x140]
    let v7: struct120;  // [sp-0xc8], Other Possible Types: struct128, i64
    let v8: i8;  // [sp-0xc0]
    let v9: i128;  // [sp-0x48]
    let v11: i64;  // r14
    let v12: i64;  // r12
    let v13: i64;  // rax
    let v14: i128;  // xmm1
    let v15: i128;  // xmm0
    let v16: i64;  // rax
    let v17: i64;  // r15
    let v18: i256;  // ymm0
    let v19: i64;  // rsi
    let v20: i64;  // rdx
    let v28: i64;  // rcx

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
    *((a0 + 72) as &i64) = v12;
    v9 = v14;
    *((a0 + 80) as &i128) = v9;
    v5 = struct32 {
        field_0: v11
        field_8: a1
        field_16: &v3
        field_24: a2
    };
    v16 = *((v12 + 16) as &i64);
    uu_sort::merge::FileMerger::write_next::{{closure}}(&v5, *((v16 + 32) as &i64), *((v16 + 40) as &i64));
    v17 = a0 + 16;
    if *((*((v12 + 16) as &i64) + 40) as &i64) != (v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9) + 1 {
        if !*((a0 + 32) as &i64) {
            core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
        }
        v5 = v17;
        v6 = 1;
        *((*((a0 + 24) as &i64) + 24) as &i64) = *((*((a0 + 24) as &i64) + 24) as &i64) + 1;
    } else {
        v0 = std::sync::mpmc::Receiver<T>::recv(v11, v19, v20);
        if !v0 {
            v5 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v17);
        } else {
            v1 = v0;
            if !*((a0 + 32) as &i64) {
                core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
            }
            v7 = v17;
            v8 = 0;
            v5 = struct24 {
                field_0: 1
                field_8: 1
                field_16: v21
            };
            v8 = 1;
            *((*((a0 + 24) as &i64) + 16) as &double) = alloc::boxed::Box<T>::new(&v5);
            v8 = 1;
            *((*((v7 + 8) as &i64) + 24) as &i64) = 0;
        }
    }
    if v3 {
        v1 = alloc::rc::Rc<T,A>::try_unwrap(v3);
        v2 = v20;
        if !(!v1) {
            goto LABEL_0x53371d;
        }
        v7 = uu_sort::chunks::Chunk::recycle(v20);
        v5 = struct128 {
            field_0: v4
            field_8: v7
            field_24: v25
            field_40: v26
            field_56: v27
            field_72: *((&v7 as &char + 64) as &i128)
            field_88: *((&v7 as &char + 80) as &i128)
            field_104: *((&v7 as &char + 96) as &i128)
            field_120: *((&v7 as &char + 112) as &i64)
        };
        v7 = std::sync::mpmc::Sender<T>::send(a0, &v5, v28);
    }
    v13 = 0x8000000000000000 | -0x100 | *((a0 + 32) as &i64);
    return v13;
}
