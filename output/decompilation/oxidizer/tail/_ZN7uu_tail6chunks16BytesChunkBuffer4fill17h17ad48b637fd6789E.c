fn uu_tail::chunks::BytesChunkBuffer::fill(a1: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x4030]
    let v1: void*;  // [bp-0x3030]
    let v3: void*;  // [bp-0x2030]
    let v4: void*;  // [bp-0x1030]
    let v6: i64;  // r14
    let v7: u64;  // rcx
    let v8: u64;  // rax
    let v9: struct16;  // rax
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rbx
    let v11: struct16;  // r15
    let v12: u64;  // rcx

    v4 = 0;
    v3 = 0;
    v1 = 0;
    v0 = 0;
    memset(&v3, 0, 0x2000);
    memset(&vvar_60{reg 16}, 0, 8200);
    v6 = alloc::boxed::Box<T>::new(&vvar_60{reg 16});
    loop {
        uu_tail::chunks::BytesChunk::fill(v6, a1, v7);
        if v8 {
            v10 = v0;
            break;
        } else if v0 {
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + *((v6 + 0x2000) as &i64);
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a0, v6);
            if !*((a0 + 24) as &i64) {
                core::option::expect_failed("Out of bounds access"); /* do not return */
            }
            if *((a0 + 40) as &i64) - *((*((*((a0 + 8) as &i64) + (*((a0 + 16) as &i64) - (*(a0 as &i64) <= *((a0 + 16) as &i64) ? *(a0 as &i64) : 0)) * 8) as &i64) + 0x2000) as &i64) <= *((a0 + 32) as &i64) {
                memcpy(&vvar_60{reg 16}, &v3, 0x2000);
                v6 = alloc::boxed::Box<T>::new(&vvar_60{reg 16});
            } else {
                v9 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0) as u64;
                if !v9 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v6 = v9;
                *((a0 + 40) as &i64) = *((a0 + 40) as &i64) - *((v9 + 0x2000) as &i64);
            }
        } else if *((a0 + 24) as &i64) {
            v11 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a0) as u64;
            if !v11 {
                core::option::unwrap_failed(); /* do not return */
            }
            uu_tail::chunks::BytesChunk::from_chunk(v11, (*((a0 + 32) as &i64) <= *((a0 + 40) as &i64) ? *((a0 + 40) as &i64) - *((a0 + 32) as &i64) : 0), v12);
            alloc::collections::vec_deque::VecDeque<T,A>::push_front(a0, alloc::boxed::Box<T>::new(&vvar_60{reg 16}));
        }
    }
    return v10;
}
