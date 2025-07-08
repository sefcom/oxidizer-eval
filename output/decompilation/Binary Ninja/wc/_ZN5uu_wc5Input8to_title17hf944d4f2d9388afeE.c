
  void uu_wc::Input::to_title::hf944d4f2d9388afe(int64_t* arg1, int64_t* arg2)

{
    int64_t rbp = -0x8000000000000000;
    
    if (*arg2 != -0x7fffffffffffffff)
    {
        char* r15_1 = arg2[1];
        size_t r14_1 = arg2[2];
        int64_t var_48;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_48, r15_1, r14_1);
        char* r12_1;
        void* r13_1;
        char* var_40;
        void* var_38;
        
        if (var_48)
        {
            label_4b9159:
            uucore::features::quoting_style::escape_name::ha9b5831150e16363(&var_48, r15_1, r14_1, 
                &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
            rbp = var_48;
            r12_1 = var_40;
            r13_1 = var_38;
        }
        else
        {
            r12_1 = var_40;
            r13_1 = var_38;
            
            if (_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(r12_1, r13_1))
                goto label_4b9159;
        }
        *arg1 = rbp;
        arg1[1] = r12_1;
        arg1[2] = r13_1;
    }
    else if (!arg2[1])
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = &data_41e2be[0x29];
        arg1[2] = 1;
    }
    else
        *arg1 = -0x7fffffffffffffff;
}
