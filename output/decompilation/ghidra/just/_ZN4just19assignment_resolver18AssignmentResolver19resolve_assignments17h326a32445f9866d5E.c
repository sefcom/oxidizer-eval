void _ZN4just19assignment_resolver18AssignmentResolver19resolve_assignments17h326a32445f9866d5E
               (undefined4 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  ulong local_b8 [3];
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char cStack_28;
  undefined7 uStack_27;
  
  local_d0 = 0;
  local_c0 = 0;
  local_f0 = 0;
  local_e8 = 8;
  local_e0 = 0;
  local_b8[2] = *param_2;
  local_a0 = param_2[1];
  local_78 = local_b8[2];
  if (local_b8[2] != 0) {
    local_78 = param_2[2];
  }
  local_b8[0] = (ulong)(local_b8[2] != 0);
  local_b8[1] = 0;
  local_90 = 0;
  local_d8 = param_2;
  local_98 = local_b8[0];
  local_88 = local_b8[2];
  local_80 = local_a0;
  do {
                    /* try { // try from 003570b0 to 003570ce has its CatchHandler @ 00357133 */
    puVar1 = (undefined8 *)
             _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6442f8fd74f44bbcE
                       (local_b8);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined *)(param_1 + 0x12) = 0x25;
      goto LAB_0035711a;
    }
    _ZN4just19assignment_resolver18AssignmentResolver18resolve_assignment17hc41d0fa4a847f48dE
              (&local_70,&local_f0,*puVar1,puVar1[1]);
  } while (cStack_28 == '%');
  *(undefined8 *)(param_1 + 0x10) = local_30;
  *(ulong *)(param_1 + 0x12) = CONCAT71(uStack_27,cStack_28);
  *(undefined8 *)(param_1 + 0xc) = local_40;
  *(undefined8 *)(param_1 + 0xe) = uStack_38;
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 10) = uStack_48;
  *(undefined8 *)(param_1 + 4) = local_60;
  *(undefined8 *)(param_1 + 6) = uStack_58;
  *param_1 = local_70;
  param_1[1] = uStack_6c;
  param_1[2] = uStack_68;
  param_1[3] = uStack_64;
LAB_0035711a:
  _ZN4core3ptr66drop_in_place_LT_just__assignment_resolver__AssignmentResolver_GT_17h0fc26a71e15d6efcE
            (&local_f0);
  return;
}