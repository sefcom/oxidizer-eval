fn starship::modules::git_status::GitStatusInfo::get_modified(a0: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    if !starship::modules::git_status::GitStatusInfo::get_repo_status(a0) {
        return 0;
    }
    return 1;
}
