
  fn fuel_core_version::main::h0e42a48deaafc2ac() -> u64

{
    let mut var_a8: i128;
    clap_builder::derive::Parser::parse::hf5e8743141cb4a85(&var_a8);
    let mut var_98: i64;
    let var_68: i64 = var_98;
    let mut var_78: i128 = var_a8;
    fuel_core_version::read_fuel_core_version::hefde22257e8a198e(&var_a8, &var_78);
    let rax_1: i64 = var_a8;
    let mut result: u64 = *var_a8[8];
    
    if rax_1 != 0
    {
        let zmm0_1: i128 = var_98;
        let mut var_60: i64 = rax_1;
        let result_1: u64 = result;
        fuel_core_version::get_version_file_path::h4b460f2d9ec30e54(&var_a8, &var_78);
        let r14_1: i64 = var_a8;
        result = *var_a8[8];
        let var_90: i8;
        
        if -(r14_1) == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_60);
        }
        else
        {
            let var_88: i64;
            
            if var_90 == 0
            {
                let rax_5: i64 = var_98;
                let var_88_2: i64 = var_88;
                var_98 = zmm0_1;
                var_a8 = var_60;
                let mut var_38: i64 = r14_1;
                let result_2: u64 = result;
                let var_28_1: i64 = rax_5;
                let result_4: u64 =
                    fuel_core_version::write_version_to_file::hb006b210003cc812(&var_a8, &var_38);
                result = result_4;
                
                if result_4 == 0
                {
                    result = 0;
                }
            }
            else
            {
                let var_88_1: i64 = var_88;
                var_98 = zmm0_1;
                var_a8 = var_60;
                let result_3: u64 =
                    fuel_core_version::verify_version_from_file::h505193d9cfd87079(&var_a8);
                core::mem::drop::h537fb6ac6377e35e(r14_1, result);
                
                if result_3 == 0
                {
                    result = 0;
                }
                else
                {
                    result = result_3;
                }
            }
        }
    }
    
    core::mem::drop::h537fb6ac6377e35e(var_78, *var_78[8]);
    result
}
