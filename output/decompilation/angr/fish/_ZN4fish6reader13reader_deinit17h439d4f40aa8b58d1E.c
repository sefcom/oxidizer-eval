long long fish::reader::reader_deinit(unsigned int a0)
{
    unsigned long long v1;  // rax

    fish::reader::safe_restore_term_mode();
    v1 = fish::tty_handoff::safe_deactivate_tty_protocols();
    if (!a0)
        return v1;
    return fish::common::restore_term_foreground_process_group_for_exit();
}
