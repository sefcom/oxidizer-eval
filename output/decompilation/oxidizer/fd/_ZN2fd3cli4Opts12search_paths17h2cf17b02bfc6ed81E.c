fn fd::cli::Opts::search_paths(a0: u64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x30]
    let v1: u64;  // [bp-0x20]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v6: i64;  // rbx

    v3 = 160;
    if !*((a1 + 176) as &i64) {
        v3 = 184;
        if !*((a1 + 200) as &i64) {
            v4 = fd::cli::ensure_current_directory_exists();
            if !v4 {
                v6 = alloc::alloc::Global::alloc_impl(8, 24);
                v0 = fd::cli::Opts::normalize_path(*((a1 + 491) as &i8), "./");
                *((v6 + 16) as &u64) = v1;
                *(v6 as &i128) = *(&v0.field_0 as &i128);
                return struct24 {
                    field_0: 1
                    field_8: v6
                    field_16: 1
                };
            }
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v4
            };
        }
    }
    v0 = struct24 {
        field_0: *((a1 + v3 + 8) as &i64)
        field_8: *((a1 + v3 + 8) as &i64) + *((a1 + v3 + 16) as &i64) * 24
        field_16: a1
    };
    return core::iter::traits::iterator::Iterator::collect(a0, &v0);
}
