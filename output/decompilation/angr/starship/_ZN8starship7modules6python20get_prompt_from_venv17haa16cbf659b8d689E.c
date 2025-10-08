void starship::modules::python::get_prompt_from_venv(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long long
    char v1;  // [bp-0x170]
    char v2;  // [bp-0x168]
    char v3;  // [bp-0xc8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xc0]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v3.join(a1, a2, "pyvenv.cfgpromptError in module `quarto`:\nsrc/modules/quarto.rs", 10);
    v0.load_from_file_opt(&v3, 1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v0.drop_in_place<core::result::Result<ini::Ini,ini::Error>>();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return;
    }
    memcpy(&v4, &v1, 168);
    v3 = v0;
    v6 = v3.general_section().get("promptError in module `quarto`:\nsrc/modules/quarto.rs", 6);
    if (v6)
    {
        v0.to_vec(core::str::<impl str>::trim_matches(v6, v7), a2);
        *((long long *)&a0[16]) = *((long long *)&v2);
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<ini::Ini>(&v3);
    return;
}
