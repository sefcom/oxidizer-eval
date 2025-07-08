
  int64_t uu_paste::parse_delimiters::hdea474197eebcdf0(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_58 = arg2;
    int64_t var_50 = arg3;
    int32_t var_bc = 0;
    char const (** const var_b8)[0xd7];
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hed2ab512317b9dca(&var_b8, arg3, 0);
    int64_t var_b0;
    
    if (var_b8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_b0);
        /* no return */
    }
    
    int64_t var_80 = var_b0;
    int64_t var_a8;
    int64_t var_78 = var_a8;
    int64_t var_70 = 0;
    int64_t var_68 = arg2;
    int64_t var_60 = arg3 + arg2;
    int32_t rax_1;
    int32_t rdx;
    rax_1 = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
    
    if (rax_1)
    {
        int32_t i;
        
        do
        {
            if (rdx != 0x5c)
                uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                    &var_bc, &var_80, rdx);
            else
            {
                int32_t rax_2;
                rax_2 = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
                
                if (!rax_2)
                {
                    int64_t* var_48 = &var_58;
                    int64_t (* var_40_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c7e3763925384ef;
                    var_b8 = &data_513558;
                    int64_t var_b0_1 = 1;
                    int64_t var_98_1 = 0;
                    int64_t** var_a8_2 = &var_48;
                    int64_t var_a0_1 = 1;
                    int128_t var_38;
                    core::option::Option$LT$T$GT$::map_or_else::he6dc542b829026a4(&var_38, &var_b8);
                    var_a0_1 = 1;
                    var_b8 = var_38;
                    int64_t var_28;
                    int64_t var_a8_3 = var_28;
                    *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::h5c05caca195ee6c7(&var_b8);
                    *(arg1 + 0x10) = &data_5135a0;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$GT$$GT$::h360947c94bee4ecb(&var_80);
                }
                
                if (rdx > 0x6d)
                {
                    if (rdx == 0x6e)
                    {
                        rax_2 = 0xa;
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    }
                    else if (rdx != 0x74)
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                            &var_bc, &var_80, rdx);
                    else
                    {
                        rax_2 = 9;
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    }
                }
                else if (rdx == 0x30)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hacd10739b9a3e208(&var_80, 
                        alloc::boxed::Box$LT$T$GT$::new::hfdd8bc0d64dc9dfb(), 0);
                else
                {
                    rax_2 = 0x5c;
                    
                    if (rdx == 0x5c)
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::h0e699944cdb285e0(&var_80, rax_2);
                    else
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h701ecf4682e0258c(
                            &var_bc, &var_80, rdx);
                }
            }
            
            i = core::str::validations::next_code_point::h67e93eb2e3817b3c(&var_68, arg1);
        } while (i);
    }
    
    int64_t var_a8_1 = var_70;
    var_b8 = var_80;
    int64_t result;
    int64_t rdx_1;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h4387899d6ce3dba8(&var_b8);
    *(arg1 + 8) = result;
    *(arg1 + 0x10) = rdx_1;
    *arg1 = 0;
    return result;
}
