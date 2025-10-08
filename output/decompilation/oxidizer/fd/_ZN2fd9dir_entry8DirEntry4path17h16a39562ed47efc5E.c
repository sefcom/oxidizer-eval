fn fd::dir_entry::DirEntry::path(a0: i64) -> long long {
    if *(a0 as &i32) != 3 {
        return ignore::walk::DirEntry::path(a0);
    }
    return *((a0 + 16) as &i64);
}
