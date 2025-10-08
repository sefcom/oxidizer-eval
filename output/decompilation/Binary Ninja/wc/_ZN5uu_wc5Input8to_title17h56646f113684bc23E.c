
  void uu_wc::Input::to_title::h56646f113684bc23(int64_t* arg1, int64_t* arg2)

{
    if (*arg2 != -0x7fffffffffffffff)
    {
        char* r15_1 = arg2[1];
        uint64_t r14_1 = arg2[2];
        void var_40;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, r15_1, r14_1);
        char* var_38;
        void* var_30;
        char rax_1 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_38, var_30);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h14345ba51c0be1b8(&var_40);
        
        if (rax_1)
            /* tailcall */
            return uucore::features::quoting_style::escape_name::h942044e1943bd5af(arg1, r15_1, 
                r14_1, &data_41a13f);
        
        *arg1 = -0x8000000000000000;
        arg1[1] = r15_1;
        arg1[2] = r14_1;
    }
    else if (!arg2[1])
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = &data_41a0ed[0x51];
        arg1[2] = 1;
    }
    else
        *arg1 = -0x7fffffffffffffff;
}
