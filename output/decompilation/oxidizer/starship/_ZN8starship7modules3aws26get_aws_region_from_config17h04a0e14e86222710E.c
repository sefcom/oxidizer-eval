fn starship::modules::aws::get_aws_region_from_config(a0: i64, a1: u64, a2: i64, a3: void*) -> long long {
    let v0: struct24;  // [bp-0x30]
    let v2: struct72;  // rax
    let v3: struct25;  // 4096
    let v5: u64;  // rax

    v2 = starship::modules::aws::get_config(a1, a3);
    if v2 {
        if *(a2 as &i64) != 0x8000000000000000 {
            v3 = a2;
        } else {
            v3 = 0;
        }
        v2 = starship::modules::aws::get_profile_config(v2, v3, a2);
        if v2 {
            v2 = ini::Properties::get(v2, "region");
            if v2 {
                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, a2);
                v5 = v0.field_16;
                return struct24 {
                    field_0: *(&v0.field_0 as &i128)
                    field_16: v5
                };
            }
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
