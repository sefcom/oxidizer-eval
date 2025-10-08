long long starship::modules::gcloud::GcloudContext::get_config(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax

    v0 = v2;
    v3 = a0 + 48.get_or_try_init(a0);
    if (!((char)(((0 ^ *(v3)) & (0 ^ -(*(v3)))) >> 63)))
        return v3;
    return 0;
}
