long long fish::reader_history_search::ReaderHistorySearch::handle_deletion(struct_0 *a0)
{
    char v0;  // [bp-0x30]

    if (!a0->field_110)
        core::panicking::panic("assertion failed: !self.is_at_present()mode cannot be inactive in this setterShould have found more matchesNot a file redirectionsrc/redirection.rsInvalid fd in add_dup2Invalid fd in add_closesrc/screen.rs", 39, &g_14e13e8); /* do not return */
    v0.remove(a0, a0->field_110);
    core::ptr::drop_in_place<fish::path::BaseDirectory>(&v0);
    if (!a0->field_110)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1418); /* do not return */
    a0->field_110 = a0->field_110 - 1;
    a0.search_mut().prepare_to_search_after_deletion();
    return a0.move_backwards();
}
