fn uu_tail::forwards_thru_file(a0: i64, a1: i64, a2: i8) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: void*;  // [bp-0x68]
    let v2: struct48;  // [bp-0x60]
    let v4: void*;  // r12
    let v5: u64;  // rsi
    let v6: u64;  // rax
    let v7: u64;  // rdx

    v2 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x2000, a0);
    v0 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v4 = 0;
    do {
        v4 = <u64 as core::iter::range::Step>::forward_unchecked(v4, v5);
        v6 = std::io::read_until(&v2, a2, &v0);
    } while ((v6 || !v7 || !((v1 = 0, v4 < a1))) && (v1 = 0, v4 < a1));
    return v6;
}
