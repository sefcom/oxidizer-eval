undefined8 *
_ZN10check_docs17validate_includes17h41bae39804dee97eE
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_88;
  long lStack_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3e37f3294573936eE
            (&local_58);
                    /* try { // try from 001ec2a4 to 001ec2b0 has its CatchHandler @ 001ec378 */
  local_38 = param_3;
  _ZN9itertools9Itertools13partition_map17hc6a0bca4affa4f4dE(&local_88,&local_58);
  local_98 = local_78;
  local_a8 = local_88;
  uStack_a0 = lStack_80;
  local_48 = local_60;
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  local_88 = *(long *)(param_3 + 8);
  lStack_80 = *(long *)(param_3 + 0x10) * 0x38 + local_88;
                    /* try { // try from 001ec2f6 to 001ec304 has its CatchHandler @ 001ec34d */
  local_78 = (undefined *)&local_a8;
  _ZN4core4iter6traits8iterator8Iterator7collect17h57163fbc07130889E(&local_30,&local_88);
  param_1[2] = local_48;
  *param_1 = CONCAT44(uStack_54,local_58);
  param_1[1] = CONCAT44(uStack_4c,uStack_50);
  *(undefined4 *)(param_1 + 3) = local_30;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_1 + 4) = uStack_28;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_24;
  param_1[5] = local_20;
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_check_docs__Anchor_GT__GT_17h01addc0fc9fc5f6eE
            (&local_a8);
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_check_docs__Anchor_GT__GT_17h01addc0fc9fc5f6eE
            (param_3);
  return param_1;
}