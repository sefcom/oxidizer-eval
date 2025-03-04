fn uu_more::Pager::draw(a0: &struct8, a1: u32, a2: u32) -> u64 {
    let v2: u64;  // cc_ndep

    uu_more::Pager::draw_lines(a0, a1);
    uu_more::Pager::draw_prompt(a0, a1, core::cmp::min_by(a0->field_30, (amd64g_calculate_condition(3, 4, a0->field_40 as u64, a0->field_18, v2) as char ? a0->field_40 + a0->field_18 : -1)), a2);
    return core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a1), "src/uu/more/src/more.rs");
}
