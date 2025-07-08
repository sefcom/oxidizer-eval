
  fn uu_sort::Line::print::h11ec83e4c23cc353(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let rax: i64;
    let mut var_18: i64 = rax;
    let rsi: *mut i8 = *arg1;
    let rax_1: u64 = arg1[1];
    
    if *arg3.byte_offset(0x7c) != 0
    {
        /* tailcall */
        return core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(
            uu_sort::Line::print_debug::h449aee62a7355a6b(rsi, rax_1, arg3, arg2));
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg2, rsi, rax_1));
    *var_18[7] = *arg3.byte_offset(0x99);
    let result: i64 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg2, &*var_18[7], 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(result);
    result
}
