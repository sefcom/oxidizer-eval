fn starship::modules::dotnet::find_current_tfm(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x19]
    let v1: struct16;  // [bp-0x18]
    let v3: i64;  // rax

    v0 = 1;
    v1 = struct16 {
        field_0: a1
        field_8: a2 * 32 + a1
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v1, &v0);
    if !v3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return starship::modules::dotnet::get_tfm_from_project_file(a0, *((v3 + 8) as &i64), *((v3 + 16) as &i64)) as u64;
}
