fn uu_tsort::Graph::find_next_node(a0: &core::fmt::Arguments, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u64;  // rax

    v0 = v2;
    v3 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    if v3 {
        return v3;
    }
    do {
        uu_tsort::Graph::find_and_break_cycle(a0);
        v4 = alloc::collections::vec_deque::VecDeque<T,A>::pop_front(a1);
    } while (!v4);
    return v4;
}
