fn starship::modules::gcloud::GcloudContext::get_project(a0: u64) -> long long {
    let v0: struct700;  // [bp-0x8]
    let v2: struct700;  // rax
    let v3: u64;  // rax
    let v4: struct16;  // rax

    v0 = v2;
    v3 = starship::modules::gcloud::GcloudContext::get_config(a0);
    if !v3 {
        return 0;
    }
    v4 = ini::Ini::section(v3, "core");
    if !v4 {
        return 0;
    }
    return ini::Properties::get(v4, "project");
}
