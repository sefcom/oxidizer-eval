
  int128_t* uu_numfmt::handle_args::h88f782532eeab52a(int128_t* arg1, char* arg2)

{
    int128_t var_38 = arg1[3];
    int128_t var_48 = arg1[2];
    int128_t var_58 = arg1[1];
    int128_t var_68 = *arg1;
    int128_t* i;
    
    do
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92623d70016f3062(&var_68);
        
        if (!rax_1)
            return nullptr;
        
        i = uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(rax_1, rdx_1, arg2);
    } while (!i);
    
    return i;
}
