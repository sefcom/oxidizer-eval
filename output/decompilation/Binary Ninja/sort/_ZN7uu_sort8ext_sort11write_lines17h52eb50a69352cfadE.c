
  void uu_sort::ext_sort::write_lines::h52eb50a69352cfad(int64_t* arg1, int64_t arg2, int64_t* arg3, char arg4)

{
    if (arg2)
    {
        int64_t rax;
        int64_t var_38 = rax;
        int64_t* i = arg1;
        
        do
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h965086cee6fc2068(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb45096c5fb22700(arg3, *i, i[1]));
            *var_38[7] = arg4;
            core::result::Result$LT$T$C$E$GT$::unwrap::h965086cee6fc2068(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::heb45096c5fb22700(arg3, &*var_38[7], 1));
            i = &i[3];
        } while (i != &arg1[arg2 * 3]);
    }
}
