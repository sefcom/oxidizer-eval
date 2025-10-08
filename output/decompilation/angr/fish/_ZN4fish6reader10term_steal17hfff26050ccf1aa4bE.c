void fish::reader::term_steal(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a0)
        fish::reader::term_copy_modes();
    fish::reader::set_shell_modes(0, "shellI appear to be an orphaned process, so I am quitting politely. My pid is %d.", 5);
    fish::termsize::termsize_invalidate_tty();
    return;
}
