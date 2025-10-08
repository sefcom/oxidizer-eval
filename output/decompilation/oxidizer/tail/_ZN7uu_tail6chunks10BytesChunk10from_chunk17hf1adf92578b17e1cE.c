fn uu_tail::chunks::BytesChunk::from_chunk(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x2028]
    let v1: void*;  // [bp-0x1028]
    let v3: void*;  // r13
    let v4: void*;  // rax
    let v5: u32;  // rdx

    v1 = 0;
    v3 = *((a1 + 0x2000) as &i64) - a2;
    if *((a1 + 0x2000) as &i64) > a2 {
        memset(&v0, 0, 0x2000);
        v4 = uu_tail::chunks::BytesChunk::get_buffer_with(a1, a2);
        core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v5, &v0, 0x2000, "src/uu/tail/src/chunks.rs"), v5, v4, v5, "src/uu/tail/src/chunks.rs");
        memcpy(a0, &v0, 0x2000);
    } else {
        v3 = 0;
        memset(a0, 0, 0x2000);
    }
    *((a0 + 0x2000) as &void*) = v3;
    return a0;
}
