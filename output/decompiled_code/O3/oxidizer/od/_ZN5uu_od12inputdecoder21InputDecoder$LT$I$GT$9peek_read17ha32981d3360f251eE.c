fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a0: void*, a1: void*) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: struct24;  // [sp-0x90], Other Possible Types: i192
    let v2: Enum;  // [bp-0x78]
    let v3: struct40;  // [sp-0x58], Other Possible Types: i320
    let v5: i64;  // r13
    let v6: i64;  // r12
    let v7: i64;  // r14
    let v10: i64;  // r13
    let v11: i64;  // rbx
    let v12: i64;  // rbp
    let v14: i64;  // rdx
    let v16: i64;  // rdx
    let v17: i64;  // rbx
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // r15
    let v21: i64;  // r15
    let v22: i64;  // rax
    let v23: i64;  // rcx
    let v24: i64;  // rcx
    let v25: i64;  // rdx

    v5 = *((a1 + 16) as &i64);
    v0 = *((a1 + 32) as &i64);
    if v5 < v0 {
        core::panicking::panic(); /* do not return */
    }
    v6 = *((a1 + 24) as &i64);
    v7 = *((a1 + 8) as &i64);
    v11 = v10;
    core::slice::<impl [T]>::copy_from_slice(v7, v11, *((v6 + 80) as &i64), v11, "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/std/src/io/impls.rs");
    v12 = v6 + 72;
    v3 = alloc::vec::Vec<T,A>::drain(v12, v11);
    v17 = v16;
    if <uu_od::partialreader::PartialReader<R> as std::io::Read>::read(v6, v7 + v11, v5 - v11) {
        v18 = a0;
        *(v18 as &i64) = v14;
    } else {
        v19 = v5 - v17;
        v20 = v0;
        v21 = v20 - v19;
        if v20 <= v19 {
            v21 = 0;
        } else {
            v22 = v17;
            v0 = v22 - v21;
            if v22 < v21 {
                core::slice::index::slice_index_order_fail(); /* do not return */
            }
            if v5 < v17 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v3 = alloc::vec::Vec<T,A>::drain(v12, v14);
            v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v3);
            v23 = *((v6 + 88) as &i64);
            if *((v6 + 72) as &i64) - v23 < v21 {
                alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v12, v23, v21);
                v23 = *((v6 + 88) as &i64);
            }
            memcpy(v23 + *((v6 + 80) as &i64), v7 + v0, v21);
            *((v6 + 88) as &i64) = *((v6 + 88) as &i64) + v21;
            v24 = *((&v1 as &char + 8) as &i64);
            v25 = *((&v1 as &char + 16) as &i64);
            v2 = Enum {
                field_0: v24
                field_8: v24
                field_16: v1
                field_24: v25 + v24
            };
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(v12, &v2, v25 + v24);
        }
        v18 = a0;
        *((a1 + 40) as &i64) = v17;
        *((a1 + 48) as &i64) = v21;
        *(v18 as &i64) = a1;
        *((v18 + 8) as &i64) = v17;
        *((v18 + 16) as &i64) = v21;
    }
    *((v18 + 24) as &i8) = 3;
    return v18;
}
