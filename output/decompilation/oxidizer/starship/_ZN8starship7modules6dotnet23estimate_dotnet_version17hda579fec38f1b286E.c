fn starship::modules::dotnet::estimate_dotnet_version(a0: i128, a1: void*, a2: u64, a3: u64, a4: u64, a5: u32, a6: u32, a7: u32) -> long long {
    let v0: struct24;  // [bp-0x49]
    let v1: struct16;  // [bp-0x48], Other Possible Types: Option<struct24>
    let v2: struct24;  // rax
    let v3: struct56;  // rax
    let v4: u32;  // ecx
    let v5: core::option::Option<&str>;  // rsi

    v0 = 2;
    v1 = struct16 {
        field_0: a2
        field_8: a3 * 32 + a2
    };
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    v3 = core::option::Option<T>::or_else(core::option::Option<T>::or_else(v2, a2, a3), a2, a3);
    if !v3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v4 = *((v3 + 24) as &i8);
    if v4 == 2 {
        v1 = starship::modules::dotnet::get_pinned_sdk_version_from_file(*((v3 + 8) as &i64), *((v3 + 16) as &i64));
    } else if v4 != 3 {
        v1 = starship::modules::dotnet::try_find_nearby_global_json(a4, a5, a6, a7);
    } else {
        return starship::modules::dotnet::get_latest_sdk_from_cli(a0, a1);
    }
    return core::option::Option<T>::or_else(a0, v5, a1);
}
