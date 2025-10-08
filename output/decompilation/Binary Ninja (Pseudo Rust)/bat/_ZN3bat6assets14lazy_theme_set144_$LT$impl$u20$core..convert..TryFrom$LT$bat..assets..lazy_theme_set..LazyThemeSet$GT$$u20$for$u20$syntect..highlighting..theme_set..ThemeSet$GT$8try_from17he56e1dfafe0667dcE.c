
  fn bat::assets::lazy_theme_set::_$LT$impl$u20$core..convert..TryFrom$LT$bat..assets..lazy_theme_set..LazyThemeSet$GT$$u20$for$u20$syntect..highlighting..theme_set..ThemeSet$GT$::try_from::he56e1dfafe0667dc(arg1: *mut i128) -> *mut i128

{
    let mut var_4f0: i64 = 0;
    let var_4e0: i64 = 0;
    let mut var_488: ();
    let rsi: *mut i64;
    _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0144c99ce290211b(&var_488, rsi);
    
    loop
    {
        let mut var_440: i64;
        _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6661978dccc0c882(&var_440, &var_488);
        
        if var_440 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$bat..assets..lazy_theme_set..LazyTheme$GT$$GT$::h5f0a7bec92836d9c(&var_488);
            *arg1.byte_offset(0x18) = var_4e0;
            *arg1.byte_offset(8) = var_4f0;
            *arg1 = 0xd;
            return arg1;
        }
        
        let var_420: i64;
        let var_418: i64;
        let mut var_318: i64;
        bat::assets::lazy_theme_set::LazyTheme::deserialize::h9281d4bc058512b7(&var_318, var_420, 
            var_418);
        let r13_1: i64 = var_318;
        let mut var_428: ();
        let var_310: i128;
        let var_300: i128;
        let var_2f0: i128;
        let var_2e0: i128;
        let var_2d0: i128;
        
        if r13_1 == -0x8000000000000000
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
        
        let mut var_2c0: ();
        let mut var_1c8: ();
        memcpy(&var_1c8, &var_2c0, 0xa0);
        let mut var_220: i64 = r13_1;
        let var_1d8_1: i128 = var_2d0;
        let var_1e8_1: i128 = var_2e0;
        let var_1f8_1: i128 = var_2f0;
        let var_208_1: i128 = var_300;
        let var_218_1: i128 = var_310;
        let mut var_128: ();
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::he33bce6973b38538(
            &var_128, &var_4f0, &var_440, &var_220);
        core::ptr::drop_in_place$LT$core..option..Option$LT$syntect..highlighting..theme..Theme$GT$$GT$::h069bba96e31e5fce(&var_128);
        core::ptr::drop_in_place$LT$bat..assets..lazy_theme_set..LazyTheme$GT$::h2ecc791b7be41b9a(
            &var_428);
    }
}
