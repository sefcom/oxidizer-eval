
  fn alacritty_terminal::term::Term$LT$T$GT$::new::h9eaed86de6be637f(arg1: *mut i128, arg2: *mut i128, arg3: i64, arg4: i64, arg5: *mut i128) -> i64

{
    let mut var_5c8: ();
    alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(&var_5c8, arg3, arg4, 
        *arg2.byte_offset(0x18));
    let mut var_518: ();
    alacritty_terminal::grid::Grid$LT$T$GT$::new::h0c2d46e3a6188c56(&var_518, arg3, arg4, 0);
    let mut var_5f8: i64;
    let var_538: i64;
    core::iter::traits::iterator::Iterator::collect::h5d5fd2af4f280153(&var_5f8, var_538);
    let rax: i64 = var_5f8;
    alacritty_terminal::term::TermDamageState::new::h0fc83946f2a9c521(&var_5f8, arg4);
    let rax_2: i64 = var_5f8;
    let mut rax_3: i64 = 7;
    let mut var_464: ();
    
    loop
    {
        let mut var_480: ();
        *(&var_480).byte_offset(rax_3 << 2) = 0;
        let mut var_47c: ();
        *(&var_47c).byte_offset(rax_3 << 2) = 0;
        let mut var_478: ();
        *(&var_478).byte_offset(rax_3 << 2) = 0;
        let mut var_474: ();
        *(&var_474).byte_offset(rax_3 << 2) = 0;
        let mut var_470: ();
        *(&var_470).byte_offset(rax_3 << 2) = 0;
        
        if rax_3 == 0x10f
        {
            break;
        }
        
        let mut var_46c: ();
        *(&var_46c).byte_offset(rax_3 << 2) = 0;
        let mut var_468: ();
        *(&var_468).byte_offset(rax_3 << 2) = 0;
        *(&var_464).byte_offset(rax_3 << 2) = 0;
        rax_3 += 8;
    }
    
    *arg1.byte_offset(0x6e2) = 0;
    arg1[0x29] = 0;
    *arg1.byte_offset(0x298) = 0;
    arg1[0x28] = 2;
    memcpy(arg1.byte_offset(0x28), &var_5c8, 0xb0);
    memcpy(arg1.byte_offset(0xd8), &var_518, 0xb0);
    *arg1.byte_offset(0x6e3) = 0;
    *arg1.byte_offset(0x188) = rax;
    let var_5f0: i64;
    arg1[0x19] = var_5f0;
    let var_5e8: i64;
    *arg1.byte_offset(0x198) = var_5e8;
    *arg1.byte_offset(0x6dc) = 0x28081;
    arg1[0x2a] = 0;
    let var_530: i32;
    *arg1.byte_offset(0x2a4) = var_530;
    memcpy(arg1.byte_offset(0x2a8), &var_464, 0x434);
    arg1[0x6e] = 2;
    let mut zmm1: i128 = arg5[1];
    *arg1 = *arg5;
    arg1[1] = zmm1;
    arg1[2] = arg5[2];
    arg1[0x24] = -0x8000000000000000;
    arg1[0x1a] = 0;
    *arg1.byte_offset(0x1a8) = 8;
    arg1[0x1b] = {0};
    arg1[0x1c] = 1;
    *arg1.byte_offset(0x1c8) = {0};
    *arg1.byte_offset(0x1d8) = 1;
    arg1[0x1e] = 0;
    *arg1.byte_offset(0x1e8) = rax_2;
    arg1[0x1f] = var_5f0;
    *arg1.byte_offset(0x1f8) = var_5e8;
    let var_5d8: i128;
    *arg1.byte_offset(0x208) = var_5d8;
    zmm1 = arg2[1];
    *arg1.byte_offset(0x218) = *arg2;
    *arg1.byte_offset(0x228) = zmm1;
    let result: i64 = arg2[2];
    *arg1.byte_offset(0x238) = result;
    result
}
