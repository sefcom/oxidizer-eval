long long starship::modules::python::get_python_version(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    int v1;  // [bp-0x70], Other Possible Types: char
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x38]

    v2 = a2;
    v3 = a2 + a3 * 24;
    v6.find_map(&v2, a1);
    if (!((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63)))
    {
        starship::utils::get_command_string_output(&v0, &v6);
        memcpy(&v5, &v1, 16);
        v4 = v0;
        starship::modules::python::get_python_version::{{closure}}(&v0, &v4);
        *((void*)&(&a0->field_0)[1]) = v1;
        a0->field_0 = v0;
        return v0;
    }
    a0->field_0 = 0x8000000000000000;
    return 0x8000000000000000;
}
