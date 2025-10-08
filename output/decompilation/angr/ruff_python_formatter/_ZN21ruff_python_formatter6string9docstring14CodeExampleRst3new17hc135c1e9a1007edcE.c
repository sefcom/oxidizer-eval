long long ruff_python_formatter::string::docstring::CodeExampleRst::new(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x88]
    char v1;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    int v5;  // [bp-0x60]
    int v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rax
    int v10;  // xmm0
    int v11;  // xmm1
    unsigned long long v12;  // rdx

    ruff_python_formatter::string::docstring::indent_with_suffix(&v1, a1, a2);
    v0 = v1;
    if ((char)core::slice::<impl [T]>::starts_with(v3, v4, ".. ::/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rs", 3))
    {
        v1.new_code_block(a1, a2);
        if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v7);
            v10 = *((int128_t *)&v1);
            v11 = *((int128_t *)&v3);
            a0[48] = v6;
            a0[32] = v5;
            a0[16] = v11;
            *(a0) = v10;
            return 0;
        }
        v9 = (unsigned long long)core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(0x8000000000000000, v2);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v9;
    }
    else if ((char)core::slice::<impl [T]>::ends_with(core::str::<impl str>::trim_end_matches(v3, v4), v12, "::/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rs", 2))
    {
        v1.from_str(v0, v2);
        *((unsigned long long *)&a0[40]) = v3;
        *((int128_t *)&a0[24]) = *((int128_t *)&v1);
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
        *((unsigned int *)&a0[48]) = 5;
        *((char *)&a0[72]) = 0;
        return v3;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
}
