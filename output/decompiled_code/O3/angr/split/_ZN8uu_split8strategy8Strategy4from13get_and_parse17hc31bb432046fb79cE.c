long long uu_split::strategy::Strategy::from::get_and_parse::hc31bb432046fb79c(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct struct_1 **a4, struct struct_1 **a5)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    unsigned long long v7[3];  // rax
    unsigned long long v8;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h6852572f55164c77(&v0, a1, a2, a3);
    v7 = clap_builder::parser::error::MatchesError::unwrap::h12d8ea78234f129c(a2, a3, &v0);
    if (!v7)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    uucore::parser::parse_size::parse_size_u64_max::h87e2f290a0681a26(&v4, v7[1], v7[2]);
    if (*((int *)&v4) != 3)
    {
        core::ops::function::FnOnce::call_once::h4e6065f3f65385f2(&v0, a5, &v4);
        v8 = *((long long *)&v3);
        a0->field_20 = v8;
        a0->field_10 = *((int128_t *)&v2);
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        return v8;
    }
    else if (*((long long *)&v5))
    {
        v8 = a4(&a0->padding_8);
        a0->field_0 = 4;
        return v8;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v1, v7);
        v0 = 1;
        v8 = a5(a0, &v0);
        return v8;
    }
}
