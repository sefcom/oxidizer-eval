fn starship::modules::terraform::parse_terraform_version(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0x70]
    let v1: struct40;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v3: Option<struct24>;  // [bp-0x50]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x48]
    let v5: struct24;  // [bp-0x18]
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v11: &str;  // rax:rdx
    let v12: &str;  // rax:rdx

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1, a2);
    v2 = 0;
    v3 = a2;
    v5 = 0;
    v7 = core::str::iter::SplitInternal<P>::next_inclusive(&v2);
    if !v7 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v7, v8, a2);
    v12 = core::str::<impl str>::trim_matches(core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v11.data_ptr, v11.length, "Terraform "), v8, "OpenTofu "), v8, a2);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_start_matches(v12.data_ptr, v12.length), a2);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
    };
}
