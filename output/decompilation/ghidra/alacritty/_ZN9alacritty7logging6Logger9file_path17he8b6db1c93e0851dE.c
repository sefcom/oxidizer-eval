void _ZN9alacritty7logging6Logger9file_path17he8b6db1c93e0851dE(uint *param_1,long param_2)

{
  long lVar1;
  undefined uVar2;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined local_20;
  undefined7 uStack_1f;
  
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h0356afe7acdc80ffE(&local_30,param_2 + 0x30);
  uVar2 = local_20;
  if ((local_30 & 1) != 0) {
    _ZN4core3ptr248drop_in_place_LT_core__result__Result_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__C_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__GT__GT__GT_17h1662b955727f946cE
              (&local_30);
    param_1[0] = 0;
    param_1[1] = 0x80000000;
    return;
  }
  lVar1 = CONCAT44(uStack_24,uStack_28);
                    /* try { // try from 0055d2d2 to 0055d2db has its CatchHandler @ 0055d301 */
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (&local_30,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  *(ulong *)(param_1 + 4) = CONCAT71(uStack_1f,local_20);
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_alacritty__logging__OnDemandLogFile_GT__GT_17h04acd6e250735d2bE
            (lVar1,uVar2);
  return;
}