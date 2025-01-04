long long uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(uint128_t a0[6], unsigned long long a1)
{
    char v0;  // [bp-0xa8]
    int v1;  // [sp-0x78]
    int v2;  // [sp-0x68]
    int v3;  // [sp-0x58]
    int v4;  // [sp-0x48]
    int v5;  // [sp-0x38]
    int v6;  // [sp-0x28]
    void* v8;  // rdx

    uu_sort::Output::into_write::h9c5c08d876f77806(&v0, v8);
    *((uint128_t *)&v6) = a0[5];
    *((uint128_t *)&v5) = a0[4];
    *((uint128_t *)&v4) = a0[3];
    *((uint128_t *)&v3) = a0[2];
    *((uint128_t *)&v2) = a0[1];
    *((uint128_t *)&v1) = a0[0];
    ::0x525f20::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&v0);
    return uu_sort::merge::FileMerger::write_all_to::h11b453511c748ea2(&v1, a1);
}
