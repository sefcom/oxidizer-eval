fn uu_cp::copydir::skip_last(a0: u64, a1: i128, a2: u32) -> void {
    let v0: struct16;  // [bp-0x18]
    let v3: u32;  // rdx

    v0 = a1;
    core::iter::traits::iterator::Iterator::scan(a0, v0, a2, <std::path::Ancestors as core::iter::traits::iterator::Iterator>::next(&v0), v3);
    return;
}
