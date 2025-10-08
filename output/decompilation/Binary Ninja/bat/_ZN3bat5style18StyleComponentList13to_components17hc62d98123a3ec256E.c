
  int64_t bat::style::StyleComponentList::to_components::hc62d98123a3ec256(int128_t* arg1, int64_t* arg2, char arg3)

{
    char var_a9 = arg3;
    int128_t var_78;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::ha612b0421c6d552b(&var_78);
    int128_t var_a8 = var_78;
    int64_t rax;
    int64_t rdx;
    rax = bat::style::StyleComponent::components::h6c8afe9a5a433675(0, arg3);
    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::hf073ab062d031be3(&var_a8, rax);
    void var_40;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6453c4f10edde20d(&var_40, arg2);
    int128_t var_58;
    int128_t var_58_1 = var_58;
    int128_t var_68;
    int128_t var_68_1 = var_68;
    var_78 = var_a8;
    return _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hf25efccdb190c0a4(arg1, &var_40, &var_78, &var_a9);
}
