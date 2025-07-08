
  int64_t* uu_sort::ext_sort::write_lines::he98d063bf4fa553b(int64_t arg1, int64_t arg2, int64_t* arg3, char arg4)

{
    int64_t var_40 = arg1;
    int64_t var_38 = arg1 + arg2 * 0x18;
    int64_t* i;
    
    for (i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_40); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_40))
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h34e99087d02bdaf1(arg3, *i, i[1]));
        char var_41 = arg4;
        core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h34e99087d02bdaf1(arg3, &var_41, 1));
    }
    
    return i;
}
