fn starship::modules::gcloud::GcloudContext::get_account(a0: i64, a1: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x70], Other Possible Types: u64
    let v1: struct16;  // [bp-0x68]
    let v2: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v3: struct40;  // [bp-0x28]
    let v5: struct24;  // rax
    let v6: u64;  // rdx
    let v7: struct80;  // rax

    v5 = starship::modules::gcloud::GcloudContext::get_config(a1);
    if !v5 {
        return struct8 {
            field_0: 0
        };
    }
    v5 = ini::Ini::section(v5, "core");
    if v5 {
        v5 = ini::Properties::get(v5, "account");
        if v5 {
            v2 = <char as core::str::pattern::Pattern>::into_searcher(0x40, v5, v6);
            v1 = struct16 {
                field_0: 0
                field_8: v6
            };
            v3 = 1;
            v0 = 1;
            v5 = core::str::iter::SplitInternal<P>::next(&v1);
            if v5 {
                v0 = 0;
                v7 = core::str::iter::SplitInternal<P>::get_end();
                return struct32 {
                    field_0: v5
                    field_8: v6
                    field_16: v7
                    field_24: v6
                };
            }
        }
    }
    return struct8 {
        field_0: 0
    };
}
