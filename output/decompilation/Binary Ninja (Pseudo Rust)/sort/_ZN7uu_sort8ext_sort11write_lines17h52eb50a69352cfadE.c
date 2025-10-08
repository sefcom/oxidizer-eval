
  fn uu_sort::ext_sort::write_lines::h52eb50a69352cfad(arg1: *mut i64, arg2: i64, arg3: *mut i64, arg4: i8)

{
    if arg2 != 0
    {
        let rax: i64;
        let mut var_38: i64 = rax;
        let mut i: *mut i64 = arg1;
        
        do
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h965086cee6fc2068(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb45096c5fb22700(arg3, *i, i[1]));
            *var_38[7] = arg4;
            core::result::Result$LT$T$C$E$GT$::unwrap::h965086cee6fc2068(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb45096c5fb22700(arg3, &*var_38[7], 1));
            i = &i[3];
        } while i != &arg1[arg2 * 3];
    }
}
