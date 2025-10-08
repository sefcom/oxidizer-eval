long long fish::reader_history_search::ReaderHistorySearch::search_result_range(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!a0->field_120)
    {
        core::panicking::panic("assertion failed: self.active()assertion failed: !self.is_at_present()mode cannot be inactive in this setterShould have found more matchesNot a file redirectionsrc/redirection.rsInvalid fd in add_dup2Invalid fd in add_closesrc/screen.rs", 31, &g_14e1370); /* do not return */
    }
    else if (a0->field_110 >= a0->field_10)
    {
        core::panicking::panic_bounds_check(a0->field_110, a0->field_10, &g_14e1388); /* do not return */
    }
    else if (!((char)__CFADD__(*((long long *)(a0->field_8 + a0->field_110 * 32 + 16)), a0->field_118)))
    {
        return a0->field_118;
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e13a0); /* do not return */
    }
}
