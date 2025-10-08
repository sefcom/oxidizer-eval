char fish::threads::is_forked_child()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(&_ZN4fish7threads14IS_FORKED_PROC17h62ebab8c030ab82aE, 0);
}
