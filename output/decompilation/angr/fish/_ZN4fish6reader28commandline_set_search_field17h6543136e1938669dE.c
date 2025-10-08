long long fish::reader::commandline_set_search_field(struct_1 *a0, struct_0 *a1, char a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // r14
    unsigned long v4;  // r13
    unsigned long long v5;  // rax
    char v6;  // dl
    unsigned long long v7;  // rax

    v0 = v2;
    if (a0->field_5b)
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    v3 = fish::reader::commandline_state_snapshot();
    if ((char)(((0 ^ (long long)v3[56]) & (0 ^ -((long long)v3[56]))) >> 63))
        core::panicking::panic("assertion failed: state.search_field.is_some()Cursor is at; received left mouse click atassertion failed: !autosuggestion.is_empty()assertion failed: autosuggestion.len() >= line_range.len()assertion failed: string_prefixes_string_case_insensitive(line, au", 46, &g_14dfd18); /* do not return */
    v4 = v3 + 56;
    v5 = -((a2 & 1) < 1) | a3.min(a1->field_10);
    core::ptr::drop_in_place<core::option::Option<fish::path::BaseDirectory>>(v4);
    *((unsigned long long *)(v4 + 16)) = a1->field_10;
    *((uint128_t *)v4) = a1->field_0;
    *((unsigned long long *)&v3[80]) = v5;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v6 & 1);
    v7 = fish::reader::current_data();
    if (!v7)
        return 0;
    return v7.apply_commandline_state_changes();
}
