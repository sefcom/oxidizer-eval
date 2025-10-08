fn uu_join::State::get_current_key(a0: i64) -> u64 {
    return uu_join::Line::get_field(*((a0 + 8) as &i64), *((a0 + 64) as &i64));
}
