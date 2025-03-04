void _ZN7uu_join5State5reset17h80c820df90bbe344E(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 001c3ac9 to 001c3acd has its CatchHandler @ 001c3b01 */
  _ZN4core3ptr44drop_in_place_LT__u5b_uu_join__Line_u5d__GT_17h7063c6a704fef728E
            (*(undefined8 *)(param_1 + 8),uVar1);
  if (*param_2 != -0x8000000000000000) {
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((long)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((long)param_2 + 0xc);
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((long)param_2 + 0x1c);
    local_28 = *(undefined4 *)(param_2 + 4);
    uStack_24 = *(undefined4 *)((long)param_2 + 0x24);
    uStack_20 = *(undefined4 *)(param_2 + 5);
    uStack_1c = *(undefined4 *)((long)param_2 + 0x2c);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h8d118758e449cd1fE(param_1,&local_48);
  }
  return;
}