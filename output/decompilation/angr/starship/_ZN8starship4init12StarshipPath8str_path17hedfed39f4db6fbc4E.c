long long starship::init::StarshipPath::str_path(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax
    void* v4;  // rcx

    core::str::converts::from_utf8(&v0, a1, a2);
    if (*((int *)&v0) == 1)
    {
        v0.to_vec("can\'t convert to str\'\'Shell name: eval -- \"$( init bash --print-full-init)\" init fish --print-full-init | psub)Invoke-Expression (&  init powershell --print-full-init | Out-String)eval $( init ion --print-full-init)eval ( init elvish --print-full-init | sl", 20);
        v3 = 40._new(v0.new(), &g_11f1380);
        v4 = 0;
    }
    else
    {
        v3 = *((long long *)&v1);
    }
    a0[1] = v3;
    a0[0] = v4;
    return v3;
}
