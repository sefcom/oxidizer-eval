
  fn ruff_python_formatter::other::parameters::has_trailing_comma::h3335469b76c6a0ab(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: *mut i8, arg5: i64) -> bool

{
    if arg2 == 0x5e
    {
        return false;
    }
    
    let mut var_58: i64 = arg2;
    let var_50_1: i64 = arg3;
    let mut var_b8: i128;
    let mut var_48: i128;
    let mut var_a8: i128;
    let mut var_98: i128;
    
    if *arg1.byte_offset(0x10) == 0 || *arg1.byte_offset(0x28) != 0 || *arg1.byte_offset(0x50) != 0
        || *arg1.byte_offset(0x40) != 0
    {
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_b8, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58), 
            arg4, arg5);
        let var_28_1: i128 = var_98;
        let var_38_1: i128 = var_a8;
        var_48 = var_b8;
    }
    else
    {
        let r15_1: i64 = *arg1.byte_offset(0x58);
        ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at::h166ec428bdd164b3(&var_b8, 
            _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_58), 
            arg4, arg5);
        let var_28_2: i128 = var_98;
        let var_38_2: i128 = var_a8;
        var_48 = var_b8;
        
        if r15_1 == 0
        {
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
            let mut var_88: *mut i64;
            let mut var_78: i64;
            
            if *var_b8[8] == 0x5a
            {
                let var_70_1: i8 = 0x5a;
                'label_7151d7:
                var_88 = &var_78;
                let var_80: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h0243a89b269b2430;
                var_b8 = &data_97e550;
                *var_b8[8] = 2;
                var_98 = 0;
                var_a8 = &var_88;
                *var_a8[8] = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_b8);
                /* no return */
            }
            
            var_78 = var_b8;
            let rax_3: i32 = *var_b8[8];
            let mut var_70: i8;
            var_70 = rax_3;
            
            if rax_3 != 0xb
            {
                goto 'label_7151d7;
            }
            
            core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
            let mut var_68: i64;
            
            if *var_b8[8] == 0x5a
            {
                let var_60_1: i8 = 0x5a;
                'label_715232:
                var_88 = &var_68;
                let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h0243a89b269b2430;
                var_b8 = &data_97e570;
                *var_b8[8] = 2;
                var_98 = 0;
                var_a8 = &var_88;
                *var_a8[8] = 1;
                core::panicking::panic_fmt::h96f341d36638c225(&var_b8);
                /* no return */
            }
            
            var_68 = var_b8;
            let rax_5: i32 = *var_b8[8];
            let mut var_60: i8;
            var_60 = rax_5;
            
            if rax_5 != 0xe
            {
                goto 'label_715232;
            }
        }
    }
    core::iter::traits::iterator::Iterator::try_fold::hef860e9780b175fa(&var_b8, &var_48);
    let rax_1: bool = *var_b8[8];
    
    if rax_1 != 0x5a
    {
        return rax_1 == 0xb;
    }
    
    core::option::expect_failed::h3f620cfb8545dc61("There must be a token after the …");
    /* no return */
}
