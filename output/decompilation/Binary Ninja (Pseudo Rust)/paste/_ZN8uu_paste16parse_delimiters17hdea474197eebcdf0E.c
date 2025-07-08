
  fn uu_paste::parse_delimiters::hdea474197eebcdf0(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut var_58: i64 = arg2;
    let var_50: i64 = arg3;
    let mut var_bc: i32 = 0;
    let mut var_b8: *mut *mut [i8; 0xd7];
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hed2ab512317b9dca(&var_b8, arg3, 0);
    let var_b0: i64;
    
    if var_b8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_b0);
        /* no return */
    }
    
    let mut var_80: i64 = var_b0;
    let var_a8: i64;
    let var_78: i64 = var_a8;
    let var_70: i64 = 0;
    let mut var_68: i64 = arg2;
    let var_60: i64 = arg3 + arg2;
    let mut rax_1: i32;
    let mut rdx: i32;
    rax_1 = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
    
    if rax_1 != 0
    {
        let mut i: i32;
        
        do
        {
            if rdx != 0x5c
            {
                uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                    &var_bc, &var_80, rdx);
            }
            else
            {
                let mut rax_2: i32;
                rax_2 = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
                
                if rax_2 == 0
                {
                    let mut var_48: *mut i64 = &var_58;
                    let var_40_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c7e3763925384ef;
                    var_b8 = &data_513558;
                    let var_b0_1: i64 = 1;
                    let var_98_1: i64 = 0;
                    let var_a8_2: *mut *mut i64 = &var_48;
                    let mut var_a0_1: i64 = 1;
                    let mut var_38: i128;
                    core::option::Option$LT$T$GT$::map_or_else::he6dc542b829026a4(&var_38, &var_b8);
                    var_a0_1 = 1;
                    var_b8 = var_38;
                    let var_28: i64;
                    let var_a8_3: i64 = var_28;
                    *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h5c05caca195ee6c7(&var_b8);
                    *(arg1 + 0x10) = &data_5135a0;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h360947c94bee4ecb(&var_80);
                }
                
                if rdx > 0x6d
                {
                    if rdx == 0x6e
                    {
                        rax_2 = 0xa;
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    }
                    else if rdx != 0x74
                    {
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                            &var_bc, &var_80, rdx);
                    }
                    else
                    {
                        rax_2 = 9;
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    }
                }
                else if rdx == 0x30
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hacd10739b9a3e208(&var_80, 
                        alloc::boxed::Box$LT$T$GT$::new::hfdd8bc0d64dc9dfb(), 0);
                }
                else
                {
                    rax_2 = 0x5c;
                    
                    if rdx == 0x5c
                    {
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    }
                    else
                    {
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                            &var_bc, &var_80, rdx);
                    }
                }
            }
            
            i = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
        } while i != 0;
    }
    
    let var_a8_1: i64 = var_70;
    var_b8 = var_80;
    let mut result: i64;
    let mut rdx_1: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h4387899d6ce3dba8(&var_b8);
    *(arg1 + 8) = result;
    *(arg1 + 0x10) = rdx_1;
    *arg1 = 0;
    result
}
