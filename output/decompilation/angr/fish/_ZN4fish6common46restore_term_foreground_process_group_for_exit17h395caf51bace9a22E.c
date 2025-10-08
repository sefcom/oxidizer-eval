long long fish::common::restore_term_foreground_process_group_for_exit()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    v1 = core::sync::atomic::atomic_load(&_ZN4fish6common24INITIAL_FG_PROCESS_GROUP17h0bf289977f22890dE);
    if ((unsigned int)v1 <= 0)
        return v1;
    v2 = fish::nix::getpgrp();
    if ((unsigned int)v1 != (unsigned int)v2)
    {
        signal(22, 0x1);
        return tcsetpgrp(0, v1);
    }
    return v2;
}
