char just::subcommand::Subcommand::choose(char *a0, struct_0 *a1, unsigned long long a2[9], unsigned long long a3[6], unsigned long long a4[3], unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0x298]
    unsigned long long v2;  // [bp-0x288]
    unsigned long long *v3[9];  // [bp-0x280]
    unsigned long v4;  // [bp-0x278]
    unsigned long long v11;  // [bp-0x210]
    unsigned long long v12;  // [bp-0x208]
    void* v13;  // [bp-0x200]
    void* v29;  // [bp-0x158]
    unsigned long long v31;  // [bp-0x150]
    char *v32;  // [bp-0x148]
    unsigned long long v37;  // [bp-0x78]
    void* v38;  // [bp-0x70]
    unsigned long v39;  // [bp-0x68]
    unsigned long v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x58]
    void* v42;  // [bp-0x50]
    unsigned long v43;  // [bp-0x48]
    int v44;  // [bp-0x40]
    unsigned long long *v45[9];  // rax
    unsigned long long v46;  // rax
    struct_1 *v47;  // rbp
    unsigned long v48;  // rax
    int v49;  // xmm0
    unsigned long long v50;  // rcx
    unsigned long long v62;  // rdi
    unsigned long long v63;  // rsi
    int v64;  // ymm0, Other Possible Types: uint256_t

    v11 = 0;
    v12 = 8;
    v13 = 0;
    v45 = 8.alloc_impl(8);
    if (!v45)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    v0 = a5;
    *(v45) = a2;
    v2 = 1;
    v3 = v45;
    v46 = 1;
    do
    {
        v4 = v46 - 1;
        v47 = v3[1 + v46];
        v29.public_recipes(v47, a1->field_1a3);
        v11.extend_desugared(v31, v31 + v32 * 8);
        core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v29, v31);
        v48 = v47->field_2a0;
        if (v48)
        {
            v49 = *((int128_t *)&(&v47->field_2a0)[1]);
            v64 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v50 = 1;
        }
        else
        {
            v49 = 0;
            v64 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            v50 = 0;
        }
        v37 = v50;
        v38 = 0;
        v39 = v48;
        v40 = v64;
        v41 = v50;
        v42 = 0;
        v43 = v48;
        v44 = v49;
        v2.extend_desugared(&v37);
        v46 = v4;
    } while (v4);
    *(a0) = 35;
    core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v2, v3);
    v62 = v11;
    v63 = 8;
    return core::ptr::drop_in_place<alloc::vec::Vec<&just::binding::Binding<just::expression::Expression>>>(v62, v63);
}
