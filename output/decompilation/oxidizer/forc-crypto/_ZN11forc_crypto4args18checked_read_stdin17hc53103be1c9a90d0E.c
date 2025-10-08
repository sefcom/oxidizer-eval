fn forc_crypto::args::checked_read_stdin(a0: i64, a1: i64, a2: u64, a3: u8) -> int {
    let v0: struct16;  // [bp-0x50]
    let v1: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x40]
    let v2: u64;  // [bp-0x20]
    let v7: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a1 + 8) as &i64), *((a1 + 16) as &i64), "-") {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = Vec::new();
    v7 = <std::io::stdio::StdinLock as std::io::Read>::read_to_end(&v0, &v1);
    v2 = *((&v7 as &char + 8) as &i64);
    match v7 {
        Ok(_) => {
            return struct24 {
                field_0: *(&v1.buf.inner.cap as &i128)
                field_16: 0
            };
        },
        Err(_) => {
            return struct24 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
        },
    }
}
