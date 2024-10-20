fn uu_od::inputdecoder::MemoryDecoder::zero_out_buffer(a0: &&struct_0, a1: &u8, a2: u32) -> u64 {
    let v1: &u64;  // rcx
    let v2: u64;  // rax

    if a1 >= a2 {
        return v2;
    }
    v1 = *(a0);
    loop {
        if a1 >= v1[2] {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        a1[v1[1]] = 0;
        a1 += 1;
        if a2 == a1 {
            return v2;
        }
    }
}
