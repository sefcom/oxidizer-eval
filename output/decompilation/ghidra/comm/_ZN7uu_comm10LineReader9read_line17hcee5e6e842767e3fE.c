undefined  [16] _ZN7uu_comm10LineReader9read_line17hcee5e6e842767e3fE(long *param_1,long param_2)

{
  undefined uVar1;
  char cVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined8 local_38;
  uint local_30;
  
  uVar1 = *(undefined *)(param_1 + 6);
  if (*param_1 == 0) {
    local_38 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_001e7418)(param_1 + 1);
    local_30 = CONCAT31(local_30._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 00157325 to 00157332 has its CatchHandler @ 0015737b */
    auVar3 = (*(code *)
               PTR__ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17hc4dcd49adc43842dE_001e7420
             )(&local_38,uVar1,param_2);
    _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17ha1cd649d6c05cfffE
              (local_38,local_30);
  }
  else {
    auVar3 = _ZN3std2io10read_until17ha0639595779685f0E(param_1,uVar1,param_2);
  }
  local_38 = CONCAT71(local_38._1_7_,uVar1);
                    /* try { // try from 00157352 to 00157367 has its CatchHandler @ 0015738d */
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hffb6799ff363e4fdE
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_38);
  if (cVar2 == '\0') {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h4a924773790e6b9bE(param_2,uVar1);
  }
  return auVar3;
}