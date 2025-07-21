fn uu_tail::platform::unix::ProcessChecker::is_dead(a0: i64) -> long long {
    if !kill(*(a0 as &i32), 0) {
        return 0;
    }
    return uu_tail::platform::unix::get_errno() as i32 != 1;
}
