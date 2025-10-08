fn forc_tx::ParseError::print(a0: i64) -> void {
    let v1: u64;  // [bp-0x8]
    let v3: u64;  // rbx
    let v4: u64;  // rax

    v1 = v3;
    v4 = 0x8000000000000000 ^ *(a0 as &i64);
}
