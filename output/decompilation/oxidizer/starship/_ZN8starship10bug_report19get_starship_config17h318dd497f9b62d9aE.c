fn starship::bug_report::get_starship_config(a0: u64) -> int {
    let v0: Result<struct32, struct16>;  // [bp-0x68], Other Possible Types: u128
    let v1: Result<struct24, struct16>;  // [bp-0x68]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v6: u128;  // [bp-0x40]
    let v7: u64;  // [bp-0x30]
    let v8: Option<struct24>;  // [bp-0x28]

    v0 = std::env::var(&g_53385b);
    v6 = *((&v0 as &char + 8) as &i128);
    v7 = v4;
    if let Ok(_) = v0 {
        v0 = v6;
        v3 = v7;
    }
    v8 = core::option::Option<T>::or_else(&v2);
    if let Some(_) = v8 {
        v1 = std::fs::read_to_string(&v8);
        if let Ok(_) = v1 {
            return struct24 {
                field_0: v1 as i64
                field_8: *((&v1 as &char + 8) as &i128)
            };
        }
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "<unknown config>");
    return;
}
