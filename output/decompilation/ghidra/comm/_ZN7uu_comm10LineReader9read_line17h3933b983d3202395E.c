undefined  [16] _ZN7uu_comm10LineReader9read_line17h3933b983d3202395E(long *param_1,long param_2)

{
  undefined uVar1;
  char cVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined8 local_38;
  uint local_30;
  
  uVar1 = *(undefined *)(param_1 + 6);
  if (*param_1 == 0) {
    local_38 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(param_1 + 1);
    local_30 = CONCAT31(local_30._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 001aaa85 to 001aaa92 has its CatchHandler @ 001aaae0 */
    auVar3 = _ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17h22767f011618eb41E
                       (&local_38,uVar1,param_2);
    _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h53bab959efd69a8eE
              (local_38,local_30);
  }
  else {
    auVar3 = _ZN3std2io10read_until17h8fb7c8014b7193ebE(param_1,uVar1,param_2);
  }
  local_38 = CONCAT71(local_38._1_7_,uVar1);
                    /* try { // try from 001aaab2 to 001aaacc has its CatchHandler @ 001aaaf2 */
  cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h6db73eece4d5ba57E
                    (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_38,1);
  if (cVar2 == '\0') {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h396eb65ba5211a69E(param_2,uVar1);
  }
  return auVar3;
}