long long uu_sort::print_sorted(uint128_t a0[3], unsigned long long a1, unsigned long long a2[3])
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0x98]
    int v2;  // [bp-0x88], Other Possible Types: char
    int v3;  // [bp-0x78], Other Possible Types: char
    int v4;  // [bp-0x68]
    char v5;  // [bp-0x58]
    unsigned long v7;  // cc_ndep
    unsigned long long v8[2];  // rax
    void* v9;  // rax

    v2.to_vec(((char)_ccall(1, 8, 0, a2[0], v7) ? a2[1] : "standard outputwrite failed: "), ((char)_ccall(1, 8, 0, a2[0], v7) ? a2[2] : 15));
    v1 = *((long long *)&v3);
    v0 = v2;
    v5.into_write(a2);
    *((uint128_t *)&v4) = a0[2];
    *((uint128_t *)&v3) = a0[1];
    *((uint128_t *)&v2) = a0[0];
    while (true)
    {
        v8 = v2.next();
        if (!v8)
            break;
        if (v8[0].print(v8[1], &v5, a1).map_err_context(&v0))
            goto LABEL_4d6b01;
    }
    v9 = v5.flush().map_err_context(&v0);
    if (v9)
    {
LABEL_4d6b01:
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
    }
    else
    {
        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v5);
        v9 = 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return v9;
}
