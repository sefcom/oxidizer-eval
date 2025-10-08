long long fish::tty_handoff::TtyHandoff::reclaim(unsigned long long a0)
{
    unsigned int v1;  // eax

    v1 = a0.reclaim_impl();
    core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(a0);
    return v1;
}
