fn starship::modules::git_status::GitStatusInfo::get_ahead_behind(a0: i64, a1: i64) -> double {
    let v1: i64;  // rax
    let v2: u64;  // rcx
    let v3: u64;  // rdx

    v1 = starship::modules::git_status::GitStatusInfo::get_repo_status(a1);
    if !v1 {
        return struct8 {
            field_0: 2
        };
    }
    v2 = *(v1 as &i64);
    v3 = *((v1 + 24) as &i64);
    return struct32 {
        field_0: v2
        field_8: *((v1 + 8) as &i128)
        field_24: v3
    };
}
