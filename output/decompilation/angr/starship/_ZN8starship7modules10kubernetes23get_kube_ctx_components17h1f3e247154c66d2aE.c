long long starship::modules::kubernetes::get_kube_ctx_components(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    char v2;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x70]
    int v4;  // [bp-0x68], Other Possible Types: char
    int v5;  // [bp-0x58]
    int v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    unsigned long long v9;  // rax
    unsigned long long *v10;  // rax
    int v11;  // xmm0

    v9 = a1.get("contextsjsr.jsonPROTOCOLprofile.", 8);
    if (v9)
    {
        v2.as_array(v9);
        v9 = 0x8000000000000000;
        if (v2 != 0x8000000000000000)
        {
            v0 = v3;
            v1 = v0 + *((long long *)&v4) * 8;
            v10 = v0.find(a2, a3);
            if (v10)
            {
                starship::modules::kubernetes::get_kube_ctx_components::{{closure}}(&v2, *(v10));
                *((long long *)&a0[64]) = *((long long *)&v7);
                v11 = *((int128_t *)&v2);
                a0[48] = v6;
                a0[32] = v5;
                a0[16] = v4;
                *(a0) = v11;
            }
            else
            {
                *((unsigned long long *)a0) = 9223372036854775809;
            }
            return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<regex_automata::util::primitives::NonMaxUsize>>>(v2, v0);
        }
    }
    *((unsigned long long *)a0) = 9223372036854775809;
    return v9;
}
