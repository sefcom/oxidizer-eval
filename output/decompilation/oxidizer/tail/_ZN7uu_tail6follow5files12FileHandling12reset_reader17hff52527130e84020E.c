fn uu_tail::follow::files::FileHandling::reset_reader(a0: u64, a1: u64, a2: u64) -> void {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    *((uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2) + 200) as &i64) = 0;
    return;
}
