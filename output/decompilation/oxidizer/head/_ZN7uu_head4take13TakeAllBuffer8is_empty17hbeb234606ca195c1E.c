fn uu_head::take::TakeAllBuffer::is_empty(a0: u64, a1: u64) -> char {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    if a1 > a0 {
        v0 = v2;
        core::panicking::panic("assertion failed: self.start_index <= self.buffer.len()"); /* do not return */
    }
    return a1 == a0;
}
