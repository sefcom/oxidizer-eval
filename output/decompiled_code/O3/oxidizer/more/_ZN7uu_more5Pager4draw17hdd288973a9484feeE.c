fn uu_more::Pager::draw(a0: void*, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v4: u64;  // cc_ndep
    let v5: u64;  // rsi
    let v6: u64;  // rdx

    uu_more::Pager::draw_lines(a0, a1, a2);
    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    if !(amd64g_calculate_condition(3, 4, v1, a0->field_18, v4) as char) {
        v2 = -1;
    }
    uu_more::Pager::draw_prompt(a0, a1, core::cmp::min_by(a0->field_30, v2), a2);
    return core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a1, v5, v6), "src/uu/more/src/more.rs");
}
