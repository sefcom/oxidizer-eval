fn uu_sort::merge::FileMerger::write_next(a0: i64, a1: void*, a2: u64, a3: u64) -> int {
    let v0: struct16;  // [bp-0x188], Other Possible Types: u64
    let v1: u128;  // [bp-0x178]
    let v2: u64;  // [bp-0x168]
    let v3: Option<struct40>;  // [bp-0x160], Other Possible Types: struct32, u64
    let v4: struct120;  // [bp-0x158], Other Possible Types: u64
    let v5: u64;  // [bp-0x150]
    let v6: struct152;  // [bp-0xc8], Other Possible Types: u64
    let v8: void*;  // r13
    let v9: i64;  // rax
    let v10: u128;  // xmm0
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: Result<struct16, struct9>;  // rax
    let v14: u64;  // rdx
    let v15: void*;  // rax

    if !a1[32] as i64 {
        return struct2 {
            field_0: 0
            field_1: (v15) as u8 as u8
        };
    }
    v8 = a1[24] as i64;
    alloc::rc::RcInnerPtr::inc_strong(v8[16] as i64);
    v9 = v8[16] as i64;
    v10 = v8[24] as i128;
    v2 = a1[88] as i64;
    v1 = a1[72] as i128;
    *(&a1[72] as &struct_1 *) = v9;
    *(&a1[80] as &u128) = v10;
    v3 = struct32 {
        field_0: v8
        field_8: a2
        field_16: &v1
        field_24: a3
    };
    v11 = uu_sort::merge::FileMerger::write_next::{{closure}}(&v3, *((*((v9 + 16) as &i64) + 32) as &i64), *((*((v9 + 16) as &i64) + 40) as &i64));
    if v11 {
        return struct16 {
            field_0: 1
            padding_1: <UNKNOWN>
            field_8: v11
        };
    }
    if *((*((v8[16] as i64 + 16) as &i64) + 40) as &i64) == v8[24] as i64 + 1 {
        v12 = std::sync::mpmc::Receiver<T>::recv(*(v8 as &i64), v8[8] as i64);
        v0 = v12;
        if v12 {
            v6 = v12;
            if !a1[32] as i64 {
                core::option::unwrap_failed(); /* do not return */
            }
            v3 = 1;
            v4 = 1;
            v5 = v12;
            v13 = alloc::boxed::Box<T>::new(&v3) as u64;
            *((a1[24] as i64 + 16) as &Result<struct16, struct9>) = v13;
            *((a1[24] as i64 + 24) as &i64) = 0;
        } else {
            v3 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(a1 + 16);
        }
    } else if a1[32] as i64 {
        *((a1[24] as i64 + 24) as &i64) = *((a1[24] as i64 + 24) as &i64) + 1;
    } else {
        core::option::unwrap_failed(); /* do not return */
    }
    if v1 as i64 {
        v0 = struct16 {
            field_0: alloc::rc::Rc<T,A>::try_unwrap(v1 as i64)
            field_8: v14
        };
        if !(v0.field_0 & 1) {
            v4 = uu_sort::chunks::Chunk::recycle(v14);
            v3 = v2;
            v6 = std::sync::mpmc::Sender<T>::send(*(a1 as &i64), a1[8] as i64, &v3);
        }
    }
    return struct2 {
        field_0: 0
        field_1: (v15) as u8 as u8
    };
}
