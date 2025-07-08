
  fn uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_28: i128;
    let mut result: i64;
    let mut zmm0: i128;
    
    match *arg2
    {
        0 =>
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_28, 
                "(!-a-o===!=-eq-ge-gt-le-lt-ne-ef…", 1);
            goto 'label_4aeb52;
        }
        1 =>
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_28, 
                "!-a-o===!=-eq-ge-gt-le-lt-ne-ef-…", 1);
            goto 'label_4aeb52;
        }
        2 | 3 =>
        {
            let result_1: i64 = arg2[3];
            var_28 = *arg2.byte_offset(8);
            'label_4aeb52:
            result = result_1;
            arg1[3] = result;
            zmm0 = var_28;
            goto 'label_4aeb79;
        }
        4 =>
        {
            arg2[1];
            goto 'label_4aeb6d;
        }
        5 =>
        {
            'label_4aeb6d:
            result = arg2[4];
            arg1[3] = result;
            zmm0 = *arg2.byte_offset(0x10);
            'label_4aeb79:
            *arg1.byte_offset(8) = zmm0;
            *arg1 = 3;
            result
        }
        6 =>
        {
            uu_test::parser::Symbol::into_literal::panic_cold_explicit::hbbb64c2ec66c1cc5();
            /* no return */
        }
    }
}
