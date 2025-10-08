long long fish::builtins::function::function(void* a0, struct_2 *a1, unsigned long long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v30;  // [bp-0x1e0]
    void* v31;  // [bp-0x1d8]
    unsigned long long v32;  // [bp-0x1d0]
    unsigned long long v76;  // [bp-0x70]
    unsigned long long v77;  // [bp-0x68]
    void* v83;  // rax
    unsigned long long v129;  // rdx
    unsigned long long v130;  // rdi

    v76 = a4;
    v77 = a5;
    v83 = 8.alloc_impl(16, 0);
    if (!v83)
        alloc::alloc::handle_alloc_error(8, 16); /* do not return */
    *((char **)v83) = "f";
    *((unsigned long long *)&v83[8]) = 8;
    v30 = 1;
    v31 = v83;
    v32 = 1;
    v30.spec_extend(a2, a3 * 16 + a2);
    v129 = &g_14ca020;
    v130 = 1;
    core::panicking::panic_bounds_check(v130, v130, v129); /* do not return */
}
