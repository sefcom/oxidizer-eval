undefined8 * _ZN7uu_shuf16parse_head_count17h8e9cdbfd7a5f28a8E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  char local_d8 [8];
  undefined8 local_d0;
  undefined8 *local_c8;
  code *local_c0;
  undefined local_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hce8092579b78d193E
            (local_b8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h500d15644f3f8d52E
            (&local_f0,local_b8);
  uVar2 = 0xffffffffffffffff;
  if (CONCAT44(uStack_ec,local_f0) != -0x8000000000000000) {
    do {
      local_f8 = local_e0;
      local_108 = local_f0;
      uStack_104 = uStack_ec;
      uStack_100 = uStack_e8;
      uStack_fc = uStack_e4;
                    /* try { // try from 001c1f39 to 001c1f3e has its CatchHandler @ 001c2087 */
      _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                (local_d8,CONCAT44(uStack_e4,uStack_e8));
      uVar1 = local_d0;
      if (local_d8[0] != '\0') {
        local_50 = 0;
        local_48 = uStack_100;
        uStack_44 = uStack_fc;
        uStack_40 = (undefined4)local_f8;
        uStack_3c = local_f8._4_4_;
        local_38 = 1;
        local_c8 = &local_50;
        local_c0 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_80 = &PTR_DAT_00237d48;
        local_78 = 1;
        local_60 = 0;
        local_70 = &local_c8;
        local_68 = 1;
                    /* try { // try from 001c201e to 001c2032 has its CatchHandler @ 001c2080 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h7c94a57f03ee0317E(&local_98,&local_80);
        param_1[2] = local_88;
        *(undefined4 *)param_1 = local_98;
        *(undefined4 *)((long)param_1 + 4) = uStack_94;
        *(undefined4 *)(param_1 + 1) = uStack_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
                    /* try { // try from 001c2052 to 001c205b has its CatchHandler @ 001c207b */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heff478339c936245E(&local_108);
        _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hd4042d487b460da7E
                  (local_b8);
        return param_1;
      }
                    /* try { // try from 001c1f4b to 001c1f54 has its CatchHandler @ 001c2082 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17heff478339c936245E(&local_108);
      uVar2 = _ZN4core3cmp6min_by17h9901c89ba00e38afE(uVar2,uVar1);
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h500d15644f3f8d52E
                (&local_f0,local_b8);
    } while (CONCAT44(uStack_ec,local_f0) != -0x8000000000000000);
  }
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17hd4042d487b460da7E
            (local_b8);
  param_1[1] = uVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}