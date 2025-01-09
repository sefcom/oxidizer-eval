fn uu_sort::tokenize(a0: u64, a1: u64, a2: u32, a3: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    if !a3->field_10 {
        if !(a2 == 0x110000) {
            goto LABEL_0x520cc0;
        }
        return uu_sort::tokenize_default(a0, a1, a3);
    }
    v0 = v2;
    core::panicking::panic("assertion failed: token_buffer.is_empty()", "src/uu/sort/src/sort.rs"); /* do not return */
}
