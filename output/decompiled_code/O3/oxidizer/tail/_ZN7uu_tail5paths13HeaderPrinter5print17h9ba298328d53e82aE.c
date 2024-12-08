fn uu_tail::paths::HeaderPrinter::print(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v5: u64;  // rax
    let v7: u64;  // rax

    v0 = a1;
    v1 = a2;
    if *(a0 as &i8) {
        v5 = *((a0 as &char + 1) as &i8);
        v2 = (!v5 ? &g_42952e : 1);
        v3 = v5 ^ 1;
        v7 = println!("{:?}==> {:?} <==", &v2, &v0);
        *((a0 as &char + 1) as &i8) = 0;
        return v7;
    }
    return v7;
}
