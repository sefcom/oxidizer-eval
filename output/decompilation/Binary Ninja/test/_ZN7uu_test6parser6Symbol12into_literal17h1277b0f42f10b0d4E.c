
  int64_t uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(int64_t* arg1, int64_t* arg2)

{
    int128_t var_48;
    void* rsi;
    char const* const rsi_1;
    
    switch (jump_table_417e74[*arg2])
    {
        case 0x3f486:
        {
            int64_t rax_3 = arg2[3];
            var_48 = *(arg2 + 8);
            int64_t var_38_1 = rax_3;
            rsi = &var_48;
            label_45734b:
            int64_t result = *(rsi + 0x10);
            arg1[3] = result;
            *(arg1 + 8) = *rsi;
            *arg1 = 3;
            return result;
            break;
        }
        case 0x3f49c:
        {
            arg2[1];
            goto label_45731c;
        }
        case 0x3f4a8:
        {
            label_45731c:
            rsi = &arg2[2];
            goto label_45734b;
        }
        case 0x3f4ae:
        {
            rsi_1 = "(!-a-o===!=<>-eq-ge-gt-le-lt-ne-…";
            label_457340:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8a1d310fc48c8e88(&var_48, rsi_1, 1);
            rsi = &var_48;
            goto label_45734b;
        }
        case 0x3f4b7:
        {
            rsi_1 = "!-a-o===!=<>-eq-ge-gt-le-lt-ne-e…";
            goto label_457340;
        }
        case 0x3f4f5:
        {
            uu_test::parser::Symbol::into_literal::panic_cold_explicit::h77581f9cfef1d71d();
            /* no return */
        }
    }
}
