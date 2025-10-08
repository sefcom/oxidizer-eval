long long uu_sort::merge::FileMerger::write_all(uint128_t a0[6], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0x78]
    int v2;  // [bp-0x68]
    int v3;  // [bp-0x58]
    int v4;  // [bp-0x48]
    int v5;  // [bp-0x38]
    int v6;  // [bp-0x28]
    unsigned long long v8;  // rax

    v0.into_write(a2);
    *((uint128_t *)&v6) = a0[5];
    *((uint128_t *)&v5) = a0[4];
    *((uint128_t *)&v4) = a0[3];
    *((uint128_t *)&v3) = a0[2];
    *((uint128_t *)&v2) = a0[1];
    *((uint128_t *)&v1) = a0[0];
    v8 = v1.write_all_to(a1, &v0);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v0);
    return v8;
}
