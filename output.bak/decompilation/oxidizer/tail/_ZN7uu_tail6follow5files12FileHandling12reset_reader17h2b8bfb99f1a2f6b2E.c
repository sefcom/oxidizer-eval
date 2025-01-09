fn uu_tail::follow::files::FileHandling::reset_reader(a0: u32, a1: u32, a2: u32) -> u64 {
    *((uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2) + 200) as &i64) = 0;
    return;
}
