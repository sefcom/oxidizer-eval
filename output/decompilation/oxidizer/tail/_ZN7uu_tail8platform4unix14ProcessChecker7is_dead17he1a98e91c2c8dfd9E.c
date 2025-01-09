fn uu_tail::platform::unix::ProcessChecker::is_dead(a0: &u32) -> u64 {
    if kill(*(a0), 0) {
        return uu_tail::platform::unix::get_errno() as i32 != 1;
    }
    return 0;
}
