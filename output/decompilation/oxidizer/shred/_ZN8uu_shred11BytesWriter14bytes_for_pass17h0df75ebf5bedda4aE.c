fn uu_shred::BytesWriter::bytes_for_pass(a1: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rdx

    if !*(a0 as &i8) {
        v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a1, a0 + 336);
        rand::rng::Rng::fill(a0 + 16, v2, v3);
        return v2;
    }
    v1 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((a0 + 65544) as &i64), *((a0 + 65544) as &i64) + a1, a0 + 1);
    *((a0 + 65544) as &i64) = (a1 + *((a0 + 65544) as &i64)) % 3;
    return v1;
}
