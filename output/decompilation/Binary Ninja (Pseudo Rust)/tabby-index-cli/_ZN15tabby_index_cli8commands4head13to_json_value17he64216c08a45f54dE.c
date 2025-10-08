
  fn tabby_index_cli::commands::head::to_json_value::he64216c08a45f54d(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_40: ();
    tantivy::schema::document::Document::to_json::h24614ee2f8d92709(&var_40);
    let var_38: i64;
    let mut var_a8: i64 = var_38;
    let var_30: i64;
    let var_a0: i64 = var_30;
    let mut var_98: i128 = {0};
    let var_88: i64 = var_38;
    let var_80: i64 = var_30;
    let mut var_60: i128;
    serde_json::de::from_trait::hcca85a944f2a6837(&var_60, &var_a8);
    let mut var_c8: i8;
    core::result::Result$LT$T$C$E$GT$::expect::hca5b9d0fd37e6fa6(&var_c8, &var_60);
    
    if var_c8 != 5
    {
        core::option::expect_failed::h3f620cfb8545dc61("Expected objectFailed to parse J…");
        /* no return */
    }
    
    let var_c0: i64;
    let mut rsi_2: i64 = var_c0;
    let mut rdx: i64;
    rdx = var_c0 != 0;
    let var_b0: i64;
    
    if var_c0 != 0
    {
        rsi_2 = var_b0;
    }
    var_a8 = rdx;
    let var_a0_1: i64 = 0;
    var_98 = var_c0;
    let var_b8: i64;
    *var_98[8] = var_b8;
    let var_88_1: i64 = rdx;
    let var_80_1: i64 = 0;
    let var_78: i64 = var_c0;
    let var_70: i64 = var_b8;
    let var_68: i64 = rsi_2;
    
    loop
    {
        let mut rax_2: i64;
        let mut rdx_1: *mut i8;
        rax_2 = _$LT$alloc..collections..btree..map..IterMut$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f09a9268944cef8(&var_a8);
        
        if rax_2 == 0
        {
            break;
        }
        
        let r13_1: *mut i128 = rdx_1;
        
        if *rdx_1 == 4 && *r13_1.byte_offset(0x18) == 1
        {
            _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h5845ced419e537b1(&var_60, r13_1[1]);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hacddd69444a21384(r13_1);
            let zmm0_2: i128 = var_60;
            let var_50: i128;
            r13_1[1] = var_50;
            *r13_1 = zmm0_2;
        }
    }
    
    let zmm0_1: i128 = var_c8;
    arg1[1] = var_b8;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h7534eb9f84494b15(&var_40);
    core::ptr::drop_in_place$LT$tantivy..schema..document..default_document..CompactDoc$GT$::h53cefbf12d11e499(arg2)
}
