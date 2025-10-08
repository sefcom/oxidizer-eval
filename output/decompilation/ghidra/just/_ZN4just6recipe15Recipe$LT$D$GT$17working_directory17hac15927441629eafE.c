void _ZN4just6recipe15Recipe_LT_D_GT_17working_directory17hac15927441629eafE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long *plVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88 [3];
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  cVar1 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E(param_2 + 0xd8,9);
  if (cVar1 == '\0') {
    _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
              (&local_a0,param_3,param_4);
    local_88[2] = *(long *)(param_2 + 0xd8);
    local_70 = *(undefined8 *)(param_2 + 0xe0);
    local_88[0] = (ulong)(local_88[2] != 0);
    local_48 = local_88[2];
    if (local_88[2] != 0) {
      local_48 = *(long *)(param_2 + 0xe8);
    }
    local_88[1] = 0;
    local_60 = 0;
    local_68 = local_88[0];
    local_58 = local_88[2];
    local_50 = local_70;
    do {
                    /* try { // try from 003839c0 to 003839c7 has its CatchHandler @ 00383a35 */
      plVar2 = (long *)_ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0a90991eb32c0f01E
                                 (local_88);
      if (plVar2 == (long *)0x0) {
        param_1[2] = local_90;
        *param_1 = local_a0;
        param_1[1] = uStack_98;
        return;
      }
    } while (*plVar2 != -0x7fffffffffffffec);
                    /* try { // try from 003839e7 to 003839f3 has its CatchHandler @ 00383a33 */
    _ZN3std4path4Path4join17h509d33a3bbf89c2cE(&local_40,uStack_98,local_90,plVar2 + 1);
    param_1[2] = local_30;
    *(undefined4 *)param_1 = local_40;
    *(undefined4 *)((long)param_1 + 4) = uStack_3c;
    *(undefined4 *)(param_1 + 1) = uStack_38;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_a0);
  }
  else {
    *param_1 = 0x8000000000000000;
  }
  return;
}