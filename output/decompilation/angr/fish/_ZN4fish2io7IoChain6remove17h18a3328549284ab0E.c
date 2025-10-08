long long fish::io::IoChain::remove(unsigned long long a0[3], unsigned long long a1)
{
    unsigned long v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v4;  // rdx

    v2 = a1;
    v0 = a0[1];
    v1 = a0[2] * 16 + a0[1];
    if (!((char)v0.position(&v2) & 1))
        core::option::expect_failed("Element not foundfd redirection should have been validated alreadyT", 17, &g_14db870); /* do not return */
    v0 = a0.remove(v4);
    v1 = v4;
    return core::ptr::drop_in_place<alloc::sync::Arc<dyn fish::io::IoData>>(&v0);
}
