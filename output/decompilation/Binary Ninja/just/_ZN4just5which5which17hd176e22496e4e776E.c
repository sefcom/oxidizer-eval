
  int64_t* just::which::which::hd176e22496e4e776(int64_t* arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t var_58 = arg3;
    uint64_t var_50 = arg4;
    int128_t var_c8;
    std::path::Path::components::hd0346d362206f2e9(&var_c8, arg3, arg4);
    int64_t rax = core::iter::traits::iterator::Iterator::fold::hf6748623e0db1ee2(&var_c8);
    int64_t* result;
    
    if (!rax)
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], "empty command`PATH` environment …", 0xd);
        *arg1 = 1;
    }
    else
    {
        int64_t var_128;
        uint64_t var_118;
        int64_t* result_1;
        int64_t var_70;
        
        if (rax != 1)
        {
            int128_t* rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
            
            if (!rax_2)
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_c8, arg3, arg4);
            result_1 = arg1;
            uint64_t var_b8;
            var_118 = var_b8;
            int128_t zmm0_1 = var_c8;
            var_128 = zmm0_1;
            rax_2[1] = var_b8;
            *rax_2 = zmm0_1;
            var_70 = 1;
            int128_t* var_68_1 = rax_2;
            int64_t var_60_1 = 1;
            goto label_694fd9;
        }
        
        std::env::var_os::h1049275d85070725(&var_128, "PATH ... => M");
        int64_t rax_1 = var_128;
        
        if (-(rax_1) != -0x8000000000000000)
        {
            int64_t var_e8 = rax_1;
            int64_t var_120;
            int64_t var_e0 = var_120;
            uint64_t var_d8 = var_118;
            *var_c8[8] = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140;
            int64_t var_b8_1 = var_120;
            uint64_t var_b0_1 = var_118;
            int64_t (* var_a8_1)(char* arg1) =
                std::sys::pal::unix::os::split_paths::is_separator::hb66c58b70205f58d;
            char var_a0_1 = 0;
            var_c8 = &var_58;
            core::iter::traits::iterator::Iterator::collect::h16f39b1f3da645b9(&var_70, &var_c8);
            result_1 = arg1;
            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hb5088e4c98ca9abd(&var_e8);
            label_694fd9:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7020ec4582f4a09d(&var_c8, &var_70);
            int64_t i;
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_c8);
            
            if (!(0 + -(i)))
            {
                do
                {
                    int128_t var_108 = i;
                    uint64_t var_78;
                    uint64_t var_f8_1 = var_78;
                    
                    if (!std::path::Path::is_absolute::hf2dacc49683e82ac(*var_108[8], var_78))
                    {
                        just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_e8, *(arg2 + 0x10), *(arg2 + 0x18));
                        var_118 = var_f8_1;
                        var_128 = var_108;
                        int128_t var_48;
                        std::path::Path::join::h8b41166b2967df99(&var_48, var_e0, var_d8, &var_128);
                        var_108 = var_48;
                        uint64_t var_38;
                        var_f8_1 = var_38;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &var_e8);
                    }
                    
                    _$LT$$RF$std..path..Path$u20$as$u20$lexiclean..Lexiclean$GT$::lexiclean::h6a5ff6ae87480de6(&var_128, *var_108[8], var_f8_1);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_108);
                    var_108 = var_128;
                    
                    if (is_executable::is_executable::h940e17ec90db4909(&var_108))
                    {
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_128, *var_108[8], 
                            var_118);
                        
                        if (var_128 & 1)
                        {
                            label_695165:
                            just::which::which::_$u7b$$u7b$closure$u7d$$u7d$::h1924a8d8338b238e(
                                &var_128, *var_108[8], var_118);
                            result_1[3] = var_118;
                            *(result_1 + 8) = var_128;
                            *result_1 = 1;
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_128, var_120, var_118);
                            int64_t rax_9 = var_128;
                            var_e8 = var_120;
                            
                            if (rax_9 == -0x7fffffffffffffff)
                                goto label_695165;
                            
                            *(result_1 + 0x10) = var_e8;
                            result_1[1] = rax_9;
                            *result_1 = 0;
                        }
                        
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(
                            &var_108);
                        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h1d9bcd419f39b040(&var_c8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_108);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h89f3f68b0a4d6be6(&i, &var_c8);
                } while (i != -0x8000000000000000);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h1d9bcd419f39b040(&var_c8);
            result = result_1;
            result[1] = -0x8000000000000000;
            *result = 0;
        }
        else
        {
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], "`PATH` environment variable not …", 0x23);
            *arg1 = 1;
        }
    }
    
    return result;
}
