fn starship::modules::git_status::format_count(a0: u64, a1: u32, a2: u32, a3: u64, a4: u64, a5: u32, a6: u64) -> long long {
    let v0: struct16;  // [bp-0x8], Other Possible Types: u64
    let v1: struct16;  // rax

    v0 = v1;
    if !a6 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = &vvar_6;
    starship::modules::git_status::format_text(a0, a1, a2, a3, a4, a5);
    return v0;
}
