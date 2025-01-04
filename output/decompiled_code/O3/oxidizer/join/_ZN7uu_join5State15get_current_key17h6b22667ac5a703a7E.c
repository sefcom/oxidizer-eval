fn uu_join::State::get_current_key(a0: void*) -> u64 {
    return uu_join::Line::get_field(a0->field_8, *(&a0->field_40 as &i64));
}
