fn just::function::trim_start_match(a0: i64, a1: i64, a2: i192, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: struct24;  // [bp-0x30]
    let v2: core::option::Option<&str>;  // rax
    let v3: u64;  // rdx
    let v4: u64;  // rdx
    let v5: struct24;  // rax

    v2 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a4, a5, a2, a3) as u64;
    match v2 {
        None => {
            v3 = a3;
            if let None = v2 {
                goto LABEL_66c906;
            }
LABEL_66c905:
            v5 = v2;
        },
        Some(_) => {
            v3 = v4;
            if let Some(_) = v2 {
                goto LABEL_66c905;
            }
LABEL_66c906:
            v5 = a2;
        },
    }
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5, v3);
    return struct32 {
        field_0: 0
        field_8: *(&v0.field_0 as &i128)
        field_24: v0.field_16
    };
}
