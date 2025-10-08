
  uint64_t fuel_core_version::main::h0e42a48deaafc2ac()

{
    int128_t var_a8;
    clap_builder::derive::Parser::parse::hf5e8743141cb4a85(&var_a8);
    int64_t var_98;
    int64_t var_68 = var_98;
    int128_t var_78 = var_a8;
    fuel_core_version::read_fuel_core_version::hefde22257e8a198e(&var_a8, &var_78);
    int64_t rax_1 = var_a8;
    uint64_t result = *var_a8[8];
    
    if (rax_1)
    {
        int128_t zmm0_1 = var_98;
        int64_t var_60 = rax_1;
        uint64_t result_1 = result;
        fuel_core_version::get_version_file_path::h4b460f2d9ec30e54(&var_a8, &var_78);
        int64_t r14_1 = var_a8;
        result = *var_a8[8];
        char var_90;
        
        if (-(r14_1) == -0x8000000000000000)
            core::ptr::drop_in_place$LT$semver..Version$GT$::h33470c6ef43969d7(&var_60);
        else
        {
            int64_t var_88;
            
            if (!var_90)
            {
                int64_t rax_5 = var_98;
                int64_t var_88_2 = var_88;
                var_98 = zmm0_1;
                var_a8 = var_60;
                int64_t var_38 = r14_1;
                uint64_t result_2 = result;
                int64_t var_28_1 = rax_5;
                uint64_t result_4 =
                    fuel_core_version::write_version_to_file::hb006b210003cc812(&var_a8, &var_38);
                result = result_4;
                
                if (!result_4)
                    result = 0;
            }
            else
            {
                int64_t var_88_1 = var_88;
                var_98 = zmm0_1;
                var_a8 = var_60;
                uint64_t result_3 =
                    fuel_core_version::verify_version_from_file::h505193d9cfd87079(&var_a8);
                core::mem::drop::h537fb6ac6377e35e(r14_1, result);
                
                if (!result_3)
                    result = 0;
                else
                    result = result_3;
            }
        }
    }
    
    core::mem::drop::h537fb6ac6377e35e(var_78, *var_78[8]);
    return result;
}
