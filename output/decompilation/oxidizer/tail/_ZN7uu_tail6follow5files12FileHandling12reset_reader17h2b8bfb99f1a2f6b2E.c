fn uu_tail::follow::files::FileHandling::reset_reader(a0: i32, a1: i64, a2: i64) -> void {
    *((uu_tail::follow::files::FileHandling::get_mut(a0, a1, a2) + 200) as &i64) = 0;
    return;
}
