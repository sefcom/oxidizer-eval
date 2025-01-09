fn uu_tail::chunks::BytesChunk::from_chunk(a0: &struct8200, a1: void*, a2: u64) -> u64 {
    let v0: u8;  // [bp-0x2028]
    let v1: void*;  // [sp-0x1028]
    let v3: u64;  // r13
    let v4: void*;  // r13
    let v5: u64;  // rdx

    v1 = 0;
    v3 = a1->field_2000;
    v4 = v3 - a2;
    if v3 <= a2 {
        v4 = 0;
        memset(a0, 0, 0x2000);
    } else {
        memset(&v0, 0, 0x2000);
        core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v5, &v0, 0x2000, "src/uu/tail/src/chunks.rs"), v5, uu_tail::chunks::BytesChunk::get_buffer_with(a1, a2), v5, "src/uu/tail/src/chunks.rs");
        memcpy(a0, &v0, 0x2000);
    }
    a0->field_2000 = v4;
    return a0;
}
