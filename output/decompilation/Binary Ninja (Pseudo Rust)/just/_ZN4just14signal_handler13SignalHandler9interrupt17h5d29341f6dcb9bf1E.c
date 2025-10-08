
  fn just::signal_handler::SignalHandler::interrupt::h5d29341f6dcb9bf1(arg1: *mut i64, arg2: i32) -> *mut i32

{
    let mut i: *mut i32 = arg1[2];
    
    if i == 0
    {
        std::process::exit::hcda678ff272dfed1(just::signal::Signal::code::ha56ff543d8ac6eb8(arg2));
        /* no return */
    }
    
    if arg1[3] == 0
    {
        arg1[3] = arg2;
        
        if arg2 > 3
        {
            'label_68a8ad:
            let i_2: *mut i32 = *arg1;
            let rdx_1: i64 = arg1[1];
            let mut rsi: i64;
            rsi = i_2 != 0;
            
            if i_2 == 0
            {
                i = i_2;
            }
            
            let mut var_a8: i64 = rsi;
            let var_a0_1: i64 = 0;
            let i_3: *mut i32 = i_2;
            let var_90_1: i64 = rdx_1;
            let var_88_1: i64 = rsi;
            let var_80_1: i64 = 0;
            let i_4: *mut i32 = i_2;
            let var_70_1: i64 = rdx_1;
            let i_1: *mut i32 = i;
            i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
            
            if i != 0
            {
                if *arg1.byte_offset(0x1c) <= 1
                {
                    do
                    {
                        nix::sys::signal::kill::hbdca6dbb133b60f3(*i);
                        i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
                    } while i != 0;
                }
                else
                {
                    do
                    {
                        let mut var_bc: i32 = *i;
                        let mut var_b8: *mut i32 = &var_bc;
                        let var_b0_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
                        let mut var_60: *mut *mut [i8; 0xcb] = &data_830f20;
                        let var_58_1: i64 = 2;
                        let var_40_1: i64 = 0;
                        let var_50_1: *mut *mut i32 = &var_b8;
                        let var_48_1: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
                        nix::sys::signal::kill::hbdca6dbb133b60f3(var_bc);
                        i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
                    } while i != 0;
                }
            }
        }
    }
    else if arg2 > 3
    {
        goto 'label_68a8ad;
    }
    
    i
}
