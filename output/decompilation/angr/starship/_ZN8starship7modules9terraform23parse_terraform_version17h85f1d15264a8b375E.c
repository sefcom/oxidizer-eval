long long starship::modules::terraform::parse_terraform_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    unsigned long v1;  // [bp-0x60]
    void* v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned short v5;  // [bp-0x18]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v4.into_searcher(10, a1, a2);
    v2 = 0;
    v3 = a2;
    v5 = 0;
    v7 = v2.next_inclusive();
    if (!v7)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v9 = core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v7.call(v8), v8, "Terraform OpenTofu Timer module is enabled with format string: Error in module `time`: \n", 10), v8, "OpenTofu Timer module is enabled with format string: Error in module `time`: \n", 9);
    v10 = core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_matches(v9, v8), v8);
    v0.to_vec(v10, a2);
    *((unsigned long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
