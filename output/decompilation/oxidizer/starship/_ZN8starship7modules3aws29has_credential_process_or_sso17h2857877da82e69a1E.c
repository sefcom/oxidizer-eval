fn starship::modules::aws::has_credential_process_or_sso(a0: u64, a1: u64, a2: u64, a3: void*) -> long long {
    let v0: struct176;  // [bp-0xd0], Other Possible Types: u8
    let v2: struct24;  // rax
    let v3: Option<struct24>;  // r14
    let v4: Option<struct24>;  // r15
    let v5: <anon>;  // rax
    let v6: struct16;  // rax
    let v8: u64;  // r14
    let v9: u64;  // rbx

    v2 = starship::modules::aws::get_config(a0, a2);
    if !v2 {
        return v9 & 4294967295;
    }
    v3 = starship::modules::aws::get_creds(a0, a3);
    v4 = &v0;
    v0 = ini::Properties::new();
    v5 = starship::modules::aws::get_profile_config(v2, a1, a2);
    if v5 {
        v6 = v5;
    } else {
        v6 = v4;
    }
    v8 = (!v3 ? 0 : starship::modules::aws::get_profile_creds(v3, a1));
    v9 = a1 & -0x100 | 1;
    if !ini::Properties::contains_key(v6, "credential_process") && !ini::Properties::contains_key(v6, "sso_session") && !ini::Properties::contains_key(v6, "sso_start_url") && v8 && !ini::Properties::contains_key(v8, "credential_process") {
        v9 = ini::Properties::contains_key(v8, "sso_start_url");
    }
    return v9 & 4294967295;
}
