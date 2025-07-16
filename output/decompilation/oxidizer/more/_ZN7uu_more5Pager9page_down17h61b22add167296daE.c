fn uu_more::Pager::page_down() -> : struct8 {
    let a0: i64;  // rsi
    let v1: i64;  // rdi
    let v2: std::io::stdio::Stdout;  // rax
    let v3: u64;  // rcx
    let v4: u64;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // rdx
    let v7: u64;  // r8
    let v8: u64;  // rdx

    v2 = *((v1 + 64) as &i16);
    v3 = (v2 as u32 & 65535) * 2;
    v4 = *((v1 + 24) as &i64);
    v5 = v3 + v4;
    v7 = *((v1 + 48) as &i64) - v2;
    if v5 < *((v1 + 48) as &i64) {
        v8 = v6;
    } else {
        v8 = v7;
    }
    *((v1 + 24) as &u64) = v8;
    return;
}
