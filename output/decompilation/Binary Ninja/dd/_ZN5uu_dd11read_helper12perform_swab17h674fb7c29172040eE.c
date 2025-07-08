
  uint64_t uu_dd::read_helper::perform_swab::h674fb7c29172040e(int64_t arg1, int64_t arg2)

{
    void* var_48;
    uint64_t result =
        core::iter::adapters::step_by::StepBy$LT$I$GT$::new::hccaf6edfe6d8c61d(&var_48, arg2);
    int64_t i_2;
    int64_t i_1 = i_2;
    
    if (i_1)
    {
        void* r15_1 = var_48;
        int64_t i;
        
        do
        {
            result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::swap::ha9fdd20b56a47561(arg1, 
                arg2, r15_1, r15_1 - 1);
            int64_t var_38;
            r15_1 += var_38 + 1;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }
    
    return result;
}
