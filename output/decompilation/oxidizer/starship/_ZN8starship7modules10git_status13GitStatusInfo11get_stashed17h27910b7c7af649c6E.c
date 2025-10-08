fn starship::modules::git_status::GitStatusInfo::get_stashed(a0: i64) -> long long {
    return std::sync::once_lock::OnceLock<T>::get_or_try_init(a0 + 16, *((a0 + 48) as &i64));
}
