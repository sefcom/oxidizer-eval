long long starship::init::StarshipPath::sprint_pwsh(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[2];  // [bp-0x30]
    unsigned long v1;  // [bp-0x28], Other Possible Types: unsigned long long
    char v2;  // [bp-0x20]

    v0.str_path(a1, a2);
    if (!v0)
    {
        a0[1] = v1;
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    alloc::str::<impl str>::replace(&v2, v0, v1, 39, "\'\'Shell name: eval -- \"$( init bash --print-full-init)\" init fish --print-full-init | psub)Invoke-Expression (&  init powershell --print-full-init | Out-String)eval $( init ion --print-full-init)eval ( init elvish --print-full-init | slurp)eval `( init tcsh --print-full-init)` init xonsh --print-full-init))src/init/mod.rs", 2);
    memcpy(&v2, &v2, 16);
    return (unsigned long long)starship::init::StarshipPath::sprint_pwsh::{{closure}}(a0, &v2, a2);
}
