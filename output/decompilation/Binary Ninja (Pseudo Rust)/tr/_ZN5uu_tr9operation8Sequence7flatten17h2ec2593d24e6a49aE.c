
  fn uu_tr::operation::Sequence::flatten::h2ec2593d24e6a49a(arg1: *mut i8) -> *mut i16

{
    let mut var_3c: ();
    let mut var_25: ();
    let mut result: *mut i16;
    
    match *arg1
    {
        0 =>
        {
            result = alloc::boxed::Box$LT$T$GT$::new::h76434fcd68b2f2fd(arg1[1]);
        }
        1 =>
        {
            result = alloc::boxed::Box$LT$T$GT$::new::h2dfba5b2ccbb01d3(*arg1.byte_offset(1) << 8);
        }
        2 =>
        {
            result = alloc::boxed::Box$LT$T$GT$::new::h52b1512613d6ae6d(arg1[1]);
        }
        3 =>
        {
            result =
                alloc::boxed::Box$LT$T$GT$::new::hd0269b7932b534d2(*arg1.byte_offset(8), arg1[1]);
        }
        4 =>
        {
            match arg1[1]
            {
                0 =>
                {
                    core::iter::traits::iterator::Iterator::chain::hb0c779e0f92e4edd(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    result = alloc::boxed::Box$LT$T$GT$::new::h08ad20d4e84e3371(&var_3c);
                }
                1 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h3b761e5ace3e1c57(
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x5a4100, 
                        0x7a6100));
                }
                2 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h8af46b7dabd15bb7(
                        "\t /rustc/8bfcae730a5db2438bbda7…", "/rustc/8bfcae730a5db2438bbda7279…");
                }
                3 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::hf985f2c6f34fef28(0x7f011f0000);
                }
                4 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h2dfba5b2ccbb01d3(0x393000);
                }
                5 =>
                {
                    core::iter::traits::iterator::Iterator::chain::hb0c779e0f92e4edd(&var_25, 
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    core::iter::traits::iterator::Iterator::chain::h0c74651b015aa0f3(&var_3c, 
                        &var_25, 0x2f2100);
                    core::iter::traits::iterator::Iterator::chain::h6f8d53b4d1a69e59(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::he7b46907d6cb0036(&var_3c, 
                        &var_25);
                    core::iter::traits::iterator::Iterator::chain::h2556d556990de556(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::h12b601b9866a0c88(&var_3c, 
                        &var_25);
                    result = alloc::boxed::Box$LT$T$GT$::new::h22ead8ff2cca68cf(&var_3c);
                }
                6 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h2dfba5b2ccbb01d3(0x7a6100);
                }
                7 =>
                {
                    core::iter::traits::iterator::Iterator::chain::hb0c779e0f92e4edd(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x393000, 
                            0x5a4100), 
                        0x7a6100);
                    core::iter::traits::iterator::Iterator::chain::h0c74651b015aa0f3(&var_25, 
                        &var_3c, 0x2f2100);
                    core::iter::traits::iterator::Iterator::chain::h6f8d53b4d1a69e59(&var_3c, 
                        &var_25);
                    core::iter::traits::iterator::Iterator::chain::he7b46907d6cb0036(&var_25, 
                        &var_3c);
                    core::iter::traits::iterator::Iterator::chain::h2556d556990de556(&var_3c, 
                        &var_25);
                    result = alloc::boxed::Box$LT$T$GT$::new::h19c88d3a046e0e02(&var_3c);
                }
                8 =>
                {
                    core::iter::traits::iterator::Iterator::chain::hb0c779e0f92e4edd(&var_25, 
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x2f2100, 
                            &__elf_rela_table[0x1bf].r_info), 
                        0x605b00);
                    core::iter::traits::iterator::Iterator::chain::h0c74651b015aa0f3(&var_3c, 
                        &var_25, 0x7e7b00);
                    result = alloc::boxed::Box$LT$T$GT$::new::h6badeeb94dd146b6(&var_3c);
                }
                9 =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h8af46b7dabd15bb7(
                        &anon.7f1aa69094a0bcb0f5c7ad9fb133502c.3.llvm.6519565530741107608, 
                        "\t /rustc/8bfcae730a5db2438bbda7…");
                }
                0xa =>
                {
                    result = alloc::boxed::Box$LT$T$GT$::new::h2dfba5b2ccbb01d3(0x5a4100);
                }
                0xb =>
                {
                    core::iter::traits::iterator::Iterator::chain::hb0c779e0f92e4edd(&var_3c, 
                        core::iter::traits::iterator::Iterator::chain::h3f76fc1a862d25e1(0x393000, 
                            0x464100), 
                        0x666100);
                    result = alloc::boxed::Box$LT$T$GT$::new::h08ad20d4e84e3371(&var_3c);
                }
            }
        }
    }
    
    result
}
