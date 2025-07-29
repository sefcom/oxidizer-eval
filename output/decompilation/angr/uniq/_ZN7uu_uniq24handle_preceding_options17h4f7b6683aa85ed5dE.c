long long uu_uniq::handle_preceding_options(unsigned long long a0, unsigned long long a1, char *a2, char *a3)
{
    unsigned int v0;  // [bp-0x3c]
    char *v1;  // [bp-0x38]
    char *v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v3 = a2;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, "---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappend", 2))
    {
        v1 = a2;
        v4 = a0.get(a1);
        if (!v4)
            core::str::slice_error_fail(a0, a1, 2, a1, &g_58bde0); /* do not return */
        v5 = v4;
        if (!(char)v5.equal(v6, _ZN7uu_uniq7options10SKIP_CHARS17hc7963560e8db47ceE, g_58c560) && !(char)v5.equal(v6, _ZN7uu_uniq7options11SKIP_FIELDS17h9bdd8e0819f91776E, g_58c550) && !(char)v5.equal(v6, _ZN7uu_uniq7options11CHECK_CHARS17he6a6d54814012578E, g_58c510) && !(char)v5.equal(v6, _ZN7uu_uniq7options5GROUP17hb84543885041a53aE, g_58c590))
            v5.equal(v6, _ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E, g_58c500);
        v3 = v1;
        *(v1) = 1;
    }
    if (!(char)a0.equal(a1, "-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappe", 2) && !(char)a0.equal(a1, "-f-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodap", 2))
        a0.equal(a1, "-wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappendun", 2);
    *(a3) = 1;
    v0 = 0;
    v7 = core::slice::<impl [T]>::starts_with(a0, a1, ::0x4a89d0::core::char::methods::encode_utf8_raw(45, &v0), v6);
    if ((char)v7)
        return v7;
    *(a3) = 0;
    *(v3) = 0;
    return v7;
}
