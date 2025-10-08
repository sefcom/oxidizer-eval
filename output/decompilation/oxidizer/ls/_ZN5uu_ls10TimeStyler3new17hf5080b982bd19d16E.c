fn uu_ls::TimeStyler::new(a0: i64, a1: i64) -> void {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r15
    let v5: u64;  // r14
    let v6: u64;  // rbx
    let v7: u64;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = *(a1 as &i64) ^ 0x8000000000000000;
}
