
  int64_t uu_sort::Line::print::h11ec83e4c23cc353(int64_t* arg1, int64_t* arg2, void* arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    char* rsi = *arg1;
    uint64_t rax_1 = arg1[1];
    
    if (*(arg3 + 0x7c))
        /* tailcall */
        return core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(
            uu_sort::Line::print_debug::h449aee62a7355a6b(rsi, rax_1, arg3, arg2));
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg2, rsi, rax_1));
    *var_18[7] = *(arg3 + 0x99);
    int64_t result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::ha22c3623ed8043b2(arg2, &*var_18[7], 1);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc797643040b7ea27(result);
    return result;
}
