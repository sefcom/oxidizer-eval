
  int64_t uu_dd::read_helper::perform_swab::h85f2ce77153961c5(void* arg1, int64_t arg2)

{
    int64_t var_48;
    int64_t result =
        core::iter::adapters::step_by::StepBy$LT$I$GT$::new::hc206f71f6fe0b664(&var_48, arg2);
    int64_t i_1;
    int64_t i = i_1;
    
    if (i)
    {
        int64_t r15_1 = var_48;
        
        do
        {
            if (r15_1 >= arg2)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1, arg2);
                /* no return */
            }
            
            if (r15_1 - 1 >= arg2)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_1 - 1, arg2);
                /* no return */
            }
            
            i -= 1;
            result = core::ptr::swap::h905a97f5e78b1d89(arg1 + r15_1, arg1 + r15_1 - 1);
            int64_t var_38;
            r15_1 += var_38 + 1;
        } while (i);
    }
    
    return result;
}
