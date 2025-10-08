long long fish::env::environment_impl::EnvMutex<T>::lock(struct_0 *a0, unsigned long a1)
{
    char v0;  // [bp-0x30]
    unsigned long long v2;  // rax
    char v3;  // dl

    v0.lock(&_ZN4fish3env16environment_impl8ENV_LOCK17h6e19ae4536794b7cE);
    v2 = v0.unwrap(&g_14d6e08);
    a0->field_8 = v2;
    a0->field_10 = v3 & 1;
    a0->field_0 = a1;
    return v2;
}
