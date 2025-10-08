char fish::env::environment_impl::EnvStackImpl::remove::remove_from_chain(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return ((char)a0.remove_from_chain(a1, a2) ^ 1) * 4;
}
