
  int64_t tabby_index_cli::commands::head::to_json_value::he64216c08a45f54d(int128_t* arg1, int64_t* arg2)

{
    void var_40;
    tantivy::schema::document::Document::to_json::h24614ee2f8d92709(&var_40);
    int64_t var_38;
    int64_t var_a8 = var_38;
    int64_t var_30;
    int64_t var_a0 = var_30;
    int128_t var_98 = {0};
    int64_t var_88 = var_38;
    int64_t var_80 = var_30;
    int128_t var_60;
    serde_json::de::from_trait::hcca85a944f2a6837(&var_60, &var_a8);
    char var_c8;
    core::result::Result$LT$T$C$E$GT$::expect::hca5b9d0fd37e6fa6(&var_c8, &var_60);
    
    if (var_c8 != 5)
    {
        core::option::expect_failed::h3f620cfb8545dc61("Expected objectFailed to parse J…");
        /* no return */
    }
    
    int64_t var_c0;
    int64_t rsi_2 = var_c0;
    int64_t rdx;
    rdx = var_c0;
    int64_t var_b0;
    
    if (var_c0)
        rsi_2 = var_b0;
    var_a8 = rdx;
    int64_t var_a0_1 = 0;
    var_98 = var_c0;
    int64_t var_b8;
    *var_98[8] = var_b8;
    int64_t var_88_1 = rdx;
    int64_t var_80_1 = 0;
    int64_t var_78 = var_c0;
    int64_t var_70 = var_b8;
    int64_t var_68 = rsi_2;
    
    while (true)
    {
        int64_t rax_2;
        char* rdx_1;
        rax_2 = _$LT$alloc..collections..btree..map..IterMut$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f09a9268944cef8(&var_a8);
        
        if (!rax_2)
            break;
        
        int128_t* r13_1 = rdx_1;
        
        if (*rdx_1 == 4 && *(r13_1 + 0x18) == 1)
        {
            _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h5845ced419e537b1(&var_60, r13_1[1]);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(r13_1);
            int128_t zmm0_2 = var_60;
            int128_t var_50;
            r13_1[1] = var_50;
            *r13_1 = zmm0_2;
        }
    }
    
    int128_t zmm0_1 = var_c8;
    arg1[1] = var_b8;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7534eb9f84494b15(&var_40);
    return core::ptr::drop_in_place$LT$tantivy..schema..document..default_document..CompactDoc$GT$::h53cefbf12d11e499(arg2);
}
