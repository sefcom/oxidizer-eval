long long fish::termsize::TermsizeData::mark_override_from_env(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long long v1;  // rax

    a0->field_18 = 1;
    a0->field_20 = a1;
    a0->field_28 = a2;
    a0->field_0 = 0;
    v1 = core::sync::atomic::atomic_load(&_ZN4fish8termsize22TTY_TERMSIZE_GEN_COUNT17ha4aa3eda6c6dc63dE, 0);
    a0->field_30 = v1;
    return v1;
}
