long long uu_df::is_included::h21d348ae8506351c(char a0[146], struct_0 *a1)
{
    unsigned long long v1;  // rax

    if ((!a0[144] || !a1->field_50) && (!a0[145] || a1->field_51) && (!(a1->field_30 != 0x8000000000000000) || !((v1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(a0 + 48, a1->field_38, a1->field_40), (char)v1))))
    {
        if (a1->field_18 != 0x8000000000000000)
            return _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5ec19a7369aaf82d(&a0[48], a1->field_20, a1->field_28);
        return v1 | -0x100 | 1;
    }
    return 0;
}
