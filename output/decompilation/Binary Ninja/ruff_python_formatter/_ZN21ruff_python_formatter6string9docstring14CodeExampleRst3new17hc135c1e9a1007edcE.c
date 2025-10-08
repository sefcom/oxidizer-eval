
  int64_t ruff_python_formatter::string::docstring::CodeExampleRst::new::hc135c1e9a1007edc(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_80;
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_80, arg2, 
        arg3);
    int64_t rax = var_80;
    int64_t result_1;
    int64_t var_68;
    int64_t result;
    int64_t var_78;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(result_1, 
        var_68, ".. ::/rustc/bf64d66bd58719fac258…", 3))
    {
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 =
            core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(result_1, var_68);
        result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(rax_2, 
            rdx_1, "::/rustc/bf64d66bd58719fac2585ea…", 2);
        
        if (!result)
            *arg1 = -0x8000000000000000;
        else
        {
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_80, rax, var_78);
            result = result_1;
            arg1[5] = result;
            *(arg1 + 0x18) = var_80;
            *arg1 = 0;
            arg1[1] = 8;
            arg1[2] = 0;
            arg1[6] = 5;
            arg1[9] = 0;
        }
    }
    else
    {
        result = ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block::h4a2856211cdeac1e(&var_80, arg2, arg3);
        
        if (!(0 + -(var_80)))
        {
            int128_t var_40;
            *(arg1 + 0x40) = var_40;
            int128_t zmm0_1 = var_80;
            int128_t var_50;
            *(arg1 + 0x30) = var_50;
            int128_t var_60;
            *(arg1 + 0x20) = var_60;
            *(arg1 + 0x10) = result_1;
            *arg1 = zmm0_1;
        }
        else
        {
            result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_78);
            *arg1 = -0x8000000000000000;
        }
    }
    return result;
}
