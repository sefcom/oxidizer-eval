char fish::wildcard::expander::WildCardExpander::add_expansion_result(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x18]
    char v5;  // al

    if ((a0->field_88 & 8))
        core::panicking::panic("assertion failed: !self.flags.contains(ExpandFlags::FOR_COMPLETIONS)assertion failed: !start_point.is_empty() && start_point.starts_with('/')assertion failed: flags.contains(ExpandFlags::FOR_COMPLETIONS) ||\n    !flags.contains(ExpandFlags::FUZZY_MATCH)asse", 68, &g_14e4f10); /* do not return */
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v2, a1[1], a1[2]);
    v1 = *((long long *)&v3);
    memcpy(&v0, &v2, 16);
    if ((char)a0.insert(&v0))
        return (char)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    v5 = a0->field_80.add(a1);
    if (v5)
        return v5;
    a0->field_8b = 1;
    return v5;
}
