fn uu_tail::follow::files::FileHandling::get_mut_metadata(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: &u32;  // rax

    v0 = v2;
    v3 = uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, a3, a4, a5);
    if *(v3) != 2 {
        return v3;
    }
    return 0;
}
