undefined  [16] _ZN5uu_od6odfunc17he37a0cb3fa0b61f3E(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined local_98 [12];
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_70;
  long local_68;
  undefined8 *local_60;
  code *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_e8 = 0;
  local_e0 = 1;
  local_d8 = 0;
  puVar3 = *(undefined **)(param_3 + 0x18);
  local_70 = *(long *)(param_3 + 0x28);
  bVar1 = *(byte *)(param_3 + 0x30);
  bVar7 = false;
  local_68 = param_3;
  do {
                    /* try { // try from 00160720 to 00160830 has its CatchHandler @ 001609e0 */
    _ZN5uu_od12inputdecoder21InputDecoder_LT_I_GT_9peek_read17h90a4a3ce88a5deadE(&local_50,param_2);
    if ((char)uStack_38 == '\x03') {
      local_d0 = CONCAT44(uStack_4c,local_50);
                    /* try { // try from 00160889 to 0016094f has its CatchHandler @ 001609b9 */
      _local_98 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0020aa88)();
      local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h96c1f882c1b72de8E;
      local_c8 = (undefined **)&DAT_002014f0;
      local_c0 = 2;
      uStack_a8 = 0;
      local_b8 = &local_60;
      local_b0 = 1;
      local_60 = (undefined8 *)local_98;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0020aa90)(&local_c8);
      local_98._0_8_ = &local_d0;
      stack0xffffffffffffff70 =
           PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0020aa98
      ;
      local_c8 = (undefined **)&DAT_00201510;
      local_c0 = 2;
      uStack_a8 = 0;
      local_b0 = 1;
      local_b8 = (undefined8 **)local_98;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0020aa90)(&local_c8);
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18print_final_offset17h93616ef1acb63221E_0020aaa0)
                (param_1);
      auVar8 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_0020aaa8
               )(1);
                    /* try { // try from 0016095b to 00160985 has its CatchHandler @ 001609b7 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h888b94391c256b0aE(local_d0);
LAB_00160990:
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h144f15fdda6201b2E
                (local_e8,local_e0);
      return auVar8;
    }
    local_98._4_4_ = uStack_4c;
    local_98._0_4_ = local_50;
    stack0xffffffffffffff70 = (undefined *)CONCAT44(uStack_44,uStack_48);
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    if (stack0xffffffffffffff70 == (undefined *)0x0) {
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18print_final_offset17h93616ef1acb63221E_0020aaa0)
                (param_1);
      cVar5 = _ZN91__LT_uu_od__peekreader__PeekReader_LT_R_GT__u20_as_u20_uu_od__multifilereader__HasError_GT_9has_error17hdbfde11eb446266dE
                        (*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x60));
      if (cVar5 == '\0') {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = puVar3;
        auVar8 = auVar8 << 0x40;
      }
      else {
        auVar8 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_0020aaa8
                 )(1);
      }
      goto LAB_00160990;
    }
    if (stack0xffffffffffffff70 != puVar3) {
      puVar6 = stack0xffffffffffffff70 + local_70;
      if (puVar3 <= stack0xffffffffffffff70 + local_70) {
        puVar6 = puVar3;
      }
      (*(code *)
        PTR__ZN5uu_od12inputdecoder13MemoryDecoder15zero_out_buffer17hff85fdbe658f0d31E_0020aa58)
                (local_98,stack0xffffffffffffff70,puVar6);
    }
    if ((stack0xffffffffffffff70 == puVar3) && ((bVar1 & 1) == 0)) {
      auVar8 = (*(code *)
                 PTR__ZN5uu_od12inputdecoder13MemoryDecoder10get_buffer17h6ffffd86399f7d36E_0020aa60
               )(local_98,0);
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he90fb1d056bd37a3E
                        (auVar8._0_8_,auVar8._8_8_,local_e0,local_d8);
      if (cVar5 == '\0') goto LAB_00160810;
      if (!bVar7) {
        local_c8 = &PTR_s_____002014e0;
        local_c0 = 1;
        local_b8 = (undefined8 **)&DAT_00000008;
        local_b0 = 0;
        uStack_a8 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0020aa68)(&local_c8);
      }
      bVar7 = true;
      *(undefined **)(param_1 + 0x10) = stack0xffffffffffffff70 + *(long *)(param_1 + 0x10);
      bVar2 = *param_1;
    }
    else {
LAB_00160810:
      if (stack0xffffffffffffff70 == puVar3) {
        (*(code *)
          PTR__ZN5uu_od12inputdecoder13MemoryDecoder12clone_buffer17h6bc6c0be48e80e27E_0020aa70)
                  (local_98,&local_e8);
      }
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18format_byte_offset17h2a35c86a9cc6c7a3E_0020aa78)
                (&local_c8,param_1);
      uVar4 = local_c0;
                    /* try { // try from 0016083b to 0016084e has its CatchHandler @ 001609ce */
      (*(code *)PTR__ZN5uu_od11print_bytes17h002eeb452f9cd45bE_0020aa80)
                (local_c0,local_b8,local_98,local_68);
      _ZN4core3ptr228drop_in_place_LT_uu_od__inputdecoder__InputDecoder_LT_uu_od__peekreader__PeekReader_LT_std__io__buffered__bufreader__BufReader_LT_uu_od__partialreader__PartialReader_LT_uu_od__multifilereader__MultifileReader_GT__GT__GT__GT__GT_17h547ec07d1cc16381E
                (local_c8,uVar4);
      bVar7 = false;
      *(undefined **)(param_1 + 0x10) = stack0xffffffffffffff70 + *(long *)(param_1 + 0x10);
      bVar2 = *param_1;
    }
    if ((bVar2 & 1) != 0) {
      param_1[0] = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      *(undefined **)(param_1 + 8) = stack0xffffffffffffff70 + *(long *)(param_1 + 8);
    }
  } while( true );
}