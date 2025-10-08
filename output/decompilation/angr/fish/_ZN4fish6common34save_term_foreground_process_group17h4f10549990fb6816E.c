void fish::common::save_term_foreground_process_group()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    core::sync::atomic::atomic_store(&_ZN4fish6common24INITIAL_FG_PROCESS_GROUP17h0bf289977f22890dE, tcgetpgrp(0));
    return;
}
