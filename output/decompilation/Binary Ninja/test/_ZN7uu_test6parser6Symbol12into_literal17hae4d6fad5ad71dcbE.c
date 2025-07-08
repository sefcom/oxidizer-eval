
  int64_t uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(int64_t* arg1, int64_t* arg2)

{
    int128_t var_28;
    int64_t result;
    int128_t zmm0;
    
    switch (*arg2)
    {
        case 0:
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_28, 
                "(!-a-o===!=-eq-ge-gt-le-lt-ne-ef…", 1);
            goto label_4aeb52;
        }
        case 1:
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_28, 
                "!-a-o===!=-eq-ge-gt-le-lt-ne-ef-…", 1);
            goto label_4aeb52;
        }
        case 2:
        case 3:
        {
            int64_t result_1 = arg2[3];
            var_28 = *(arg2 + 8);
            label_4aeb52:
            result = result_1;
            arg1[3] = result;
            zmm0 = var_28;
            goto label_4aeb79;
        }
        case 4:
        {
            arg2[1];
            goto label_4aeb6d;
        }
        case 5:
        {
            label_4aeb6d:
            result = arg2[4];
            arg1[3] = result;
            zmm0 = *(arg2 + 0x10);
            label_4aeb79:
            *(arg1 + 8) = zmm0;
            *arg1 = 3;
            return result;
            break;
        }
        case 6:
        {
            uu_test::parser::Symbol::into_literal::panic_cold_explicit::hbbb64c2ec66c1cc5();
            /* no return */
        }
    }
}
