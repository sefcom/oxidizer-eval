long long fish::threads::init::child_post_fork()
{
    unsigned long v1;  // rax

    core::sync::atomic::atomic_store(&_ZN4fish7threads14IS_FORKED_PROC17h62ebab8c030ab82aE, 1, 0);
    return v1;
}
