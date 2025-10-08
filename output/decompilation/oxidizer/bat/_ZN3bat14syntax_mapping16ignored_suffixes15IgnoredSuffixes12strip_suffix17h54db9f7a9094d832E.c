fn bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::strip_suffix(a0: i64, a1: &str) -> u64 {
    let v1: i64;  // r13
    let v2: core::option::Option<&str>;  // rax

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    loop {
        v2 = <&str as core::str::pattern::Pattern>::strip_suffix_of(*(v1 as &i64), *((v1 + 8) as &i64), a1) as u64;
        match v2 {
            Some(_) => {
                return v2;
            },
            None => {
                v1 += 16;
                if v1 == *((a0 + 16) as &i64) * 16 + *((a0 + 8) as &i64) {
                    return 0;
                }
            },
        }
    }
}
