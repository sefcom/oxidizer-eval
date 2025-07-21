fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(a0: i64, a1: i64, a2: i64) -> long long {
    let v1: i64;  // r15
    let v2: u64;  // rax
    let v3: i64;  // rbx
    let v4: u64;  // rax

    if a1 >= a2 {
        return v2;
    }
    v1 = *(a0 as &i64);
    do {
        v3 = a1;
    } while ((v4 = <usize as core::iter::range::Step>::forward_unchecked(v3, *((v1 + 16) as &i64)), *((*((v1 + 8) as &i64) + v3) as &i8) = 0, v4 < a2));
    return v4;
}
