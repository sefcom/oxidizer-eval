void _ZN5uu_od11print_bytes17h002eeb452f9cd45bE
               (undefined *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined **local_110;
  code *local_108;
  undefined ***local_100;
  code *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  uint local_dc;
  undefined **local_d8;
  code *local_d0;
  undefined ***local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined **local_68;
  code *local_60;
  undefined8 local_58;
  undefined2 local_50;
  ulong local_48;
  long *local_40;
  long *local_38;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    local_40 = *(long **)(param_4 + 8) + *(long *)(param_4 + 0x10) * 0xd;
    local_a0 = *param_3;
    local_98 = param_3[1];
    local_48 = *(ulong *)(param_4 + 0x20);
    uVar2 = *(ulong *)(param_4 + 0x28);
    uVar1 = *(undefined *)(param_3 + 3);
    local_dc = 1;
    plVar9 = *(long **)(param_4 + 8);
    local_a8 = param_3;
    local_90 = param_1;
    local_88 = param_2;
    do {
      local_38 = plVar9 + 0xd;
      local_80 = (undefined *)0x0;
      local_78 = 1;
      local_70 = 0;
      if (local_98 != 0) {
        if (uVar2 == 0) {
          (*(code *)
            PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_0020ad20
          )(&PTR_s_src_uu_od_src_od_rs_00203a88);
          goto LAB_0016dc95;
        }
        uVar7 = 0;
        do {
          if ((uVar7 | uVar2) >> 0x20 == 0) {
            uVar6 = (uVar7 & 0xffffffff) % (uVar2 & 0xffffffff);
          }
          else {
            uVar6 = uVar7 % uVar2;
          }
          if (7 < uVar6) {
                    /* try { // try from 0016dc6e to 0016dc94 has its CatchHandler @ 0016dcd0 */
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0020a9f0)
                      (uVar6,8,&PTR_s_src_uu_od_src_od_rs_00203aa0);
            goto LAB_0016dc95;
          }
          if (0xffff < (ulong)plVar9[uVar6 + 4]) {
            ppuVar8 = &PTR_s_src_uu_od_src_od_rs_00203ad0;
            goto LAB_0016dbfe;
          }
          local_68 = (undefined **)&DAT_0011a940;
          local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
          local_58 = 0;
          local_50 = (undefined2)plVar9[uVar6 + 4];
          local_d8 = (undefined **)&DAT_0011a940;
          local_d0 = (code *)0x1;
          local_b8 = &DAT_0011d2a8;
          local_b0 = 1;
          local_c8 = &local_68;
          local_c0 = 2;
                    /* try { // try from 0016d88c to 0016d8db has its CatchHandler @ 0016dca9 */
          uVar4 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hb6f56adf937e549cE
                            (&local_80,&local_d8);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8164cbac40e1d6d3E
                    (uVar4,&PTR_s_src_uu_od_src_od_rs_00203ab8);
          pcVar3 = (code *)plVar9[1];
          if (*plVar9 == 0) {
                    /* try { // try from 0016d905 to 0016d91f has its CatchHandler @ 0016dca9 */
            uVar5 = _ZN5uu_od12inputdecoder13MemoryDecoder9read_uint17h820c719160ea830fE
                              (local_a0,uVar1,uVar7,plVar9[2]);
            (*pcVar3)(&local_110,uVar5);
                    /* try { // try from 0016d92d to 0016d934 has its CatchHandler @ 0016dc9f */
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6f45b21ab07ea0a9E
                      (&local_80,local_108,(code *)((long)local_100 + (long)local_108));
          }
          else if ((int)*plVar9 == 1) {
            _ZN5uu_od12inputdecoder13MemoryDecoder10read_float17h83569d197b443106E
                      (local_a0,uVar1,uVar7,plVar9[2]);
            (*pcVar3)(&local_110);
                    /* try { // try from 0016d8e9 to 0016d8f0 has its CatchHandler @ 0016dc9b */
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6f45b21ab07ea0a9E
                      (&local_80,local_108,(code *)((long)local_100 + (long)local_108));
          }
          else {
                    /* try { // try from 0016d940 to 0016d955 has its CatchHandler @ 0016dca9 */
            uVar5 = _ZN5uu_od12inputdecoder13MemoryDecoder15get_full_buffer17h08ddd83f2f5580c1E
                              (local_a8,uVar7);
            (*pcVar3)(&local_110,uVar5);
                    /* try { // try from 0016d963 to 0016d96a has its CatchHandler @ 0016dc9d */
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h6f45b21ab07ea0a9E
                      (&local_80,local_108,(code *)((long)local_100 + (long)local_108));
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_110);
          uVar7 = uVar7 + plVar9[2];
        } while (uVar7 < local_98);
      }
      if (*(char *)(plVar9 + 0xc) != '\0') {
                    /* try { // try from 0016d98f to 0016d9c4 has its CatchHandler @ 0016dc99 */
        uVar7 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                          (local_78,local_70 + local_78);
        uVar6 = local_48 - uVar7;
        if (local_48 < uVar7) {
          uVar6 = 0;
        }
        uVar5 = (*(code *)
                  PTR__ZN5uu_od12inputdecoder13MemoryDecoder10get_buffer17h6ffffd86399f7d36E_0020aa60
                )(local_a8,0);
        _ZN5uu_od8prn_char17format_ascii_dump17h58e8947baefac050E(&local_68,uVar5);
        if (0xffff < uVar6) {
          local_110 = &PTR_s_Formatting_argument_out_of_range_002038d8;
          local_108 = (code *)0x1;
          local_100 = (undefined ***)&DAT_00000008;
          local_f8 = (code *)0x0;
          puStack_f0 = (undefined *)0x0;
                    /* try { // try from 0016dc51 to 0016dc62 has its CatchHandler @ 0016dcab */
          (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)
                    (&local_110,&PTR_s_src_uu_od_src_od_rs_00203a70);
          goto LAB_0016dc95;
        }
        local_110 = (undefined **)&DAT_0011a940;
        local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
        local_100 = &local_68;
        local_f8 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        puStack_f0 = (undefined *)0x0;
        local_e8 = CONCAT62(local_e8._2_6_,(short)uVar6);
        local_d8 = (undefined **)&DAT_00203a20;
        local_d0 = (code *)0x2;
        local_b8 = &DAT_0011df20;
        local_b0 = 2;
        local_c0 = 3;
                    /* try { // try from 0016da49 to 0016da64 has its CatchHandler @ 0016dc97 */
        local_c8 = &local_110;
        uVar4 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hb6f56adf937e549cE
                          (&local_80,&local_d8);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8164cbac40e1d6d3E
                  (uVar4,&PTR_s_src_uu_od_src_od_rs_00203a40);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_68);
      }
      if ((local_dc & 1) == 0) {
        uVar7 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                          (local_90,local_90 + local_88);
        if (0xffff < uVar7) {
          ppuVar8 = &PTR_s_src_uu_od_src_od_rs_00203a58;
LAB_0016dbfe:
          local_110 = &PTR_s_Formatting_argument_out_of_range_002038d8;
          local_108 = (code *)0x1;
          local_100 = (undefined ***)&DAT_00000008;
          local_f8 = (code *)0x0;
          puStack_f0 = (undefined *)0x0;
                    /* try { // try from 0016dc20 to 0016dc28 has its CatchHandler @ 0016dcd0 */
          (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0020a9b0)
                    (&local_110,ppuVar8);
LAB_0016dc95:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        local_d8 = (undefined **)&DAT_0011a940;
        local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
        local_c8 = (undefined ***)0x0;
        local_c0 = CONCAT62(local_c0._2_6_,(short)uVar7);
        local_110 = (undefined **)&DAT_0011a940;
        local_108 = (code *)0x1;
        puStack_f0 = &DAT_0011d2a8;
        local_e8 = 1;
        local_100 = &local_d8;
        local_f8 = (code *)0x2;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0020aa68)(&local_110);
      }
      else {
        local_d8 = &local_90;
        local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
        local_110 = (undefined **)&DAT_0011a940;
        local_108 = (code *)0x1;
        puStack_f0 = (undefined *)0x0;
        local_100 = &local_d8;
        local_f8 = (code *)0x1;
                    /* try { // try from 0016dac3 to 0016dbb3 has its CatchHandler @ 0016dc99 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0020aa68)(&local_110);
      }
      local_d0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_110 = (undefined **)&DAT_00202418;
      local_108 = (code *)0x2;
      puStack_f0 = (undefined *)0x0;
      local_100 = &local_d8;
      local_f8 = (code *)0x1;
      local_d8 = &local_80;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0020aa68)(&local_110);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ecbbb68ed17b0f1E(&local_80);
      local_dc = 0;
      plVar9 = local_38;
    } while (local_38 != local_40);
  }
  return;
}