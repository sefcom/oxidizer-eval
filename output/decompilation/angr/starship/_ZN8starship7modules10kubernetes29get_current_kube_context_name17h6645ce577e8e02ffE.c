long long starship::modules::kubernetes::get_current_kube_context_name(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rsi

    v0 = v2;
    v3 = a0.get("current-contextnamespacecluster^", 15);
    if (!v3)
        return 0.filter(v5);
    return v3.as_str().filter(v4);
}
