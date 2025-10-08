fn just::subcommand::Subcommand::list(a0: i64, a1: u64, a2: i576, a3: i64) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v2: struct72;  // rax
    let v3: core::option::Option<&str>;  // rbp
    let v4: struct16;  // rax

    v2 = a2;
    if *((a3 + 16) as &i64) {
        do {
            v2 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*((v2 + 672) as &i64), *((v2 + 680) as &i64), *((*((a3 + 8) as &i64) + v3 + 8) as &i64), *((*((a3 + 8) as &i64) + v3 + 16) as &i64));
            if !v2 {
                v0 = <T as alloc::string::SpecToString>::spec_to_string(a3);
                return struct32 {
                    field_0: 53
                    padding_1: <UNKNOWN>
                    field_8: v0.field_0 as i64
                    field_16: *((&v0.field_0 as &char + 8) as &i128)
                };
            }
            v3 += 24;
        } while (*((a3 + 16) as &i64) * 24 != v3);
    }
    v4 = just::subcommand::Subcommand::list_module(a1, v2, 0);
    return struct1 {
        field_0: 56
    };
}
