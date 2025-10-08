void _ZN4just8justfile8Justfile13public_groups17he2abda4ed6140bb7E
               (undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_e8;
  long local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined local_60 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_150 = 0;
  local_148 = 8;
  local_140 = 0;
  local_128 = *(long *)(param_2 + 0x2b8);
  uStack_120 = *(undefined8 *)(param_2 + 0x2c0);
  local_138 = (ulong)(local_128 != 0);
  local_f8 = local_128;
  if (local_128 != 0) {
    local_f8 = *(long *)(param_2 + 0x2c8);
  }
  uStack_130 = 0;
  local_110 = 0;
  uStack_118 = local_138;
  local_108 = local_128;
  local_100 = uStack_120;
  local_e8 = param_1;
  local_e0 = param_2;
  do {
    auVar8 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha467772e76a717b5E
                       (&local_138);
    plVar4 = auVar8._8_8_;
    if ((auVar8._0_8_ == 0) || (plVar4 == (long *)0x0)) {
      local_c8 = *(long *)(local_e0 + 0x2a0);
      uStack_c0 = *(undefined8 *)(local_e0 + 0x2a8);
      local_98 = local_c8;
      if (local_c8 != 0) {
        local_98 = *(long *)(local_e0 + 0x2b0);
      }
      local_d8 = (ulong)(local_c8 != 0);
      uStack_d0 = 0;
      uStack_b0 = 0;
      local_b8 = local_d8;
      local_a8 = local_c8;
      local_a0 = uStack_c0;
      while( true ) {
                    /* try { // try from 003702a0 to 003702ac has its CatchHandler @ 00370438 */
        auVar8 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h78f4c4822acc3eceE
                           (&local_d8);
        lVar5 = auVar8._8_8_;
        if ((auVar8._0_8_ == 0) || (lVar5 == 0)) break;
        if (*(long *)(lVar5 + 0x10) != 0) {
          lVar6 = *(long *)(lVar5 + 8);
          lVar7 = *(long *)(lVar5 + 0x10) * 0x18;
          do {
            if (*(char *)(lVar5 + 0x230) == '%') {
                    /* try { // try from 003703f5 to 00370401 has its CatchHandler @ 00370456 */
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)
                        (&PTR_s_src_justfile_rs_______00530328);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
                    /* try { // try from 003702ed to 00370347 has its CatchHandler @ 00370454 */
            lVar1 = *(long *)(lVar5 + 0x228);
            (*(code *)
              PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_00565d98
            )(&local_90,lVar6);
            local_138 = 8;
            uStack_130 = 0;
            local_110 = uStack_80;
            uStack_120 = CONCAT44(uStack_8c,local_90);
            uStack_118 = CONCAT44(uStack_84,uStack_88);
            local_128 = lVar1;
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h062b618da8f3bdc6E
                      (&local_150,&local_138,&PTR_s_src_justfile_rs_______00530340);
            lVar6 = lVar6 + 0x18;
            lVar7 = lVar7 + -0x18;
          } while (lVar7 != 0);
        }
      }
      if ((param_3 & 1) == 0) {
        _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_7sort_by17h9fe3d33168c2c472E
                  (local_148,local_140);
      }
      else {
                    /* try { // try from 00370368 to 00370380 has its CatchHandler @ 00370456 */
        _ZN5alloc5slice11stable_sort17h023d403911cb0462E();
      }
      _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h7747b82267ce9a18E
                (&local_d8);
      uStack_118 = local_b8;
      local_110 = uStack_b0;
      local_128 = local_c8;
      uStack_120 = uStack_c0;
      local_138 = local_d8;
      uStack_130 = uStack_d0;
                    /* try { // try from 003703a8 to 003703b6 has its CatchHandler @ 00370419 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_6retain17h18e40eb95ecb495cE(&local_150,&local_138);
      _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hed57f29e9fc405e6E
                (&local_d8,&local_150);
                    /* try { // try from 003703cc to 003703d8 has its CatchHandler @ 00370404 */
      _ZN4core4iter6traits8iterator8Iterator7collect17h5b2da362f16f9884E(local_e8,&local_d8);
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17hfb902d89700f9edfE
                (&local_138);
      return;
    }
  } while ((*(char *)(*plVar4 + 0x10c) != '\0') ||
          (cVar3 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E
                             (*plVar4 + 0xe8,0xf), cVar3 != '\0'));
  _ZN4just6recipe15Recipe_LT_D_GT_6groups17hd8e05377223fb99fE(local_60,*plVar4 + 0x10);
  _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0436ce891d6bcb07E
            (&local_d8,local_60);
  do {
                    /* try { // try from 003701b0 to 00370214 has its CatchHandler @ 0037043c */
    _ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf7c3db92e6462bc5E
              (&local_90,&local_d8);
    local_78 = CONCAT44(uStack_8c,local_90);
    local_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = (undefined4)uStack_80;
    uStack_3c = uStack_80._4_4_;
    lVar5 = *plVar4;
    local_90 = *(undefined4 *)(lVar5 + 0x48);
    uStack_8c = *(undefined4 *)(lVar5 + 0x4c);
    local_70 = uStack_88;
    uStack_6c = uStack_84;
    uStack_68 = (undefined4)uStack_80;
    uStack_64 = uStack_80._4_4_;
    uStack_88 = *(undefined4 *)(lVar5 + 0x50);
    uStack_84 = *(undefined4 *)(lVar5 + 0x54);
    uStack_80 = *(undefined8 *)(lVar5 + 0xd8);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h062b618da8f3bdc6E
              (&local_150,&local_90,&PTR_s_src_justfile_rs_______00530358);
  } while( true );
}