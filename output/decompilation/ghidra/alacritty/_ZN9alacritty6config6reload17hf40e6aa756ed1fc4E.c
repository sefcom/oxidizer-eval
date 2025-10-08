void _ZN9alacritty6config6reload17hf40e6aa756ed1fc4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined *local_8b8;
  undefined **ppuStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 uStack_870;
  undefined4 uStack_86c;
  undefined8 local_868;
  undefined **local_860;
  undefined *local_858;
  undefined **ppuStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined8 local_808;
  undefined local_800 [960];
  undefined **local_440;
  undefined *local_438;
  undefined **ppuStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined local_3e0 [960];
  
  local_8c8 = param_2;
  local_8c0 = param_3;
  uVar2 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (3 < uVar2) {
    ppuStack_8b0 = (undefined **)
                   _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h3a6a9966801425ecE;
    local_440 = &PTR_DAT_00981db8;
    local_438 = (undefined *)0x1;
    uStack_420 = 0;
    ppuStack_430 = &local_8b8;
    local_428 = 1;
    local_8b8 = (undefined *)&local_8c8;
    uStack_840 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_DAT_00981dc8);
    local_860 = (undefined **)&DAT_00201da1;
    local_858 = (undefined *)0x11;
    ppuStack_850 = (undefined **)&DAT_00201da1;
    local_848 = 0x11;
    _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_440,4,&local_860);
    param_2 = local_8c8;
    param_3 = local_8c0;
  }
  _ZN9alacritty6config9load_from17h4623580b3b9fbaaeE(&local_440,param_2,param_3);
  ppuVar1 = local_440;
  local_8b8 = local_438;
  ppuStack_8b0 = ppuStack_430;
  local_8a8 = local_428;
  uStack_8a0 = uStack_420;
  local_898 = local_418;
  uStack_890 = uStack_410;
  local_888 = local_408;
  uStack_880 = uStack_400;
  local_878 = local_3f8;
  uStack_874 = uStack_3f4;
  uStack_870 = uStack_3f0;
  uStack_86c = uStack_3ec;
  local_868 = local_3e8;
  if (local_440 == (undefined **)0x6) {
    param_1[0xb] = local_3e8;
    param_1[9] = CONCAT44(uStack_3f4,local_3f8);
    param_1[10] = CONCAT44(uStack_3ec,uStack_3f0);
    param_1[7] = local_408;
    param_1[8] = uStack_400;
    param_1[5] = local_418;
    param_1[6] = uStack_410;
    param_1[3] = local_428;
    param_1[4] = uStack_420;
    param_1[1] = local_438;
    param_1[2] = ppuStack_430;
    *param_1 = 6;
  }
  else {
    (*(code *)PTR_memcpy_009de0b0)(local_800,local_3e0,0x3c0);
    local_858 = local_8b8;
    ppuStack_850 = ppuStack_8b0;
    local_848 = local_8a8;
    uStack_840 = uStack_8a0;
    local_838 = (undefined4)local_898;
    uStack_834 = local_898._4_4_;
    uStack_830 = (undefined4)uStack_890;
    uStack_82c = uStack_890._4_4_;
    local_828 = (undefined4)local_888;
    uStack_824 = local_888._4_4_;
    uStack_820 = (undefined4)uStack_880;
    uStack_81c = uStack_880._4_4_;
    local_818 = local_878;
    uStack_814 = uStack_874;
    uStack_810 = uStack_870;
    uStack_80c = uStack_86c;
    local_808 = local_868;
    local_860 = ppuVar1;
                    /* try { // try from 00542b56 to 00542b62 has its CatchHandler @ 00542b85 */
    _ZN9alacritty6config13after_loading17h997230e48c68b3cdE(&local_860,param_4);
    (*(code *)PTR_memcpy_009de0b0)(param_1,&local_860,0x420);
  }
  return;
}