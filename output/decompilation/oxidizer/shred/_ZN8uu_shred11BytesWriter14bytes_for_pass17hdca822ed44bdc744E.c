fn uu_shred::BytesWriter::bytes_for_pass(a0: i64, a1: u32) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u32;  // rdx

    if *(a0 as &i8) != 1 {
        v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a1, a0 + 336);
        <rand_core::block::BlockRng<R> as rand_core::RngCore>::fill_bytes(a0 + 16, v2, v3);
        return v2;
    }
    v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((a0 + 65544) as &i64), *((a0 + 65544) as &i64) + a1, a0 + 1, 65538, "src/uu/shred/src/shred.rs");
    *((a0 + 65544) as &i64) = (a1 + *((a0 + 65544) as &i64)) % 3;
    return v1;
}
