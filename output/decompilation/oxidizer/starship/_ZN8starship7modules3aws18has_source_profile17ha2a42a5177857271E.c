fn starship::modules::aws::has_source_profile(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v1: struct24;  // [bp-0x40]
    let v4: struct24;  // rax
    let v5: Result<struct72, struct24>;  // ebp
    let v6: Option<struct24>;  // rax
    let v7: void*;  // rax
    let v8: struct32;  // r12
    let v9: core::fmt::Arguments;  // al

    v4 = starship::modules::aws::get_config(a0, a2);
    v5 = vvar_38{reg 56} & -0x100 | 2;
    if !v4 {
        return v5 as u64;
    }
    v6 = starship::modules::aws::get_profile_config(v4, a1, a2);
    if !v6 {
        return v5 as u64;
    }
    v7 = ini::Properties::get(v6, "source_profile");
    if v7 {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, a2);
    }
    v9 = starship::modules::aws::has_credential_process_or_sso(a0, v8, a2, a3);
    return (!(v9 & 1) ? starship::modules::aws::has_defined_credentials(a0, v8, a3) & 1 : 1);
}
