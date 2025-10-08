fn starship::modules::git_status::RepoStatus::parse_normal_status(a0: i64, a1: u64, a2: u64) -> long long {
    let v1: Option<struct24>;  // rax

    if starship::modules::git_status::RepoStatus::is_deleted(a1, a2) {
        *((a0 + 64) as &i64) = *((a0 + 64) as &i64) + 1;
    }
    if starship::modules::git_status::RepoStatus::is_modified(a1, a2) {
        *((a0 + 80) as &i64) = *((a0 + 80) as &i64) + 1;
    }
    if starship::modules::git_status::RepoStatus::is_staged(a1, a2) {
        *((a0 + 88) as &i64) = *((a0 + 88) as &i64) + 1;
    }
    v1 = starship::modules::git_status::RepoStatus::is_typechanged(a1, a2);
    if !v1 as u8 {
        return v1;
    }
    *((a0 + 96) as &i64) = *((a0 + 96) as &i64) + 1;
    return v1;
}
