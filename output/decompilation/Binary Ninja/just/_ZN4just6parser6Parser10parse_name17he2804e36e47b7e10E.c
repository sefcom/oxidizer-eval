
  int64_t just::parser::Parser::parse_name::he2804e36e47b7e10(int128_t* arg1, void* arg2)

{
    int128_t var_58;
    int64_t rax = just::parser::Parser::expect::h35e1151927597ac7(&var_58, arg2, 0x18);
    char var_10;
    
    if (var_10 == 0x25)
    {
        int64_t rax_1 = just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(arg1, &var_58);
        *(arg1 + 0x48) = 0x25;
        return rax_1;
    }
    
    int128_t var_18;
    arg1[4] = var_18;
    int128_t zmm0 = var_58;
    int128_t var_28;
    arg1[3] = var_28;
    int128_t var_38;
    arg1[2] = var_38;
    int128_t var_48;
    arg1[1] = var_48;
    *arg1 = zmm0;
    return rax;
}
