fn uu_join::State::print_first_line(a0: i64, a1: u32, a2: void*) -> long long {
    return uu_join::State::print_line(a0, a1, *((a0 + 8) as &i64), a2);
}
