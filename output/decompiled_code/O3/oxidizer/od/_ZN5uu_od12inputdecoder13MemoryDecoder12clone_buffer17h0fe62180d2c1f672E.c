fn uu_od::inputdecoder::MemoryDecoder::clone_buffer(a0: &&struct_0, a1: &u64) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v1: u64;  // [sp-0x20]
    let v2: u64;  // [sp-0x18]
    let v3: u64;  // [sp-0x10]
    let v4: u64;  // [sp-0x8]
    let v6: u64;  // r15
    let v7: u64;  // r14
    let v8: u64;  // r13
    let v9: u64;  // r12
    let v10: u64;  // rbx
    let v11: u64;  // r12

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = *(a0)->field_10;
    a1[2] = 0;
    if *(a1) < v11 {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, 0, v11);
    }
}
