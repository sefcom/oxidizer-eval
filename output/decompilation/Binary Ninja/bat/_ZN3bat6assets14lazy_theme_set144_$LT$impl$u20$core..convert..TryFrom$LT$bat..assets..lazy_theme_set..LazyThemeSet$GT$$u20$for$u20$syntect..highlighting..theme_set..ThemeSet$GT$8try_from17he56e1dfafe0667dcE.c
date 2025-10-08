
  int128_t* bat::assets::lazy_theme_set::_$LT$impl$u20$core..convert..TryFrom$LT$bat..assets..lazy_theme_set..LazyThemeSet$GT$$u20$for$u20$syntect..highlighting..theme_set..ThemeSet$GT$::try_from::he56e1dfafe0667dc(int128_t* arg1)

{
    int64_t var_4f0 = 0;
    int64_t var_4e0 = 0;
    void var_488;
    int64_t* rsi;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0144c99ce290211b(&var_488, rsi);
    
    while (true)
    {
        int64_t var_440;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6661978dccc0c882(&var_440, &var_488);
        
        if (var_440 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$bat..assets..lazy_theme_set..LazyTheme$GT$$GT$::h5f0a7bec92836d9c(&var_488);
            *(arg1 + 0x18) = var_4e0;
            *(arg1 + 8) = var_4f0;
            *arg1 = 0xd;
            return arg1;
        }
        
        int64_t var_420;
        int64_t var_418;
        int64_t var_318;
        bat::assets::lazy_theme_set::LazyTheme::deserialize::h9281d4bc058512b7(&var_318, var_420, 
            var_418);
        int64_t r13_1 = var_318;
        void var_428;
        int128_t var_310;
        int128_t var_300;
        int128_t var_2f0;
        int128_t var_2e0;
        int128_t var_2d0;
        
        if (r13_1 == -0x8000000000000000)
        {
            arg1[4] = var_2d0;
            arg1[3] = var_2e0;
            arg1[2] = var_2f0;
            arg1[1] = var_300;
            *arg1 = var_310;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_440);
            core::ptr::drop_in_place$LT$bat..assets..lazy_theme_set..LazyTheme$GT$::h2ecc791b7be41b9a(&var_428);
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$bat..assets..lazy_theme_set..LazyTheme$GT$$GT$::h5f0a7bec92836d9c(&var_488);
            core::ptr::drop_in_place$LT$syntect..highlighting..theme_set..ThemeSet$GT$::ha59f92f71fbb29bb(&var_4f0);
            return arg1;
        }
        
        void var_2c0;
        void var_1c8;
        memcpy(&var_1c8, &var_2c0, 0xa0);
        int64_t var_220 = r13_1;
        int128_t var_1d8_1 = var_2d0;
        int128_t var_1e8_1 = var_2e0;
        int128_t var_1f8_1 = var_2f0;
        int128_t var_208_1 = var_300;
        int128_t var_218_1 = var_310;
        void var_128;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33bce6973b38538(
            &var_128, &var_4f0, &var_440, &var_220);
        core::ptr::drop_in_place$LT$core..option..Option$LT$syntect..highlighting..theme..Theme$GT$$GT$::h069bba96e31e5fce(&var_128);
        core::ptr::drop_in_place$LT$bat..assets..lazy_theme_set..LazyTheme$GT$::h2ecc791b7be41b9a(
            &var_428);
    }
}
