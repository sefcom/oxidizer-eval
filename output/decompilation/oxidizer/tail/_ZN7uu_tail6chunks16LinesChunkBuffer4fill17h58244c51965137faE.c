fn uu_tail::chunks::LinesChunkBuffer::fill(a0: i64, a1: u32) -> long long {
    let v0: struct24;  // [bp-0x6060], Other Possible Types: u8
    let v2: void*;  // [bp-0x6030]
    let v3: void*;  // [bp-0x5030]
    let v6: struct8192;  // [bp-0x4048]
    let v7: void*;  // [bp-0x4030]
    let v8: void*;  // [bp-0x3030]
    let v9: void*;  // [bp-0x2030]
    let v10: void*;  // [bp-0x1030]
    let v12: i64;  // rbx
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: u64;  // r14
    let v16: i64;  // rax
    let v17: u64;  // rax
    let v18: u64;  // rdx
    let v19: struct24;  // rax
    let v20: alloc::string::String;  // rdx

    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v3 = 0;
    v2 = 0;
    memset(&v9, 0, 0x2000);
    memset(&v0, 0, 8208);
    v12 = alloc::boxed::Box<T>::new(&v0);
    loop {
        vvar_327{stack -24672} = struct24 OrderedDict([(0, 𝜙@8b [((4857516, None), vvar_286{stack -24672}), ((4857453, None), vvar_297{stack -24672}), ((4857628, None), vvar_286{stack -24672})]), (8, 𝜙@320b [((4857516, None), vvar_288{stack -24664}), ((4857453, None), None), ((4857628, None), vvar_288{stack -24664})])])
        uu_tail::chunks::LinesChunk::fill(&v0, v12, a1);
        if v0.field_0 as i32 == 1 {
            break;
        }
        if v0.field_8 as i64 {
            *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + *((v12 + 8200) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v12);
            v13 = alloc::collections::vec_deque::VecDeque<T,A>::get(a0);
            if !v13 {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 32) as &i64) - *((*(v13 as &i64) + 8200) as &i64) <= *((a0 + 40) as &i64) {
                memcpy(&v0, &v9, 0x2000);
                v12 = alloc::boxed::Box<T>::new(&v0);
            } else {
                v14 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
                core::option::unwrap(v14);
                v12 = v14;
                *((a0 + 32) as &i64) = *((a0 + 32) as &i64) - *((v14 + 8200) as &i64);
            }
        } else if *((a0 + 24) as &i64) {
            v16 = alloc::collections::vec_deque::VecDeque<T,A>::get_mut(a0, *((a0 + 24) as &i64) - 1);
            if !v16 {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            v17 = uu_tail::chunks::LinesChunk::get_buffer(*(v16 as &i64));
            v0 = *((a0 + 48) as &i8);
            if !core::slice::<impl [T]>::ends_with(v17, v18, &v0, &v0) {
                *((*(v16 as &i64) + 8200) as &i64) = *((*(v16 as &i64) + 8200) as &i64) + 1;
                *((a0 + 32) as &i64) = *((a0 + 32) as &i64) + 1;
            }
            loop {
                v19 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0);
                core::option::unwrap(v19);
                v20 = *((a0 + 32) as &i64) - *((v19 + 8200) as &i64);
                if v20 <= *((a0 + 40) as &i64) {
                    break;
                }
                *((a0 + 32) as &alloc::string::String) = v20;
            }
            v6 = uu_tail::chunks::LinesChunk::from_chunk(v19, (*((a0 + 40) as &i64) <= *((a0 + 32) as &i64) ? *((a0 + 32) as &i64) - *((a0 + 40) as &i64) : 0));
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&v6));
        }
    }
    return v15;
}
