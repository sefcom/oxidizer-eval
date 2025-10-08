undefined  [16]
_ZN7uu_sort5check6reader17he5a33cd1f4d4c531E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6)

{
  undefined uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  char local_c8;
  undefined7 uStack_c7;
  undefined local_c0 [144];
  
  local_e8 = 0;
  local_e0 = 1;
  local_d8 = 0;
  lVar2 = 0;
  uVar1 = *(undefined *)(param_6 + 0x99);
  local_108 = param_1;
  local_100 = param_2;
  local_f0 = param_5;
  do {
                    /* try { // try from 001c1100 to 001c1136 has its CatchHandler @ 001c1189 */
    _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8677ff4d20c1e78dE
              (local_c0,param_3);
    _ZN7uu_sort6chunks4read17he8360ac327e09de7E
              (&local_d0,param_4,local_f0,local_c0,&local_e8,&local_108,uVar1,param_6);
    if (local_d0 != 0) {
      local_f8 = CONCAT71(uStack_c7,local_c8);
      lVar2 = local_d0;
      break;
    }
  } while (local_c8 != '\0');
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf1471b789cf37b11E(&local_e8);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hcc69def0910ab351E
            (local_108,local_100);
  auVar3._8_8_ = local_f8;
  auVar3._0_8_ = lVar2;
  return auVar3;
}