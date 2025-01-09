fn uu_tail::follow::files::FileHandling::no_files_remaining(a0: void*, a1: void*) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rbx
    let v3: u64;  // rax
    let v4: u64;  // rax

    if !a0->field_30 {
        return v4 & -0x100 | 1;
    }
    v0 = v2;
    v3 = uu_tail::follow::files::FileHandling::files_remaining(a0);
    if !v3 {
        return v3 & -0x100 | !a1->field_48;
    }
    return 0;
}
