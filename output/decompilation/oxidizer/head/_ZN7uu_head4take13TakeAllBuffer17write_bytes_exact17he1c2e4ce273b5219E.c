fn uu_head::take::TakeAllBuffer::write_bytes_exact(a0: i64, a1: u64, a2: u64) -> long long {
    let v1: core::result::Result<(), std::io::error::Error>;  // rax
    let v2: u64;  // rbx

    v1 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a2, uu_head::take::TakeAllBuffer::remaining_buffer(a0), a2, "src/uu/head/src/take.rs"), a2);
    match v1 {
        Err(_) => {
            return v1;
        },
        Ok(_) => {
            v2 = a2 + *((a0 + 24) as &i64);
            *((a0 + 24) as &u64) = v2;
            if v2 > *((a0 + 16) as &i64) {
                core::panicking::panic("assertion failed: self.start_index <= self.buffer.len()"); /* do not return */
            }
            return v1;
        },
    }
}
