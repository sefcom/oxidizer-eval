fn starship::configure::get_editor(a1: i64, a2: i32) -> : struct24 {
    let a0: u64;  // rdi
    let v0: Result<struct32, struct16>;  // [bp-0x68]
    let v4: struct16;  // [bp-0x28]

    if !a1 {
        v0 = std::env::var(&g_5352b8);
        v0 = std::env::var(&g_5352be);
        starship::configure::get_editor_internal(a0, &v0 as u128, &v4);
        return;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1, a2);
    return;
}
