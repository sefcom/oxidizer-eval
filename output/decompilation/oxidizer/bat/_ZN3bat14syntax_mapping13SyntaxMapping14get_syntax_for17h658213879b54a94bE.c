fn bat::syntax_mapping::SyntaxMapping::get_syntax_for(a0: i64, a1: void*, a2: u64, a3: u64) -> void {
    let v0: void*;  // [bp-0x168]
    let v1: Option<struct8>;  // [bp-0x148], Other Possible Types: u128
    let v4: u64;  // [bp-0x140]
    let v5: iNone;  // [bp-0x138]
    let v6: u64;  // [bp-0xf8]
    let v7: iNone;  // [bp-0xa8]
    let v8: struct32;  // [bp-0x98]
    let v9: iNone;  // [bp-0x88]
    let v10: struct72;  // [bp-0x78]
    let v12: i64;  // rdx
    let v13: u64;  // rax
    let v14: &u64;  // r12
    let v15: u128;  // xmm0
    let v16: u64;  // rax

    v10 = globset::Candidate::new(a2, a3);
    v13 = std::path::Path::file_name(<&T as core::convert::AsRef<U>>::as_ref(a2, a3), v12);
    if v13 {
        v1 = globset::Candidate::new(v13, a2);
    }
    v8 = bat::syntax_mapping::SyntaxMapping::all_mappings(a1);
    v5 = v9;
    v1 = *(&v8.field_0 as &i128);
    do {
        if !core::option::Option<T>::or_else(core::iter::adapters::chain::and_then_or_clear(&v1), v12, &v5) {
            v16 = std::path::Path::file_name(<&T as core::convert::AsRef<U>>::as_ref(a2, a3), v12);
            if !v16 {
                return struct8 {
                    field_0: 3
                };
            }
            v1 = bat::syntax_mapping::ignored_suffixes::IgnoredSuffixes::try_with_stripped_suffix(a1 + 24, v16, v12, a1);
            if &v1 == "\r" {
                v7 = v5;
                if v4 != 4 {
                    v0[8] = v7;
                    *(v0 as &u64) = v4;
                }
            }
            return struct8 {
                field_0: 3
            };
        }
    } while (!globset::glob::GlobMatcher::is_match_candidate(v14, &v10) && (v6 == 9223372036854775809 || !globset::glob::GlobMatcher::is_match_candidate(v14, &v6)));
    v15 = *(v12 as &i128);
    *(&v0[16] as &i64) = *((v12 + 16) as &i64);
    *(v0 as &u128) = v15;
}
