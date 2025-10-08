long long linera_summary::github::Github::workflows_handler(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x30]

    v0.clone(a1 + 144);
    v1.clone(a1 + 168);
    a0.workflows(a1, &v0, &v1);
    return a0;
}
