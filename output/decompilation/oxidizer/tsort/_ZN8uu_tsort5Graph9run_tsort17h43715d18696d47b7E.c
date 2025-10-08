fn uu_tsort::Graph::run_tsort(a0: i64) -> int {
    let v0: u8;  // [bp-0xb9]
    let v1: i64;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: i64;  // [bp-0xa0], Other Possible Types: u8
    let v4: u64;  // [bp-0x98]
    let v5: core::fmt::Arguments;  // [bp-0x80], Other Possible Types: struct32, struct8
    let v7: u8;  // [bp-0x50]
    let v9: u64;  // r14
    let v10: struct437;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: i64;  // r13
    let v14: u64;  // 4096
    let v15: u64;  // rdi
    let v16: core::fmt::Arguments;  // rax
    let v17: core::fmt::rt::Argument;  // r13
    let v18: u64;  // rdx
    let v19: u64;  // rbx
    let v20: i64;  // rax
    let v21: u64;  // 4096

    v5 = hashbrown::map::HashMap<K,V,S,A>::iter(a0 + 24);
    core::iter::traits::iterator::Iterator::collect(&v7, &v5);
    v10 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v7);
    if v11 >= 2 {
        if v11 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v10, v11);
        } else {
            core::slice::sort::unstable::ipnsort(v10, v11, &v0);
        }
    }
    v12 = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(&v7);
    if v11 >= 2 {
        if v11 < 21 {
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v12, v11);
        } else {
            core::slice::sort::unstable::ipnsort(v12, v11, &v0);
        }
    }
    if !*((v1 + 48) as &i64) {
        return;
    }
    v13 = &v3;
    v14 = a0;
    do {
        v15 = a0;
        v2 = uu_tsort::Graph::find_next_node(v15, &v7);
        v3 = &v2;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = core::fmt::Arguments {
            pieces: [&g_4eb328, "\n"]
            args: &[core::fmt::rt::Argument] {
                ptr: v13
                len: 1
            }
            fmt: 0
        };
        std::io::stdio::_print(&v5);
        hashbrown::map::HashMap<K,V,S,A>::remove(v13, v9, v2, v11);
        if v3 != 0x8000000000000000 {
            v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v13);
            v16 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v5);
            if v16 {
                v18 = v11;
                do {
                    v19 = v11;
                    v20 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v9, v17, v19);
                    core::option::unwrap(v20);
                    v21 = *((v20 + 40) as &i64);
                    *((v20 + 40) as &i64) = *((v20 + 40) as &i64) - 1;
                    if v21 == 1 {
                        v7 = alloc::collections::vec_deque::VecDeque<T,A>::push_back(v17, v19, "src/uu/tsort/src/tsort.rs");
                    }
                    v17 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v5);
                } while (v16);
            }
        }
    } while (*((v1 + 48) as &i64));
    return;
}
