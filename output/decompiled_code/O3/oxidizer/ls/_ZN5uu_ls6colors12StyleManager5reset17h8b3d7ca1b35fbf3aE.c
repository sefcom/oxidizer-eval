fn uu_ls::colors::StyleManager::reset(a0: &u64, a1: &u64, a2: u8) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rbx

    if a1[1] as i8 == 2 && !a2 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v0 = v2;
    *((&a1[3] as &char + 5) as &i8) = 1;
    *(&a1[1] as &i8) = 2;
    <T as alloc::slice::hack::ConvertVec>::to_vec(a0);
    return a0;
}
