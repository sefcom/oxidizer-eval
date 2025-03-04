void _ZN5uu_od11print_bytes17h4e490ef4abfc23edE(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long *local_160;
  code *local_158;
  undefined **local_150;
  code *local_148;
  undefined **local_140;
  undefined8 local_138;
  undefined *local_130;
  long local_128;
  long **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined local_c8;
  ulong local_c0;
  undefined *local_b8;
  code *local_b0;
  long **local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  long local_58;
  long local_50;
  undefined *local_48 [3];
  
  local_58 = *(long *)(param_4 + 8);
  local_50 = *(long *)(param_4 + 0x10) * 0x68 + local_58;
  local_88 = param_1;
  local_80 = param_2;
  plVar5 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4e96e50d1a7b5efE
                             (&local_58);
  if (plVar5 != (long *)0x0) {
    local_c0 = *(ulong *)(param_3 + 8);
    local_60 = *(ulong *)(param_4 + 0x20);
    uVar1 = *(ulong *)(param_4 + 0x28);
    bVar3 = true;
    do {
      local_78 = 0;
      local_70 = 1;
      local_68 = 0;
      if (local_c0 != 0) {
        if (uVar1 == 0) {
          uVar6 = _ZN4core9panicking11panic_const23panic_const_rem_by_zero17h9246b1d1945ea5ddE
                            (&PTR_s_src_uu_od_src_od_rs_002417f0);
                    /* catch() { ... } // from try @ 001c8174 with catch @ 001c8370 */
                    /* try { // try from 001c8373 to 001c83c2 has its CatchHandler @ 001c83cb */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(local_48);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_78);
          _Unwind_Resume(uVar6);
          return;
        }
        uVar8 = 0;
        do {
          if ((uVar8 | uVar1) >> 0x20 == 0) {
            uVar7 = (uVar8 & 0xffffffff) % (uVar1 & 0xffffffff);
          }
          else {
            uVar7 = uVar8 % uVar1;
          }
          if (7 < uVar7) {
                    /* try { // try from 001c8349 to 001c836f has its CatchHandler @ 001c83b1 */
                    /* WARNING: Subroutine does not return */
            _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                      (uVar7,8,&PTR_s_src_uu_od_src_od_rs_00241808);
          }
          local_a8 = (long **)plVar5[uVar7 + 4];
          local_b8 = &DAT_0010dad0;
          local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
          local_a0 = 0;
          local_130 = (undefined *)0x2;
          local_120 = (long **)&DAT_00000001;
          local_118 = 1;
          local_110 = 0;
          local_108 = 0x20;
          local_100 = 1;
          local_160 = (long *)&DAT_0010dad0;
          local_158 = (code *)0x1;
          local_138 = 1;
          local_150 = &local_b8;
          local_148 = (code *)0x2;
                    /* try { // try from 001c7f2c to 001c7f75 has its CatchHandler @ 001c83b3 */
          local_140 = &local_130;
          uVar4 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h2395a5f306767c17E
                            (&local_78,&local_160);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6060708d4774fdb0E
                    (uVar4,&PTR_s_src_uu_od_src_od_rs_00241820);
          pcVar2 = (code *)plVar5[1];
          if (*plVar5 == 2) {
            uVar6 = _ZN5uu_od12inputdecoder13MemoryDecoder15get_full_buffer17hbd44b98530cf6814E
                              (param_3,uVar8);
            (*pcVar2)(&local_130,uVar6);
            uVar6 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h2f8c5b40bc40bd5dE
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c7fc8 to 001c7fd2 has its CatchHandler @ 001c83a2 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h35da95ead3d0349fE(&local_78,uVar6);
                    /* try { // try from 001c7fd3 to 001c7ff9 has its CatchHandler @ 001c83b3 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_130)
            ;
          }
          else if ((int)*plVar5 == 1) {
            _ZN5uu_od12inputdecoder13MemoryDecoder10read_float17hb631d528abcb6236E
                      (param_3,uVar8,plVar5[2]);
            (*pcVar2)(&local_130);
            uVar6 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h2f8c5b40bc40bd5dE
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c7f88 to 001c7f92 has its CatchHandler @ 001c8384 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h35da95ead3d0349fE(&local_78,uVar6);
                    /* try { // try from 001c7f93 to 001c7fb5 has its CatchHandler @ 001c83b3 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_130)
            ;
          }
          else {
            uVar6 = _ZN5uu_od12inputdecoder13MemoryDecoder9read_uint17h33796a139b376ce0E
                              (param_3,uVar8,plVar5[2]);
            (*pcVar2)(&local_130,uVar6);
            uVar6 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h2f8c5b40bc40bd5dE
                              (local_128,(undefined *)((long)local_120 + local_128));
                    /* try { // try from 001c800c to 001c8016 has its CatchHandler @ 001c8393 */
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h35da95ead3d0349fE(&local_78,uVar6);
                    /* try { // try from 001c8017 to 001c801e has its CatchHandler @ 001c83b3 */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_130)
            ;
          }
          uVar8 = uVar8 + plVar5[2];
        } while (uVar8 < local_c0);
      }
      if (*(char *)(plVar5 + 0xc) != '\0') {
                    /* try { // try from 001c804d to 001c8082 has its CatchHandler @ 001c8382 */
        uVar8 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17hc7941fd67a47c62aE
                          (local_70,local_68 + local_70);
        ppuVar9 = (undefined **)(local_60 - uVar8);
        if (local_60 < uVar8) {
          ppuVar9 = (undefined **)0x0;
        }
        uVar6 = _ZN5uu_od12inputdecoder13MemoryDecoder10get_buffer17he5dd43e20733f426E(param_3,0);
        _ZN5uu_od8prn_char17format_ascii_dump17h253c6e9b0061c235E(local_48,uVar6);
        local_160 = (long *)&DAT_0010dad0;
        local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
        local_150 = local_48;
        local_148 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
        local_138 = 0;
        local_130 = (undefined *)0x2;
        local_120 = (long **)&DAT_00000001;
        local_118 = 2;
        local_110 = 0;
        local_108 = 0x20;
        local_100 = 1;
        local_f8 = 2;
        local_e8 = 2;
        local_d8 = 1;
        local_d0 = 0x20;
        local_c8 = 3;
        local_b8 = &DAT_002417b8;
        local_b0 = (code *)0x2;
        local_90 = 2;
        local_a8 = &local_160;
        local_a0 = 3;
                    /* try { // try from 001c8174 to 001c8192 has its CatchHandler @ 001c8370 */
        local_140 = ppuVar9;
        local_98 = &local_130;
        uVar4 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17h2395a5f306767c17E
                          (&local_78,&local_b8);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h6060708d4774fdb0E
                  (uVar4,&PTR_s_src_uu_od_src_od_rs_002417d8);
                    /* try { // try from 001c8193 to 001c8315 has its CatchHandler @ 001c8382 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(local_48);
      }
      if (bVar3) {
        local_160 = &local_88;
        local_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
        local_130 = &DAT_0010dad0;
        local_128 = 1;
        local_110 = 0;
        local_120 = &local_160;
        local_118 = 1;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_130);
        bVar3 = false;
      }
      else {
        local_a8 = (long **)_ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17hc7941fd67a47c62aE
                                      (local_88,local_80 + local_88);
        local_b8 = &DAT_0010dad0;
        local_b0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49e5a621c8f1f534E;
        local_a0 = 0;
        local_130 = (undefined *)0x2;
        local_120 = (long **)0x1;
        local_118 = 1;
        local_110 = 0;
        local_108 = 0x20;
        local_100 = 1;
        local_160 = (long *)&DAT_0010dad0;
        local_158 = (code *)0x1;
        local_138 = 1;
        local_150 = &local_b8;
        local_148 = (code *)0x2;
        local_140 = &local_130;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_160);
      }
      local_158 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
      local_130 = &DAT_00241798;
      local_128 = 2;
      local_110 = 0;
      local_120 = &local_160;
      local_118 = 1;
      local_160 = &local_78;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_130);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h265121219f172febE(&local_78);
      plVar5 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4e96e50d1a7b5efE
                                 (&local_58);
    } while (plVar5 != (long *)0x0);
  }
  return;
}