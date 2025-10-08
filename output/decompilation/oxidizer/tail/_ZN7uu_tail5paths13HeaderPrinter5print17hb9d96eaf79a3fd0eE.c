fn uu_tail::paths::HeaderPrinter::print(a1: i64, a2: i64) -> : struct1 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x78]
    let v1: i64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v4: struct16;  // rax

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    if !*(a0 as &i8) {
        return;
    }
    v4 = *((a0 + 1) as &i8);
    v1 = (!v4 ? &g_424df6 : 1);
    v2 = v4 ^ 1;
    println!("{}==> {} <==", &v1, &v0);
    *((a0 + 1) as &i8) = 0;
    return;
}
