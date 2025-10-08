long long fish::fork_exec::spawn::FileActions::add_dup2()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return posix_spawn_file_actions_adddup2();
}
