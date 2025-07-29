void uu_mv::hardlink::<impl core::convert::From<uu_mv::hardlink::HardlinkError> for std::io::error::Error>::from(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = 0x8000000000000000 ^ *(a0);
    if (v3 >= 4)
        v3 = 2;
    goto (long long)(g_43a374[v3] + (char *)&g_43a374[0]);
}
