
  int64_t uu_ls::TimeStyler::new::hf5080b982bd19d16(int128_t* arg1, int64_t* arg2)

{
    int64_t rax_1 = *arg2 ^ 0x8000000000000000;
    int64_t rcx = 4;
    
    if (rax_1 < 4)
        rcx = rax_1;
    
    char const* const var_d0;
    int64_t var_c0_1;
    int64_t var_a8;
    int128_t var_a0;
    int32_t var_90;
    int64_t var_78;
    int32_t result;
    int128_t var_58;
    int32_t rax_5;
    char const* const r15_1;
    
    switch (rcx)
    {
        case 0:
        {
            var_d0 = "%Y-%m-%d %H:%M:%S.%f %z%b %e %H:…";
            int64_t var_c8_1 = 0x17;
            label_590d82:
            int64_t var_c0_2 = 8;
            int64_t var_b8_3 = 0;
            char var_b0_3 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            goto label_590db6;
        }
        case 1:
        {
            var_d0 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.…";
            int64_t var_c8_4 = 0xe;
            goto label_590d82;
        }
        case 2:
        {
            var_d0 = "%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d …";
            int64_t var_c8_2 = 9;
            var_c0_1 = 8;
            int64_t var_b8_1 = 0;
            char var_b0_1 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            r15_1 = "%m-%d %H:%M`DateTime - TimeDelta…";
            label_590cb1:
            core::result::Result$LT$T$C$E$GT$::unwrap::h818d8937d812229f(&var_58, &var_90);
            char const* const var_40 = r15_1;
            int64_t var_38_1 = 0xb;
            int64_t var_30_1 = 8;
            int64_t var_28_1 = 0;
            char var_20_1 = 0;
            int32_t var_1f_1 = var_90;
            var_1f_1 = var_90;
            core::iter::traits::iterator::Iterator::collect::h35b5b8e03616c6b6(&var_d0, &var_40);
            *var_a0[8] = var_c0_1;
            var_a8 = var_d0;
            rax_5 = 0;
            
            if (var_a8 != -0x8000000000000000)
            {
                chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_d0);
                int32_t var_68;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::ha19d87d3e23c7b2a(
                    &var_68, &var_d0);
                rax_5 = var_68;
                
                if (!rax_5)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                int64_t var_64;
                var_78 = var_64;
                int32_t result_1;
                result = result_1;
            }
            break;
        }
        case 3:
        {
            var_d0 = "%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M…";
            int64_t var_c8_3 = 9;
            var_c0_1 = 8;
            int64_t var_b8_2 = 0;
            char var_b0_2 = 0;
            chrono::format::strftime::StrftimeItems::parse::h432dd8f43e9f4d8c(&var_90, &var_d0);
            r15_1 = "%b %e %H:%M%m-%d %H:%M`DateTime …";
            goto label_590cb1;
        }
        case 4:
        {
            uucore::features::custom_tz_fmt::custom_time_format::h40983abf3ea6ab5d(&var_a8, 
                arg2[1], arg2[2]);
            var_d0 = var_a0;
            int64_t var_c0 = 8;
            int64_t var_b8 = 0;
            char var_b0 = 1;
            chrono::format::strftime::StrftimeItems::parse_to_owned::hc7bb9614939a590c(&var_90, 
                &var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_a8);
            label_590db6:
            core::result::Result$LT$T$C$E$GT$::unwrap::h818d8937d812229f(&var_58, &var_90);
            var_a8 = -0x8000000000000000;
            rax_5 = 0;
            break;
        }
    }
    
    int64_t var_48;
    arg1[1] = var_48;
    *arg1 = var_58;
    *(arg1 + 0x18) = var_a8;
    arg1[2] = var_a0;
    *(arg1 + 0x28) = *var_a0[8];
    arg1[3] = rax_5;
    *(arg1 + 0x34) = var_78;
    *(arg1 + 0x3c) = result;
    return result;
}
