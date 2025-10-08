
  uint64_t forc_crypto::run::h9233c73a0bfd917d()

{
    int64_t var_110;
    clap_builder::derive::Parser::parse::h2bf0ae551bb5718e(&var_110);
    int64_t rcx = 6;
    
    if (var_110 - 2 < 6)
        rcx = var_110 - 2;
    
    char var_148;
    int64_t result;
    char var_108;
    int128_t var_f8;
    char rax_2;
    
    switch (rcx)
    {
        case 0:
        {
            forc_crypto::keccak256::hash::h665ad0faa9bbb11e(&var_148, &var_108);
            rax_2 = var_148;
            
            if (rax_2 != 6)
            {
                label_7ce02c:
                var_148 = rax_2;
                int32_t var_147;
                int32_t var_147_1 = var_147;
                var_147_1 = var_147;
                int64_t result_1 = result;
                int128_t var_138;
                int128_t var_138_1 = var_138;
                return forc_crypto::display_output::h66f719bf0e2367ec(&var_148);
            }
            break;
        }
        case 1:
        {
            forc_crypto::sha256::hash::h072b0afa8176419b(&var_148, &var_108);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
        case 2:
        {
            forc_crypto::address::dump_address::h61c0e54a2abc32fc(&var_148, &var_108);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
        case 3:
        {
            forc_crypto::keys::get_public_key::handler::h2392f84c0c5629b2(&var_148, &var_108);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
        case 4:
        {
            forc_crypto::keys::new_key::handler::h9c4194e818a0987d(&var_148, var_108);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
        case 5:
        {
            int128_t var_88_1 = var_f8;
            int128_t var_98 = var_108;
            forc_crypto::keys::parse_secret::handler::hc911bd93ff9f1e31(&var_148, &var_98);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
        case 6:
        {
            int64_t var_a0;
            int64_t var_8_1 = var_a0;
            int128_t var_b0;
            int128_t var_18_1 = var_b0;
            int128_t var_c0;
            int128_t var_28_1 = var_c0;
            int128_t var_d0;
            int128_t var_38_1 = var_d0;
            int128_t var_e0;
            int128_t var_48_1 = var_e0;
            int128_t var_58_1 = var_f8;
            int128_t var_100;
            int128_t var_68_1 = var_100;
            int128_t var_78 = var_110;
            forc_crypto::keys::vanity::handler::h7d15fe22a5661bf3(&var_148, &var_78);
            rax_2 = var_148;
            
            if (rax_2 != 6)
                goto label_7ce02c;
            break;
        }
    }
    
    return result;
}
