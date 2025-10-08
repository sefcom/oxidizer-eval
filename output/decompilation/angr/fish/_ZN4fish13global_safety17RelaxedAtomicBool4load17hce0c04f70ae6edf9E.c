char fish::global_safety::RelaxedAtomicBool::load(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(a0, 0);
}
