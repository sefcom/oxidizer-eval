
  fn uu_ls::TimeStyler::new::hf5080b982bd19d16(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let rax_1: i64 = *arg2 ^ 0x8000000000000000;
    let mut rcx: i64 = 4;
    
    if rax_1 < 4
    {
        rcx = rax_1;
    }
    
    let mut var_d0: *const i8;
    let mut var_c0_1: i64;
    let mut var_a8: i64;
    let mut var_a0: i128;
    let mut var_90: i32;
    let mut var_78: i64;
    let mut result: i32;
    let mut var_58: i128;
    let mut rax_5: i32;
    let mut r15_1: *const i8;
    
    match rcx
    {
        0 =>
        {
            var_d0 = "%Y-%m-%d %H:%M:%S.%f %z%b %e %H:…";
            let var_c8_1: i64 = 0x17;
            'label_590d82:
            let var_c0_2: i64 = 8;
            let var_b8_3: i64 = 0;
            let var_b0_3: i8 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            goto 'label_590db6;
        }
        1 =>
        {
            var_d0 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.…";
            let var_c8_4: i64 = 0xe;
            goto 'label_590d82;
        }
        2 =>
        {
            var_d0 = "%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d …";
            let var_c8_2: i64 = 9;
            var_c0_1 = 8;
            let var_b8_1: i64 = 0;
            let var_b0_1: i8 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            r15_1 = "%m-%d %H:%M`DateTime - TimeDelta…";
            'label_590cb1:
            core::result::Result$LT$T$C$E$GT$::unwrap::h818d8937d812229f(&var_58, &var_90);
            let mut var_40: *const i8 = r15_1;
            let var_38_1: i64 = 0xb;
            let var_30_1: i64 = 8;
            let var_28_1: i64 = 0;
            let var_20_1: i8 = 0;
            let mut var_1f_1: i32 = var_90;
            var_1f_1 = var_90;
            core::iter::traits::iterator::Iterator::collect::h35b5b8e03616c6b6(&var_d0, &var_40);
            *var_a0[8] = var_c0_1;
            var_a8 = var_d0;
            rax_5 = 0;
            
            if var_a8 != -0x8000000000000000
            {
                chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_d0);
                let mut var_68: i32;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::ha19d87d3e23c7b2a(
                    &var_68, &var_d0);
                rax_5 = var_68;
                
                if rax_5 == 0
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                let var_64: i64;
                var_78 = var_64;
                let result_1: i32;
                result = result_1;
            }
        }
        3 =>
        {
            var_d0 = "%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M…";
            let var_c8_3: i64 = 9;
            var_c0_1 = 8;
            let var_b8_2: i64 = 0;
            let var_b0_2: i8 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            r15_1 = "%b %e %H:%M%m-%d %H:%M`DateTime …";
            goto 'label_590cb1;
        }
        4 =>
        {
            uucore::features::custom_tz_fmt::custom_time_format::h40983abf3ea6ab5d(&var_a8, 
                arg2[1], arg2[2]);
            var_d0 = var_a0;
            let var_c0: i64 = 8;
            let var_b8: i64 = 0;
            let var_b0: i8 = 1;
            chrono::format::strftime::StrftimeItems::parse_to_owned::hc7bb9614939a590c(&var_90, 
                &var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
            'label_590db6:
            core::result::Result$LT$T$C$E$GT$::unwrap::h818d8937d812229f(&var_58, &var_90);
            var_a8 = -0x8000000000000000;
            rax_5 = 0;
        }
    }
    
    let var_48: i64;
    arg1[1] = var_48;
    *arg1 = var_58;
    *arg1.byte_offset(0x18) = var_a8;
    arg1[2] = var_a0;
    *arg1.byte_offset(0x28) = *var_a0[8];
    arg1[3] = rax_5;
    *arg1.byte_offset(0x34) = var_78;
    *arg1.byte_offset(0x3c) = result;
    result
}
