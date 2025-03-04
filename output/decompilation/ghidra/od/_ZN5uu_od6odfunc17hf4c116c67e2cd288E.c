undefined  [16] _ZN5uu_od6odfunc17hf4c116c67e2cd288E(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  undefined auVar6 [16];
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined local_a8 [12];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
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
  
  local_80 = 0;
  local_78 = 1;
  local_70 = 0;
  puVar1 = *(undefined **)(param_3 + 0x18);
  local_68 = *(long *)(param_3 + 0x28);
  cVar3 = *(char *)(param_3 + 0x30);
  bVar5 = false;
  do {
                    /* try { // try from 00176d90 to 00176e9d has its CatchHandler @ 00177038 */
    _ZN5uu_od12inputdecoder21InputDecoder_LT_I_GT_9peek_read17h15c7373ba30f8765E(&local_50,param_2);
    if ((char)uStack_38 == '\x03') {
      local_e0 = CONCAT44(uStack_4c,local_50);
                    /* try { // try from 00176eed to 00176fb8 has its CatchHandler @ 0017701a */
      _local_a8 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002471b0)();
      local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc9a28556c00b70f9E;
      local_d8 = (undefined **)&DAT_0023e9b8;
      local_d0 = 2;
      uStack_b8 = 0;
      local_c8 = &local_60;
      local_c0 = 1;
      local_60 = (undefined8 *)local_a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00247130)(&local_d8);
      local_a8._0_8_ = &local_e0;
      stack0xffffffffffffff60 =
           PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E_00247128
      ;
      local_d8 = (undefined **)&DAT_0023e9d8;
      local_d0 = 2;
      uStack_b8 = 0;
      local_c0 = 1;
      local_c8 = (undefined8 **)local_a8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00247130)(&local_d8);
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18print_final_offset17hf1e2d1b178ccd553E_002471b8)
                (param_1);
      auVar6 = (*(code *)
                 PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_002471c0
               )(1);
                    /* try { // try from 00176fc4 to 00176feb has its CatchHandler @ 00177018 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hf83c5d0e0950196bE(local_e0);
LAB_00176ff6:
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4081a2c3531f8222E(&local_80);
      return auVar6;
    }
    local_a8._4_4_ = uStack_4c;
    local_a8._0_4_ = local_50;
    stack0xffffffffffffff60 = (undefined *)CONCAT44(uStack_44,uStack_48);
    local_98 = local_40;
    uStack_94 = uStack_3c;
    uStack_90 = uStack_38;
    uStack_8c = uStack_34;
    if (stack0xffffffffffffff60 == (undefined *)0x0) {
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18print_final_offset17hf1e2d1b178ccd553E_002471b8)
                (param_1);
      cVar3 = _ZN91__LT_uu_od__peekreader__PeekReader_LT_R_GT__u20_as_u20_uu_od__multifilereader__HasError_GT_9has_error17hf0d7270850866a7bE
                        (*(undefined8 *)(param_2 + 0x18));
      if (cVar3 == '\0') {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = puVar1;
        auVar6 = auVar6 << 0x40;
      }
      else {
        auVar6 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_002471c0
                 )(1);
      }
      goto LAB_00176ff6;
    }
    if (stack0xffffffffffffff60 == puVar1) {
      if (cVar3 != '\0') {
LAB_00176e80:
        (*(code *)
          PTR__ZN5uu_od12inputdecoder13MemoryDecoder12clone_buffer17hf45ff84df60b2968E_00247198)
                  (local_a8,&local_80);
        goto LAB_00176e90;
      }
      auVar6 = (*(code *)
                 PTR__ZN5uu_od12inputdecoder13MemoryDecoder10get_buffer17he5dd43e20733f426E_00247180
               )(local_a8,0);
      cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc28cfc02f538ddcaE
                        (auVar6._0_8_,auVar6._8_8_,local_78,local_70);
      if (cVar2 == '\0') goto LAB_00176e80;
      if (!bVar5) {
        local_d8 = &PTR_s_____0023e9a8;
        local_d0 = 1;
        local_c8 = (undefined8 **)&DAT_00000008;
        local_c0 = 0;
        uStack_b8 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17he918bceb0c89db46E_00247188)(&local_d8);
        bVar5 = true;
      }
    }
    else {
      puVar4 = stack0xffffffffffffff60 + local_68;
      if (puVar1 <= stack0xffffffffffffff60 + local_68) {
        puVar4 = puVar1;
      }
      (*(code *)
        PTR__ZN5uu_od12inputdecoder13MemoryDecoder15zero_out_buffer17h21e27e94246f42e6E_00247190)
                (local_a8,stack0xffffffffffffff60,puVar4);
LAB_00176e90:
      (*(code *)
        PTR__ZN5uu_od11inputoffset11InputOffset18format_byte_offset17hff6b546ad3ee8d97E_002471a0)
                (&local_d8,param_1);
                    /* try { // try from 00176ea8 to 00176eb5 has its CatchHandler @ 00177029 */
      (*(code *)PTR__ZN5uu_od11print_bytes17h4e490ef4abfc23edE_002471a8)
                (local_d0,local_c8,local_a8,param_3);
                    /* try { // try from 00176eb6 to 00176ebf has its CatchHandler @ 00177038 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3ef5beaad2805a62E(&local_d8);
      bVar5 = false;
    }
    param_1[2] = (long)(stack0xffffffffffffff60 + param_1[2]);
    if (*param_1 != 0) {
      *param_1 = 1;
      param_1[1] = (long)(stack0xffffffffffffff60 + param_1[1]);
    }
  } while( true );
}