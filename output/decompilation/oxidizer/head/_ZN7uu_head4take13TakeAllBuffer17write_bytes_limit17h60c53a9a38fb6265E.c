fn uu_head::take::TakeAllBuffer::write_bytes_limit(a0: void*, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r15
    let v5: u64;  // r14
    let v6: u64;  // rbx

    v2 = v4;
    v1 = v5;
    v0 = v6;
    return uu_head::take::TakeAllBuffer::write_bytes_exact(a0, a1, core::cmp::Ord::min(uu_head::take::TakeAllBuffer::remaining_bytes(a0), a2));
}
