fn uu_tail::forwards_thru_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: struct48;  // [sp-0x60]
    let v5: i64;  // rbx
    let v6: i64;  // r12
    let v7: struct8;  // rax
    let v8: i64;  // rdx

    v3 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    loop {
        v6 = <u64 as core::iter::range::Step>::forward_unchecked(v6);
        v7 = std::io::read_until(a2, &v0);
        if v7 {
            return v7;
        } else if !v8 {
            return v7;
        } else {
            v5 += v8;
            v2 = 0;
            if v6 >= a1 {
                return v7;
            }
        }
    }
}
