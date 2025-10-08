int starship::utils::internal_exec_cmd(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x1e0]
    char v1;  // [bp-0x1d8]
    unsigned long long v2[2];  // [bp-0x100]
    char v3;  // [bp-0xf8]
    unsigned int v5;  // eax

    starship::utils::create_command(&v2, a1, a2);
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        memcpy(&v1, &v3, 216);
        *((unsigned long long [2])&v0) = v2;
        v0.args(a3, a4);
        starship::utils::exec_timeout(a0, &v0, 0, 0x1dcd6500);
        return core::ptr::drop_in_place<std::process::Command>(&v0);
    }
    v5 = core::ptr::drop_in_place<core::result::Result<std::process::Command,std::io::error::Error>>(&v2);
    *(a0) = 0x8000000000000000;
    return v5;
}
