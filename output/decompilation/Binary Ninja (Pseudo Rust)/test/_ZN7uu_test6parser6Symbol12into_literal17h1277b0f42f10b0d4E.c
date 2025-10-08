
  fn uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_48: i128;
    let mut rsi: *mut c_void;
    let mut rsi_1: *const i8;
    
    match *arg2
    {
        0 =>
        {
            rsi_1 = "(!-a-o===!=<>-eq-ge-gt-le-lt-ne-…";
            'label_457340:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8a1d310fc48c8e88(&var_48, rsi_1, 1);
            rsi = &var_48;
            goto 'label_45734b;
        }
        1 =>
        {
            rsi_1 = "!-a-o===!=<>-eq-ge-gt-le-lt-ne-e…";
            goto 'label_457340;
        }
        2 | 3 =>
        {
            let rax_3: i64 = arg2[3];
            var_48 = *arg2.byte_offset(8);
            let var_38_1: i64 = rax_3;
            rsi = &var_48;
            'label_45734b:
            let result: i64 = *rsi.byte_offset(0x10);
            arg1[3] = result;
            *arg1.byte_offset(8) = *rsi;
            *arg1 = 3;
            result
        }
        4 =>
        {
            arg2[1];
            goto 'label_45731c;
        }
        5 =>
        {
            'label_45731c:
            rsi = &arg2[2];
            goto 'label_45734b;
        }
        6 =>
        {
            uu_test::parser::Symbol::into_literal::panic_cold_explicit::h77581f9cfef1d71d();
            /* no return */
        }
    }
}
