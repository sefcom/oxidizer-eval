fn uu_chcon::fts::EntryRef::access_path(a0: i64) -> long long {
    let v1: u64;  // rbx

    v1 = *((a0 + 40) as &i64);
    if !v1 {
        return 0;
    }
    strlen(v1);
    return v1;
}
