fn uu_tail::paths::HeaderPrinter::print(a1: i64, a2: i64) -> : struct1 {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x78]
    let v1: i64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v4: i64;  // rdi
    let v5: core::option::Option<&(&str, proc_macro::bridge::symbol::Symbol)>;  // rax

    v0 = struct16 {
        field_0: a0
        field_8: a1
    };
    if !*(v4 as &i8) {
        return;
    }
    v5 = *((v4 + 1) as &i8);
    v1 = (!v5 ? &g_42a24d : 1);
    v2 = v5 ^ 1;
    println!("{}==> {} <==", &v1, &v0);
    *((v4 + 1) as &i8) = 0;
    return;
}
