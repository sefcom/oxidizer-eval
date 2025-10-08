
  int64_t linera_summary::ci_runtime_comparison::CiRuntimeComparison::get_runtimes::h6b7aa8181dc2e971(int64_t* arg1, int64_t* arg2)

{
    int64_t var_548 = 0;
    int64_t result = 0;
    void var_518;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0418eb3e5a9d9ae5(&var_518, arg2);
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c0697d7152ffb(&i, &var_518);
    
    if (!(0 + -(i)))
    {
        do
        {
            void var_4f8;
            memcpy(&var_4f8, &i, 0x248);
            void var_4e0;
            void var_4c8;
            void var_470;
            void var_458;
            void var_440;
            void var_3e8;
            void var_390;
            void var_378;
            void var_360;
            void var_348;
            void var_330;
            void var_318;
            char var_2b8;
            uint64_t rax_8;
            void* rdi_24;
            
            if (var_2b8 != 3)
            {
                rax_8 = _$LT$$LP$A$C$B$RP$$u20$as$u20$anyhow..ensure..BothDebug$GT$::__dispatch_ensure::hd80a0ce03af04a7b(&var_2b8);
                label_917919:
                arg1[1] = rax_8;
                *arg1 = 1;
                rdi_24 = &var_4f8;
                label_917948:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(rdi_24);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_4e0);
                core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_4c8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_470);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_458);
                core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_440);
                core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_3e8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_390);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$octocrab..models..workflows..Step$GT$$GT$::hedd112003ee7f486(&var_378);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_360);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h492b602ae4f5467c(&var_348);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb772be4e7af31c63(
                    &var_330);
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb772be4e7af31c63(
                    &var_318);
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$octocrab..models..workflows..Job$GT$$GT$::h03b25bc479979ac1(&var_518);
                return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$u64$GT$$GT$$GT$::hcda09b8ef5bf9729(&var_548);
            }
            
            char var_2b7;
            
            if (var_2b7 == 7)
            {
                rax_8 = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hcbad9944872ae83f(
                    "Condition failed: `job.conclusio…", 0x2c);
                goto label_917919;
            }
            
            char var_551 = var_2b7;
            
            if (var_2b7 != 5)
            {
                rax_8 = _$LT$$LP$A$C$B$RP$$u20$as$u20$anyhow..ensure..BothDebug$GT$::__dispatch_ensure::h6da9ad59f8cf9516(&var_551);
                goto label_917919;
            }
            
            int32_t var_2c4;
            
            if (!var_2c4)
            {
                rax_8 = anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hcbad9944872ae83f(
                    "Condition failed: `job.completed…", 0x2e);
                goto label_917919;
            }
            
            void var_2b0;
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h64b7f88545f9777b(
                &var_2b0, &var_548, &i);
            int64_t* rax_3 = alloc::collections::btree::map::entry::Entry$LT$K$C$V$C$A$GT$::or_default::h6d559705046cb376(&var_2b0);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_2b0, &var_390);
            
            if (!var_2c4)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            int32_t var_524 = var_2c4;
            int64_t var_2c0;
            int64_t var_520_1 = var_2c0;
            int32_t var_2cc;
            int32_t var_528_1 = var_2cc;
            int64_t var_2d4;
            int64_t var_530 = var_2d4;
            int64_t rax_7;
            int32_t rdx_2;
            rax_7 = chrono::datetime::DateTime$LT$Tz$GT$::signed_duration_since::h6fe2f740ab2fa8ae(
                &var_524, &var_530);
            rdx_2 = rdx_2 > 0;
            rdx_2 &= rax_7 < 0;
            uint64_t rdx_3 = rdx_2;
            
            if (rdx_3 + rax_7 < 0)
            {
                arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h80769afd2905541e();
                *arg1 = 1;
                rdi_24 = &var_2b0;
                goto label_917948;
            }
            
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h7035cfc127f286d4(
                rax_3, &var_2b0, rdx_3 + rax_7);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_4e0);
            core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_4c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_470);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_458);
            core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_440);
            core::ptr::drop_in_place$LT$url..Url$GT$::h5a162777a9689d3c(&var_3e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_390);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$octocrab..models..workflows..Step$GT$$GT$::hedd112003ee7f486(&var_378);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_360);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h492b602ae4f5467c(&var_348);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb772be4e7af31c63(
                &var_330);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hb772be4e7af31c63(
                &var_318);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc38c0697d7152ffb(&i, &var_518);
        } while (i != -0x8000000000000000);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$octocrab..models..workflows..Job$GT$$GT$::h03b25bc479979ac1(&var_518);
    arg1[3] = result;
    *(arg1 + 8) = var_548;
    *arg1 = 0;
    return result;
}
