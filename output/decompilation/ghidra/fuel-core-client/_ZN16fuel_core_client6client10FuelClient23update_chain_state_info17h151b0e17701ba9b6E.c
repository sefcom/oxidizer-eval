void _ZN16fuel_core_client6client10FuelClient23update_chain_state_info17h151b0e17701ba9b6E
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  byte extraout_DL;
  long local_48;
  long local_40;
  undefined4 local_38;
  long *local_30;
  
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 != 2) {
    if (*(int *)(param_2 + 0x40) == 1) {
      uVar2 = *(undefined4 *)(param_2 + 0x44);
      _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h177005a9af9870a2E
                (&local_48,*(long *)(param_1 + 0x78) + 0x10);
      if (local_48 == 1) {
        _ZN4core3ptr240drop_in_place_LT_core__result__Result_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_u32_GT__GT__C_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_u32_GT__GT__GT__GT__GT_17h26446d956ab895faE
                  (&local_48);
      }
      else {
        *(undefined4 *)(local_40 + 8) = 1;
        *(undefined4 *)(local_40 + 0xc) = uVar2;
                    /* try { // try from 00393c00 to 00393c04 has its CatchHandler @ 00393cd5 */
        _ZN4core3ptr131drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT_17h1c68491567f5f660E
                  (local_40,local_38);
      }
    }
    if (*(int *)(param_2 + 0x48) == 1) {
      uVar2 = *(undefined4 *)(param_2 + 0x4c);
      _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h177005a9af9870a2E
                (&local_48,*(long *)(param_1 + 0x80) + 0x10);
      if (local_48 == 1) {
        _ZN4core3ptr240drop_in_place_LT_core__result__Result_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_u32_GT__GT__C_std__sync__poison__PoisonError_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_u32_GT__GT__GT__GT__GT_17h26446d956ab895faE
                  (&local_48);
      }
      else {
        *(undefined4 *)(local_40 + 8) = 1;
        *(undefined4 *)(local_40 + 0xc) = uVar2;
                    /* try { // try from 00393c4a to 00393c4e has its CatchHandler @ 00393cc3 */
        _ZN4core3ptr131drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT_17h1c68491567f5f660E
                  (local_40,local_38);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    local_30 = *(long **)(param_1 + 0x60);
    LOCK();
    lVar5 = *local_30;
    *local_30 = *local_30 + 1;
    UNLOCK();
    if (*local_30 == 0 || SCARRY8(lVar5,1) != *local_30 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((iVar1 != 2) && (*(int *)(param_2 + 0x38) == 1)) {
      uVar3 = *(uint *)(param_2 + 0x3c);
                    /* try { // try from 00393c77 to 00393ca9 has its CatchHandler @ 00393ce7 */
      _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h177005a9af9870a2E(&local_48,local_30 + 2);
      lVar5 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h6ab0340200fba02eE(&local_48);
      if ((*(int *)(lVar5 + 8) != 1) || (*(uint *)(lVar5 + 0xc) <= uVar3)) {
        *(undefined4 *)(lVar5 + 8) = 1;
        *(uint *)(lVar5 + 0xc) = uVar3;
      }
      _ZN4core3ptr131drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT_17h1c68491567f5f660E
                (lVar5,extraout_DL & 1,extraout_DL & 1);
    }
    _ZN4core3ptr150drop_in_place_LT_alloc__sync__Arc_LT_std__sync__poison__mutex__Mutex_LT_core__option__Option_LT_fuel_types__numeric_types__BlockHeight_GT__GT__GT__GT_17h39442335f15a7bc0E
              (&local_30);
  }
  return;
}