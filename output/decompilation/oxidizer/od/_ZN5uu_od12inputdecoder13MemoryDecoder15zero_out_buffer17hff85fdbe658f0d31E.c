fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(a0: i64, a1: i64, a2: i64) -> u64 {
    let v1: i64;  // rcx
    let v3: u64;  // rax

    if a1 >= a2 {
        return v3;
    }
    v1 = *(a0 as &i64);
    do {
        *((*((v1 + 8) as &i64) + a1) as &i8) = 0;
        a1 += 1;
    } while (a2 != a1);
    return v3;
}
