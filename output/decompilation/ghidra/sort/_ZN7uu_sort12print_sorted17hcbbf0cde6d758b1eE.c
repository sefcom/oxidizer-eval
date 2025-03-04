void _ZN7uu_sort12print_sorted17hcbbf0cde6d758b1eE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined local_48 [48];
  
  _ZN7uu_sort6Output10into_write17h9c5c08d876f77806E(local_48,param_3);
  local_58 = *(undefined8 *)(param_1 + 0x14);
  local_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 0x12);
  local_a8 = *param_1;
  uStack_a4 = param_1[1];
  uStack_a0 = param_1[2];
  uStack_9c = param_1[3];
  local_98 = *(undefined8 *)(param_1 + 4);
  uStack_90 = *(undefined8 *)(param_1 + 6);
  local_88 = *(undefined8 *)(param_1 + 8);
  uStack_80 = *(undefined8 *)(param_1 + 10);
  local_78 = *(undefined8 *)(param_1 + 0xc);
  uStack_70 = *(undefined8 *)(param_1 + 0xe);
  while( true ) {
                    /* try { // try from 00224ad0 to 00224aea has its CatchHandler @ 00224b04 */
    lVar1 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7d7f90258de101c6E
                      (&local_a8);
    if (lVar1 == 0) break;
    _ZN7uu_sort4Line5print17he3975e626e2ad263E(lVar1,local_48,param_2);
  }
  _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h1183853de4007e7aE
            (local_48);
  return;
}