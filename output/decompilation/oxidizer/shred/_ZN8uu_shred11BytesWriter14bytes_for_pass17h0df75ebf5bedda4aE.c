fn uu_shred::BytesWriter::bytes_for_pass(a0: &struct8, a1: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // rdx

    if a0->field_0 {
        v1 = a0->field_10008;
        v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v1, v1 + a1, &a0->padding_1 as &struct_0);
        a0->field_10008 = (a1 + a0->field_10008) % 3;
        return v2;
    }
    v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a1, &a0->padding_1[335] as &struct_0);
    rand::rng::Rng::fill(&a0->padding_1[15] as &struct_0, v2, v3);
    return v2;
}
