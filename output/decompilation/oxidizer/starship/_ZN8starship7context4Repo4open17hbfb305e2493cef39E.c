fn starship::context::Repo::open(a0: u64, a1: u64) -> long long {
    gix::repository::thread_safe::access::<impl gix::types::ThreadSafeRepository>::to_thread_local(a0, a1);
    return a0;
}
