
  fn uu_sort::ext_sort::write_lines::h885deb96e81ca5d5(arg1: i64, arg2: i64, arg3: *mut i64, arg4: i8) -> *mut i64

{
    let mut var_40: i64 = arg1;
    let var_38: i64 = arg1 + arg2 * 0x18;
    let mut i: *mut i64;
    
    for i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_40); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h025563f650802cf2(&var_40)
    {
        core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg3, *i, i[1]));
        let mut var_41: i8 = arg4;
        core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg3, &var_41, 1));
    }
    
    i
}
