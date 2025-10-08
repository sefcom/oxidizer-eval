
  uint64_t uu_base32::base_common::get_supports_fast_decode_and_encode::h8af4b430fe326b3b(char arg1, char arg2, char arg3)

{
    int128_t var_78;
    void var_40;
    char const* const r8;
    
    switch (arg1)
    {
        case 0:
        {
            int128_t var_58;
            int64_t r9_1;
            
            if (!((arg2 ^ 1) | arg3))
            {
                __builtin_memcpy(&var_58, 
                    "\x00\x00\x00\x00\x00\x00\x00\x80\x11\xb4\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
                r8 = "abcdefghijklmnopqrstuvwxyzABCDEF…";
                r9_1 = 0x40;
            }
            else
            {
                r8 = "abcdefghijklmnopqrstuvwxyzABCDEF…";
                
                if (arg3)
                    r8 = "abcdefghijklmnopqrstuvwxyzABCDEF…";
                
                r9_1 = arg3 | 0x40;
                __builtin_memcpy(&var_58, 
                    "\x00\x00\x00\x00\x00\x00\x00\x80\x13\xb6\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            }
            
            uucore::features::encoding::EncodingWrapper::new::haf7d2115963afd39(&var_40, &var_58, 
                4, 3, r8, r9_1);
            return alloc::boxed::Box$LT$T$GT$::new::h454168b546346a38(&var_40);
            break;
        }
        case 1:
        {
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\x56\xb8\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            uucore::features::encoding::EncodingWrapper::new::haf7d2115963afd39(&var_40, &var_78, 
                4, 3, "abcdefghijklmnopqrstuvwxyzABCDEF…", 0x41);
            return alloc::boxed::Box$LT$T$GT$::new::h454168b546346a38(&var_40);
            break;
        }
        case 2:
        {
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\x79\xba\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567…";
            label_469cbd:
            uucore::features::encoding::EncodingWrapper::new::haf7d2115963afd39(&var_40, &var_78, 
                8, 5, r8, 0x21);
            return alloc::boxed::Box$LT$T$GT$::new::h454168b546346a38(&var_40);
            break;
        }
        case 3:
        {
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\x9c\xbc\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            r8 = "0123456789ABCDEFGHIJKLMNOPQRSTUV…";
            goto label_469cbd;
        }
        case 4:
        {
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xb4\xbe\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            uucore::features::encoding::EncodingWrapper::new::haf7d2115963afd39(&var_40, &var_78, 
                2, 1, "0123456789ABCDEFabcdef0123456789…", 0x16);
            return alloc::boxed::Box$LT$T$GT$::new::h454168b546346a38(&var_40);
            break;
        }
        case 5:
        {
            goto label_469d4d;
        }
        case 6:
        {
            int64_t var_68_1 = 0x202;
            label_469d4d:
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x00\x00\x00\x80\xb8\xc0\x41\x00\x00\x00\x00\x00\x02\x02\x00\x00\x00\x00\x00\x00", 0x18);
            uucore::features::encoding::EncodingWrapper::new::haf7d2115963afd39(&var_40, &var_78, 
                8, 1, "01010101010101010101010101010101…", 2);
            return alloc::boxed::Box$LT$T$GT$::new::h454168b546346a38(&var_40);
            break;
        }
        case 7:
        {
            return alloc::boxed::Box$LT$T$GT$::new::h5e7aab4207ba1d69();
            break;
        }
    }
}
