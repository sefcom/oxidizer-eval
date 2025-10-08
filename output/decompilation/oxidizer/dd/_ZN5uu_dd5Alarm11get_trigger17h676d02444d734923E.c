fn uu_dd::Alarm::get_trigger(a0: i64) -> long long {
    return atomic_exchange(*(a0 as &i64) + 16, 0);
}
