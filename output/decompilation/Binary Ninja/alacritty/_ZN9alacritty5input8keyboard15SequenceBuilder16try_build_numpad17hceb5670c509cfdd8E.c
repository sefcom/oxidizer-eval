
  void alacritty::input::keyboard::SequenceBuilder::try_build_numpad::hceb5670c509cfdd8(int64_t* arg1, char arg2, int16_t* arg3)

{
    if (!(arg2 & 1) || arg3[0x3d] != 3)
    {
        *arg1 = -0x7fffffffffffffff;
        return;
    }
    
    char var_38;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_38, arg3);
    uint32_t rax_1 = var_38;
    char const* const r14_1;
    
    if (rax_1 != 0x20)
    {
        int16_t var_36;
        
        if (rax_1 == 0x1f && var_36 - 0xe < 0x14 && TEST_BITD(0x907f9, var_36 - 0xe))
        {
            r14_1 = (&data_c87798)[var_36 - 0xe];
            goto label_857c7c;
        }
        
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_38);
        return;
    }
    
    int64_t var_30;
    uint64_t var_28;
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "0$^mw%p+At@Colon.\ReturnEquals12…", 1))
    {
        r14_1 = "57399573595736357362573615743357…";
        label_857c7c:
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_38);
        *arg1 = -0x8000000000000000;
        arg1[1] = r14_1;
        arg1[2] = 5;
        arg1[3] = 0x110000;
        return;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "123456789NumpadEqualsa combinati…", 1))
    {
        r14_1 = "57400573995735957363573625736157…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "23456789NumpadEqualsa combinatio…", 1))
    {
        r14_1 = "57401574005739957359573635736257…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "3456789NumpadEqualsa combination…", 1))
    {
        r14_1 = "57402574015740057399573595736357…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "456789NumpadEqualsa combination …", 1))
    {
        r14_1 = "57403574025740157400573995735957…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "56789NumpadEqualsa combination o…", 1))
    {
        r14_1 = "57404574035740257401574005739957…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "6789NumpadEqualsa combination of…", 1))
    {
        r14_1 = "57405574045740357402574015740057…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "789NumpadEqualsa combination of …", 1))
    {
        r14_1 = "57406574055740457403574025740157…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "89NumpadEqualsa combination of A…", 1))
    {
        r14_1 = "57407574065740557404574035740257…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "9NumpadEqualsa combination of Ap…", 1))
    {
        r14_1 = "57408574075740657405574045740357…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, ".\ReturnEquals123456789NumpadEqu…", 1))
    {
        r14_1 = "57409574085740757406574055740457…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "/", 1))
    {
        r14_1 = "57410574095740857407574065740557…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "*kjh0$^mw%p+At@Colon.\ReturnEqua…", 1))
    {
        r14_1 = "57411574105740957408574075740657…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "--0o-0b0x0o0bempty YAML tag is n…", 1))
    {
        r14_1 = "57412574115741057409574085740757…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "+At@Colon.\ReturnEquals123456789…", 1))
    {
        r14_1 = "57413574125741157410574095740857…";
        goto label_857c7c;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h8240391abffeb7c9(var_30, var_28, "=backend/home/34r7hm4n/.cargo/re…", 1))
    {
        r14_1 = "57415574135741257411574105740957…";
        goto label_857c7c;
    }
    
    *arg1 = -0x7fffffffffffffff;
    core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(&var_38);
}
