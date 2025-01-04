fn uu_tail::follow::files::FileHandling::reset_reader(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    *((uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2, a3, a4, a5) + 200) as &i64) = 0;
    return;
}
