long long starship::modules::git_metrics::GitDiff::parse(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [bp-0x98]
    int v2;  // [bp-0x88], Other Possible Types: char
    unsigned long long v3;  // [bp-0x78]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x48]

    v0.new("(\\d+) \\w+\\(\\+\\)(\\d+) \\w+\\(\\-\\)Error in module `git_state`:\nsrc/modules/git_state.rs", 15);
    v4.unwrap(&v0, &g_11f48d0);
    v0.new("(\\d+) \\w+\\(\\-\\)Error in module `git_state`:\nsrc/modules/git_state.rs", 15);
    v5.unwrap(&v0, &g_11f48e8);
    v0.to_vec(a1.get_matched_str(a2, &v4), a2);
    v3 = *((long long *)&v1);
    memcpy(&v2, &v0, 16);
    v0.to_vec(a1.get_matched_str(a2, &v5), a2);
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v1);
    *((void*)&(&a0->field_10)[1]) = v0;
    a0->field_10 = v3;
    *((void*)&a0->field_0) = v2;
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v5);
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v4);
}
