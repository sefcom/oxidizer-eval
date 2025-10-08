long long starship::modules::rust::execute_rustc_version(unsigned long long a0, void* a1)
{
    int v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3[2];  // [bp-0x68]
    int v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    int v6;  // [bp-0x38]
    int v7;  // [bp-0x28]
    int v8;  // [bp-0x18]
    int v10;  // xmm0

    v3.exec_cmd(a1, "rustcRunning rustc --version directly with Running rustup ", 5, &g_11f24f0, 1);
    if ((char)(((0 ^ v3[0]) & (0 ^ -(v3[0]))) >> 63))
    {
        v1 = 0x8000000000000000;
    }
    else
    {
        v10 = v3;
        v8 = v5;
        v7 = v4;
        *((unsigned long long [2])&v6) = v3;
        v0 = v6;
        v2 = (long long)v4;
        core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
    }
    return a0.filter(&v0);
}
