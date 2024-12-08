long long uu_tail::paths::Input::is_tailable::h6430d678b0b583c0(unsigned long long a0[6], unsigned long a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0[3];  // [bp-0x20]
    unsigned long long v1;  // [sp-0x8]
    unsigned long v3;  // rbx

    if (a0[3] == 0x8000000000000000)
    {
        v1 = v3;
        uu_tail::paths::Input::resolve::h226328f9a26c5200(v0, a0, a2, a3, a4, a5);
        return core::option::Option$LT$T$GT$::map_or::h09b0656535f8b30b(v0);
    }
    return uu_tail::paths::path_is_tailable::h4860691d691e2e51(a0[4], a0[5]);
}
