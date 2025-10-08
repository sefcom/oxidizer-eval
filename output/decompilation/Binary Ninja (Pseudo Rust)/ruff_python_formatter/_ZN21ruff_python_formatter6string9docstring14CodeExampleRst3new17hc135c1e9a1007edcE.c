
  fn ruff_python_formatter::string::docstring::CodeExampleRst::new::hc135c1e9a1007edc(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_80: i64;
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_80, arg2, 
        arg3);
    let rax: i64 = var_80;
    let result_1: i64;
    let var_68: i64;
    let mut result: i64;
    let var_78: i64;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(result_1, var_68, 
        ".. ::/rustc/bf64d66bd58719fac258…", 3) == 0
    {
        let mut rax_2: i64;
        let mut rdx_1: i64;
        rax_2 =
            core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(result_1, var_68);
        result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h74aadde88527fc22(rax_2, 
            rdx_1, "::/rustc/bf64d66bd58719fac2585ea…", 2);
        
        if result == 0
        {
            *arg1 = -0x8000000000000000;
        }
        else
        {
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_80, rax, var_78);
            result = result_1;
            arg1[5] = result;
            *arg1.byte_offset(0x18) = var_80;
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
        
        if !(0 + -(var_80))
        {
            let var_40: i128;
            *arg1.byte_offset(0x40) = var_40;
            let zmm0_1: i128 = var_80;
            let var_50: i128;
            *arg1.byte_offset(0x30) = var_50;
            let var_60: i128;
            *arg1.byte_offset(0x20) = var_60;
            *arg1.byte_offset(0x10) = result_1;
            *arg1 = zmm0_1;
        }
        else
        {
            result = core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_78);
            *arg1 = -0x8000000000000000;
        }
    }
    result
}
