long long uu_od::output_info::OutputInfo::new::hd018b23582328d66(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    v2 = a2 + a3 * 40;
    v0 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h4273d50cd09d4e14(a2, v2);
    v3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h301d543ec6ac31a5(a2, v2, &v0);
    if (v0)
    {
        uu_od::output_info::OutputInfo::create_spaced_formatter_info::h7281320184341c56(a0, a2, a3, v0, v3);
        a0->field_18 = a1;
        a0->field_20 = v3 * (!(v0 | a1) >> 32 ? (0 CONCAT (unsigned int)a1) /m (unsigned int)v0 & 4294967295 & 4294967295 : (0 CONCAT a1) /m v0);
        a0->field_28 = v0;
        a0->field_30 = a4;
        return a0;
    }
    core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
}
