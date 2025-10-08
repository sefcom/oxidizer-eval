long long fuel_core_version::get_version_file_path(unsigned long long a0[2], unsigned long long a1)
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax

    v2 = a1.as_ref().parent(v1);
    if (!v2)
    {
        a0[1] = eyre::error::<impl eyre::Report>::from_display();
        a0[0] = 0x8000000000000000;
        return 0x8000000000000000;
    }
    return a0.join(v2, v1);
}
