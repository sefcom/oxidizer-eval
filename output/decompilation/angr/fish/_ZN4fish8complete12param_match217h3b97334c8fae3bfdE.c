long long fish::complete::param_match2(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r12
    unsigned long v5;  // rbp
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx

    v0 = v2;
    v3 = a0->field_10;
    if (v3)
    {
        v4 = fish::complete::leading_dash_count(a1, a2);
        v5 = a0->field_65;
        if (v4 == g_54d548[v5])
        {
            v6 = a1.slice_from(a2, v4);
            if (v6.starts_with(v7, a0->field_8, v3))
            {
                if ((char)v5 != 1)
                    return (int)a1.char_at(a2, v4 + v3) == 61;
                core::panicking::panic("assertion failed: e.typ != CompleteOptionType::Shortassertion failed: option.is_empty() == (option_type == CompleteOptionType::ArgsOnly)mutex poisoned -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", 52, &g_14d6260); /* do not return */
            }
        }
    }
    return 0;
}
