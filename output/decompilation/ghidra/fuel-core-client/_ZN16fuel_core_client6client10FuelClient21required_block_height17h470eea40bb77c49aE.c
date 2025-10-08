undefined4
_ZN16fuel_core_client6client10FuelClient21required_block_height17h470eea40bb77c49aE(long param_1)

{
  undefined4 uVar1;
  byte local_28 [8];
  long local_20;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x58) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x5c);
  }
  else {
    _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h275b793663e667f3E
              (local_28,*(long *)(param_1 + 0x60) + 0x10);
    if ((local_28[0] & 1) == 0) {
      uVar1 = *(undefined4 *)(local_20 + 8);
      _ZN4core3ptr131drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT_17he101c9a7d19eefeaE
                (local_20,local_18);
    }
    else {
      _ZN4core3ptr310drop_in_place_LT_core__result__Result_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__C_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT__GT__GT_17hab8a56bb85fec130E
                (local_28);
      uVar1 = 0;
    }
  }
  return uVar1;
}