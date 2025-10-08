long long starship::modules::haskell::get_ghc_version(void* a0, void* a1)
{
    unsigned long long v0[2];  // [bp-0x68]
    int v1;  // [bp-0x58]
    char v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    int v5;  // [bp-0x28]
    char v6;  // [bp-0x18]
    unsigned long long v9;  // rdx

    v0.exec_cmd(a1, "ghc<custom snapshot>ltsnightlyError in module `haxe`:\nsrc/modules/haxe.rs", 3, &g_11f4e50, 1);
    if (!((char)(((0 ^ v0[0]) & (0 ^ -(v0[0]))) >> 63)))
    {
        memcpy(&v6, &v2, 16);
        v5 = v1;
        *((unsigned long long [2])&v3) = v0;
        v0.to_vec(core::str::<impl str>::trim_matches(v4, (long long)v5), v9);
        *((long long *)&a0[16]) = (long long)v1;
        *((unsigned long long [2])a0) = v0;
        return (unsigned long long)core::ptr::drop_in_place<starship::utils::CommandOutput>(&(char)v3);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
