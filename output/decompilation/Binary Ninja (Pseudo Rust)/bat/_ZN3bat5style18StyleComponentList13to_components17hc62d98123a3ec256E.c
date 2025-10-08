
  fn bat::style::StyleComponentList::to_components::hc62d98123a3ec256(arg1: *mut i128, arg2: *mut i64, arg3: i8) -> i64

{
    let mut var_a9: i8 = arg3;
    let mut var_78: i128;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha612b0421c6d552b(&var_78);
    let mut var_a8: i128 = var_78;
    let mut rax: i64;
    let mut rdx: i64;
    rax = bat::style::StyleComponent::components::h6c8afe9a5a433675(0, arg3);
    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hf073ab062d031be3(&var_a8, rax);
    let mut var_40: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6453c4f10edde20d(&var_40, arg2);
    let var_58: i128;
    let var_58_1: i128 = var_58;
    let var_68: i128;
    let var_68_1: i128 = var_68;
    var_78 = var_a8;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hf25efccdb190c0a4(arg1, &var_40, &var_78, &var_a9)
}
