undefined8 *
_ZN10check_docs20filter_valid_anchors17h39bbb345caf4f14fE
          (undefined8 *param_1,undefined8 param_2,long param_3)

{
  long local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined local_108 [16];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined local_b0 [32];
  long *local_90;
  undefined local_88 [24];
  undefined local_70 [64];
  
  local_140 = param_3;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9b6edf7ebf686b8cE
            (local_b0);
  local_90 = &local_140;
                    /* try { // try from 001ecb09 to 001ecb15 has its CatchHandler @ 001ecc69 */
  _ZN9itertools9Itertools13partition_map17h4f90cde821cd7ae4E(&local_138,local_b0);
  local_f8 = local_128;
  local_e8 = local_120;
  uStack_e4 = uStack_11c;
  uStack_e0 = uStack_118;
  uStack_dc = uStack_114;
  local_d8 = local_110;
                    /* try { // try from 001ecb4b to 001ecb7d has its CatchHandler @ 001ecc7c */
  (*(code *)PTR__ZN10check_docs18filter_unused_ends17h49a7d1140d6f97f2E_002fea48)
            (local_b0,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
             CONCAT44(uStack_12c,uStack_130));
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h62ec4cff24ca745eE
            (&local_138,local_b0);
  _ZN4core4iter6traits8iterator8Iterator7collect17h5d93aa8de2da2383E(local_88,&local_138);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h419e594be0ef00e6E
            (&local_138,local_108);
                    /* try { // try from 001ecb90 to 001ecb9f has its CatchHandler @ 001ecc55 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h6a36610d4b6dfad3E(&local_c8,&local_138);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h62ec4cff24ca745eE
            (local_b0,&local_e8);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h62ec4cff24ca745eE
            (&local_138,local_88);
  _ZN4core4iter6traits8iterator8Iterator5chain17hd23e1eb5f431e694E(local_70,local_b0,&local_138);
                    /* try { // try from 001ecbe0 to 001ecbec has its CatchHandler @ 001ecc35 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h26c983c3baf6385cE(&local_138,local_70);
  param_1[2] = local_b8;
  *param_1 = local_c8;
  param_1[1] = uStack_c0;
  *(undefined4 *)(param_1 + 3) = local_138;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_134;
  *(undefined4 *)(param_1 + 4) = uStack_130;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_12c;
  param_1[5] = local_128;
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_check_docs__Anchor_GT__GT_17h01addc0fc9fc5f6eE
            (param_3);
  return param_1;
}