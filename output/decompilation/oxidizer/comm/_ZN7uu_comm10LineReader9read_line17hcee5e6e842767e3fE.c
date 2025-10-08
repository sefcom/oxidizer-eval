fn uu_comm::LineReader::read_line(a0: i64, a1: i64) -> long long {
    let v0: std::io::stdio::StdinLock;  // [bp-0x38]
    let v1: u8;  // [bp-0x38]
    let v4: u32;  // ebp
    let v5: u64;  // rax
    let v6: u8;  // dl
    let v7: u64;  // rcx
    let v8: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v4 = *((a0 + 48) as &i8);
    if *(a0 as &i64) {
        v5 = std::io::read_until(a0, v4, a1);
    } else {
        v0 = std::io::stdio::StdinLock {
            inner: std::sync::poison::mutex::MutexGuard<std::io::buffered::bufreader::BufReader<std::io::stdio::StdinRaw>> {
                lock: std::io::stdio::Stdin::lock(a0 + 8) as u64
                poison: std::sync::poison::Guard {
                    panicking: v6 & 1
                }
            }
        };
        v8 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0, v4, a1);
    }
    if core::slice::<impl [T]>::ends_with(*((a1 + 8) as &i64), *((a1 + 16) as &i64), &v1, v7) {
        return v5;
    }
    alloc::vec::Vec<T,A>::push(a1, v4);
    return v5;
}
