fn uu_rm::is_dir_empty(a0: u64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v2: u32;  // ebx
    let v3: u32;  // ebx

    v0 = std::fs::read_dir(a0, a1);
    if v0.field_8 == 2 {
        return v2;
    }
    v2 = v3 & -0x100 | !core::iter::traits::iterator::Iterator::fold(v0.field_0, v0.field_8);
    return v2;
}
