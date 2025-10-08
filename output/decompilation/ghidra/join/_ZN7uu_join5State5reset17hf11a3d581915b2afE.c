void _ZN7uu_join5State5reset17hf11a3d581915b2afE(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _ZN4core3ptr44drop_in_place_LT__u5b_uu_join__Line_u5d__GT_17h87a13497c0ddc073E
            (*(undefined8 *)(param_1 + 8),uVar1);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he2e51fac3c0fc166E(param_1,param_2);
  return;
}