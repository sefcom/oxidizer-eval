void _ZN7uu_join15parse_separator17hf124353ffbd88396E
               (undefined8 *param_1,undefined *param_2,long param_3)

{
  undefined uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined auVar4 [12];
  undefined auVar5 [12];
  long local_a0;
  long local_98;
  undefined **local_90;
  long local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  undefined local_40 [24];
  undefined4 local_28;
  
  if (param_3 == 1) {
    uVar1 = *param_2;
    *param_1 = 0x8000000000000000;
    *(undefined *)(param_1 + 1) = uVar1;
  }
  else if (param_3 == 0) {
    *param_1 = 0x8000000000000002;
  }
  else {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00204d78)(&local_90);
    if ((int)local_90 == 1) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9c1c5d77c0020408E
                (&local_90,&DAT_0011afe3,0x18);
      local_78 = CONCAT44(local_78._4_4_,1);
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6838e3ae00012226E(&local_90);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h54a1587742d47b08E_001fe360
      ;
      *param_1 = 0x8000000000000004;
    }
    else {
      local_60 = local_88;
      local_58 = (long)local_80;
      local_98 = local_88 + (long)local_80;
      local_a0 = local_88;
      auVar4 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_a0);
      if (((auVar4 & (undefined  [12])0x1) == (undefined  [12])0x0) || (auVar4._8_4_ == 0x110000)) {
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00204d50)
                  (&DAT_0011affb,0x23,&PTR_DAT_001fe530);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      auVar5 = _ZN4core3str11validations15next_code_point17h0099d433804eecafE(&local_a0);
      if ((auVar5 & (undefined  [12])0x1) == (undefined  [12])0x0) {
        (*(code *)
          PTR__ZN80__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h7bd9bfc71eaad3d0E_002050f8
        )(param_1,local_88,local_80,&PTR_DAT_001fe548);
      }
      else if (auVar4._8_4_ == 0x5c && auVar5._8_4_ == 0x30) {
        *param_1 = 0x8000000000000000;
        *(undefined *)(param_1 + 1) = 0;
      }
      else {
        local_50 = &local_60;
        local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4a0c6b711cbcdca8E;
        local_90 = &PTR_DAT_001fe520;
        local_88 = 1;
        local_70 = 0;
        local_80 = &local_50;
        local_78 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h9a77d6fb89838746E(local_40,&local_90);
        local_28 = 1;
        uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6838e3ae00012226E(local_40);
        param_1[1] = uVar3;
        param_1[2] = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h54a1587742d47b08E_001fe360
        ;
        *param_1 = 0x8000000000000004;
      }
    }
  }
  return;
}