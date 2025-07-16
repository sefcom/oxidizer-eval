fn uu_more::Pager::draw(a0: i64, a1: i64, a2: i32) -> void {
    let v1: u64;  // cc_ndep

    uu_more::Pager::draw_lines(a0, a1);
    uu_more::Pager::draw_prompt(a0, a1, core::cmp::min_by(*((a0 + 48) as &i64), (amd64g_calculate_condition(3, 4, *((a0 + 64) as &i16) as u16 as u64, *((a0 + 24) as &i64), v1) as char ? *((a0 + 64) as &i16) + *((a0 + 24) as &i64) : -1)), a2);
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a1), "src/uu/more/src/more.rs");
    return;
}
