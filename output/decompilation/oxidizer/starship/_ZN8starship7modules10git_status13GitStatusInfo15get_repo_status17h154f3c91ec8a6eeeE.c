fn starship::modules::git_status::GitStatusInfo::get_repo_status(a0: i64) -> u64 {
    let v0: struct16;  // [bp-0x8]
    let v2: struct16;  // rax
    let v3: i64;  // rax

    v0 = v2;
    v3 = std::sync::once_lock::OnceLock<T>::get_or_try_init(a0, a0);
    return *(v3 as &i64) + 16;
}
