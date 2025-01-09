fn uu_join::State::print_first_line(a0: void*, a1: u32, a2: void*) -> u64 {
    return uu_join::State::print_line(a0, a1, *(&a0->field_8 as &i64), a2);
}
