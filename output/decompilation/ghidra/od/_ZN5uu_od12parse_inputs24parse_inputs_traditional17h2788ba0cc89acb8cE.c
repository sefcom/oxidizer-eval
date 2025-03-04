void _ZN5uu_od12parse_inputs24parse_inputs_traditional17h2788ba0cc89acb8cE
               (undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  switch(param_3) {
  case 0:
    puVar2 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE();
    if (puVar2 != (undefined4 *)0x0) {
                    /* try { // try from 001d2e3c to 001d2e54 has its CatchHandler @ 001d30ae */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                (&local_90,"-",1);
      local_98 = local_80;
      *(undefined **)(puVar2 + 4) = local_80;
      *puVar2 = (undefined4)local_90;
      puVar2[1] = local_90._4_4_;
      puVar2[2] = (undefined4)uStack_88;
      puVar2[3] = uStack_88._4_4_;
      _ZN5alloc5slice4hack8into_vec17h371cf1993c745829E(param_1,puVar2,1);
      param_1[4] = 2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
  case 1:
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
              (&local_a8,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
    if (local_a8 == (undefined8 *)0x0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                (&local_90,"-",1);
      uVar3 = 0;
      param_2 = pcStack_a0;
    }
    else {
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h20a08bdd9390469fE
                (&local_90,param_2,(undefined8 *)((long)param_2 + 0x10));
      uVar3 = 2;
    }
    param_1[2] = local_80;
    *param_1 = local_90;
    param_1[1] = uStack_88;
    param_1[3] = param_2;
    param_1[4] = uVar3;
    return;
  case 2:
    uVar3 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)((long)param_2 + 8);
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E(&local_50,uVar3,uVar1);
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
              (&local_60,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    if (local_50 == 0 && local_60 == 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                (param_1,"-",1);
      param_1[3] = local_48;
      param_1[4] = 1;
      param_1[5] = local_58;
      return;
    }
    if (local_60 == 0) {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                (param_1,uVar3,uVar1);
      param_1[3] = local_58;
      param_1[4] = 0;
      return;
    }
    break;
  case 3:
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
              (&local_40,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    _ZN5uu_od12parse_inputs20parse_offset_operand17h71d36fc2ef6ee229E
              (&local_30,*(undefined8 *)((long)param_2 + 0x20),*(undefined8 *)((long)param_2 + 0x28)
              );
    if (local_40 == 0) {
      if (local_30 == 0) {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha029c3acdf37c34fE
                  (param_1,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
        param_1[3] = local_38;
        param_1[4] = 1;
        param_1[5] = local_28;
        return;
      }
      local_a8 = (undefined8 *)((long)param_2 + 0x20);
      local_90 = &PTR_s_invalid_label__00241ee0;
      goto LAB_001d2fcb;
    }
    break;
  default:
    local_a8 = (undefined8 *)((long)param_2 + 0x30);
    local_90 = &PTR_s_too_many_inputs_after___traditio_00241ef0;
    goto LAB_001d2fcb;
  }
  local_a8 = (undefined8 *)((long)param_2 + 0x10);
  local_90 = &PTR_DAT_00241ed0;
LAB_001d2fcb:
  pcStack_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
  uStack_88 = 1;
  local_70 = 0;
  local_78 = 1;
  local_80 = (undefined *)&local_a8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hc22922308bfda6bfE(param_1,&local_90);
  param_1[4] = 3;
  return;
}