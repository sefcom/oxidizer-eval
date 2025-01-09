fn uu_ls::dired::add_total(a0: &struct8, a1: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax

    v1 = a0[6];
    if !v1 {
        v2 = a0[2];
        v1 = (!v2 ? 0 : *((v2 * 16 + a0[1] - 8) as &i64) + 1);
    }
    a0[6] = v1 + a1 + 2;
    return v1 + a1 + 2;
}
