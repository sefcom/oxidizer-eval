
  fn uu_pr::pr::h5485419cf3c9b0ae(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut i128) -> *mut i128

{
    let mut var_c8: i64;
    uu_pr::open::hde771125822bcd7a(&var_c8, arg2, arg3);
    let rax: i64 = var_c8;
    let var_c0: i64;
    let var_b8: i64;
    
    if rax != -0x7ffffffffffffffb
    {
        *arg1 = rax;
        *arg1.byte_offset(8) = var_c0;
        arg1[1] = var_b8;
        let var_b0: i64;
        *arg1.byte_offset(0x18) = var_b0;
    }
    else
    {
        let mut var_68: ();
        std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hede0d348de07a176(&var_68, 
            var_c0, var_b8);
        let rax_1: *mut i32 = uu_pr::read_stream_and_create_pages::h546541715f29f024(arg4, &var_68);
        
        loop
        {
            let mut var_88: i64;
            _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h51eab1bbfc549aaf(&var_88, rax_1);
            let mut var_80: i64;
            
            if var_80 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(rax_1, &data_6694e0);
                *arg1.byte_offset(8) = 0;
                *arg1 = -0x7ffffffffffffffb;
                break;
            }
            
            let rcx: i64 = var_88;
            let mut var_a8: i128 = var_80;
            let var_70: i64;
            let var_98_1: i64 = var_70;
            let mut rax_2: i8;
            let mut rdx_3: i64;
            rax_2 = uu_pr::print_page::hc11615535955301d(*var_a8[8], var_70, arg4, rcx + 1);
            
            if (rax_2 & 1) != 0
            {
                _$LT$uu_pr..PrError$u20$as$u20$core..convert..From$LT$std..io..error..Error$GT$$GT$::from::h216bf08d6106c8bb(&var_c8, rdx_3, rdx_3);
                let zmm0_2: i128 = var_c8;
                arg1[1] = var_b8;
                *arg1 = zmm0_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_a8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hddd4d76a723283f5(rax_1, &data_6694e0);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_pr..FileLine$GT$$GT$::hdc8372bef9543cb5(&var_80);
        }
    }
    arg1
}
