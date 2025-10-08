
  fn alacritty::input::keyboard::SequenceBuilder::try_build_control_char_or_mod::h9bae1bc9cdcc4939(arg1: *mut i64, arg2: i8, arg3: i8, arg4: *mut i16, arg5: *mut i8)

{
    if ((arg3 & 1) != 0 || (arg2 & 1) != 0) && *arg4 == 0
    {
        let rax: u64 = arg4[1];
        let rsi: u64 = rax - 0xe;
        let mut rbx_1: i64;
        let mut r14: *const i8;
        
        if rsi > 0x1c
        {
            'label_8581b1:
            
            if (arg3 & 1) == 0 || rax > 0xd
            {
                *arg1 = -0x7fffffffffffffff;
                return;
            }
            
            let rdx: i8 = arg4[0x3d];
            rbx_1 = 5;
            let mut rdx_2: i32;
            let mut rsi_3: i8;
            let mut rdi: *mut i8;
            let mut r15_1: *mut i64;
            
            match rax
            {
                0 =>
                {
                    r14 = "57449573585744257448573605744157…";
                    
                    if rdx == 1
                    {
                        r14 = "57443574495735857442574485736057…";
                    }
                    
                    rdx_2 = !arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 2;
                }
                1 | 4 | 5 | 7 | 9 | 0xa =>
                {
                    *arg1 = -0x7fffffffffffffff;
                    return;
                }
                2 =>
                {
                    r14 = "57358574425744857360574415744757…";
                    goto 'label_858248;
                }
                3 =>
                {
                    r14 = "57448573605744157447574465745257…";
                    
                    if rdx == 1
                    {
                        r14 = "57442574485736057441574475744657…";
                    }
                    
                    rdx_2 = !arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 4;
                }
                6 =>
                {
                    r14 = "57360574415744757446574525744557…";
                    goto 'label_858248;
                }
                8 =>
                {
                    r14 = "57447574465745257445574515744457…";
                    
                    if rdx == 1
                    {
                        r14 = "57441574475744657452574455745157…";
                    }
                    
                    rdx_2 = !arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 1;
                }
                0xb =>
                {
                    r14 = "5745257445574515744457450Ignorin…";
                    
                    if rdx == 1
                    {
                        r14 = "574465745257445574515744457450Ig…";
                    }
                    
                    goto 'label_858248;
                }
                0xc =>
                {
                    r14 = "574515744457450Ignoring : Vi mod…";
                    
                    if rdx == 1
                    {
                        r14 = "57445574515744457450Ignoring : V…";
                    }
                    
                    goto 'label_858248;
                }
                0xd =>
                {
                    r14 = "57450Ignoring : Vi mode inactive…";
                    
                    if rdx == 1
                    {
                        r14 = "5744457450Ignoring : Vi mode ina…";
                    }
                    
                    rdx_2 = !arg4[0x3c] & 1;
                    r15_1 = arg1;
                    rdi = arg5;
                    rsi_3 = 8;
                }
            }
            
            alacritty::input::keyboard::_::InternalBitFlags::set::h73b3a8b59dbf5641(rdi, rsi_3, 
                rdx_2);
            arg1 = r15_1;
            goto 'label_858248;
        }
        
        rbx_1 = 2;
        
        match rsi
        {
            0 =>
            {
                r14 = "13573765737757378573795738057381…";
                'label_858248:
                *arg1 = -0x8000000000000000;
                arg1[1] = r14;
                arg1[2] = rbx_1;
                arg1[3] = 0x110000;
                return;
            }
            1 =>
            {
                rbx_1 = 1;
                r14 = "9NumpadEqualsa combination of Ap…";
                goto 'label_858248;
            }
            2 =>
            {
                r14 = "32333412727574435744957358574425…";
                goto 'label_858248;
            }
            3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 | 0x12 | 0x13 |
                0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b =>
            {
                goto 'label_8581b1;
            }
            0xb =>
            {
                rbx_1 = 3;
                r14 = "12727574435744957358574425744857…";
                goto 'label_858248;
            }
            0x1c =>
            {
                r14 = "27574435744957358574425744857360…";
                goto 'label_858248;
            }
        }
    }
    
    *arg1 = -0x7fffffffffffffff;
}
