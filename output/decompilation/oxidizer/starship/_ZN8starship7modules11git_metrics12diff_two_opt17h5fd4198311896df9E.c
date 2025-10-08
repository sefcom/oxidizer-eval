fn starship::modules::git_metrics::diff_two_opt(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u64, a8: u32, a9: void*, a10: u64) -> int {
    let v0: struct280;  // [bp-0x1f8]
    let v1: struct160;  // [bp-0x1f8]
    let v2: u64;  // [bp-0xe0]
    let v3: u8;  // [bp-0xd8]
    let v5: u64;  // r10
    let v6: u64;  // rax
    let v11: Option<struct32>;  // cx

    if a4 == 0x4000 || a4 == 0xa000 || a4 == 0xe000 || a4 < 0 {
        v0 = gix_diff::blob::platform::<impl gix_diff::blob::Platform>::set_resource(a9, a3, v5, a1, a2, 0, a10);
        if v0.field_0 == 14 {
            v6 = a8;
            if v6 == 0x4000 || v6 == 0xa000 || v6 == 0xe000 || v6 < 0 {
                v0 = gix_diff::blob::platform::<impl gix_diff::blob::Platform>::set_resource(a9, a7, v11, a5, a6, 1, a10);
                if v0.field_0 == 14 {
                    v1 = gix_diff::blob::platform::<impl gix_diff::blob::Platform>::prepare_diff(a9);
                    if v1.field_0 != 2 {
                        memcpy(&v3, &v1 as u8, 184);
                        v2 = v1.field_0;
                        starship::modules::git_metrics::count_diff_lines(a0, &v2);
                        return;
                    }
                }
            }
        }
    }
    return struct4 {
        field_0: 0
    };
}
