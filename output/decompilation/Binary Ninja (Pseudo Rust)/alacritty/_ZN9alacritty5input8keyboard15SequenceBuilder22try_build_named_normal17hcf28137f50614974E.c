
  fn alacritty::input::keyboard::SequenceBuilder::try_build_named_normal::hcf28137f50614974(arg1: *mut i64, arg2: i8, arg3: i8, arg4: i16, arg5: i16, arg6: i8)

{
    if arg4 == 0
    {
        let mut rax: u64;
        rax = arg2 != 0;
        arg3 = arg3 | arg6 | rax;
        let mut rsi: *const i8 = 1;
        
        if (arg3 & 1) != 0
        {
            rsi = "123456789NumpadEqualsa combinati…";
        }
        
        let rcx_1: u64 = arg5 - 0x11;
        
        if rcx_1 <= 0x111
        {
            rax = arg3 & 1;
            let mut rcx_4: i32;
            
            match rcx_1
            {
                0 =>
                {
                    rcx_4 = 0x42;
                    'label_858148:
                    *arg1 = -0x8000000000000000;
                    arg1[1] = rsi;
                    arg1[2] = rax;
                    arg1[3] = rcx_4;
                    return;
                }
                1 =>
                {
                    rcx_4 = 0x44;
                    goto 'label_858148;
                }
                2 =>
                {
                    rcx_4 = 0x43;
                    goto 'label_858148;
                }
                3 =>
                {
                    rcx_4 = 0x41;
                    goto 'label_858148;
                }
                4 =>
                {
                    rcx_4 = 0x46;
                    goto 'label_858148;
                }
                5 =>
                {
                    rcx_4 = 0x48;
                    goto 'label_858148;
                }
                6 =>
                {
                    rcx_4 = 0x7e;
                    rax = 1;
                    rsi = "6789NumpadEqualsa combination of…";
                    goto 'label_858148;
                }
                7 =>
                {
                    rcx_4 = 0x7e;
                    rax = 1;
                    rsi = "56789NumpadEqualsa combination o…";
                    goto 'label_858148;
                }
                0xd =>
                {
                    rcx_4 = 0x7e;
                    rax = 1;
                    rsi = "3456789NumpadEqualsa combination…";
                    goto 'label_858148;
                }
                0x10 =>
                {
                    rcx_4 = 0x7e;
                    rax = 1;
                    rsi = "23456789NumpadEqualsa combinatio…";
                    goto 'label_858148;
                }
                0xfe =>
                {
                    rcx_4 = 0x50;
                    goto 'label_858148;
                }
                0xff =>
                {
                    rcx_4 = 0x51;
                    goto 'label_858148;
                }
                0x100 =>
                {
                    rcx_4 = 0x52;
                    goto 'label_858148;
                }
                0x101 =>
                {
                    rcx_4 = 0x53;
                    goto 'label_858148;
                }
                0x102 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "15171819202123242526282931323334…";
                    goto 'label_858148;
                }
                0x103 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "17181920212324252628293132333412…";
                    goto 'label_858148;
                }
                0x104 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "18192021232425262829313233341272…";
                    goto 'label_858148;
                }
                0x105 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "19202123242526282931323334127275…";
                    goto 'label_858148;
                }
                0x106 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "20212324252628293132333412727574…";
                    goto 'label_858148;
                }
                0x107 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "21232425262829313233341272757443…";
                    goto 'label_858148;
                }
                0x108 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "23242526282931323334127275744357…";
                    goto 'label_858148;
                }
                0x109 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "24252628293132333412727574435744…";
                    goto 'label_858148;
                }
                0x10a =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "25262829313233341272757443574495…";
                    goto 'label_858148;
                }
                0x10b =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "26282931323334127275744357449573…";
                    goto 'label_858148;
                }
                0x10c =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "28293132333412727574435744957358…";
                    goto 'label_858148;
                }
                0x10d =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "29313233341272757443574495735857…";
                    goto 'label_858148;
                }
                0x10e =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "31323334127275744357449573585744…";
                    goto 'label_858148;
                }
                0x10f =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "32333412727574435744957358574425…";
                    goto 'label_858148;
                }
                0x110 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "33341272757443574495735857442574…";
                    goto 'label_858148;
                }
                0x111 =>
                {
                    rcx_4 = 0x7e;
                    rax = 2;
                    rsi = "34127275744357449573585744257448…";
                    goto 'label_858148;
                }
            }
        }
    }
    
    *arg1 = -0x7fffffffffffffff;
}
