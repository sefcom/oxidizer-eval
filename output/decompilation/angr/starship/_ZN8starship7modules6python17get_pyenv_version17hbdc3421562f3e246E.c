long long starship::modules::python::get_pyenv_version(void* a0, void* a1)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xa8]
    int v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x88]
    unsigned long long v4[2];  // [bp-0x78]
    int v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    int v9;  // [bp-0x38]
    char v10;  // [bp-0x28]
    unsigned long long v13;  // rdx

    v0.get_env("PYENV_VERSIONversion-name", 13);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        v4.exec_cmd(a1, "pyenvpyvenv.cfgpromptError in module `quarto`:\nsrc/modules/quarto.rs", 5, &g_11f5d68, 1);
        if (v4[0] == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            return (unsigned long long)core::ptr::drop_in_place<regex::error::Error>(&v0);
        }
        memcpy(&v10, &v6, 16);
        v9 = v5;
        *((unsigned long long [2])&v7) = v4;
        v4.to_vec(core::str::<impl str>::trim_matches(v8, (long long)v9), v13);
        v3 = (long long)v5;
        *((unsigned long long [2])&v2) = v4;
        core::ptr::drop_in_place<regex::error::Error>(&v0);
        v1 = v3;
        memcpy(&v0, &v2, 16);
        core::ptr::drop_in_place<starship::utils::CommandOutput>(&(char)v7);
    }
    *((unsigned long long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
