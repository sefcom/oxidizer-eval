void _ZN12uu_dircolors5parse17h163ac6b47826303eE
               (undefined8 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  bool bVar12;
  char cVar13;
  undefined auVar14 [16];
  undefined local_200 [16];
  undefined8 local_1f0;
  undefined8 **local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  long local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined local_168;
  int local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  long local_140;
  long local_138;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined *local_60;
  long *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_f8 = param_2;
                    /* try { // try from 0015e840 to 0015e862 has its CatchHandler @ 0015ef94 */
  local_200 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17ha8abe563750e5762E
                        (0x6fe,1,1,&PTR_s__home_34r7hm4n__rustup_toolchain_001f4f30);
  local_1f0 = 0;
                    /* try { // try from 0015e876 to 0015e886 has its CatchHandler @ 0015ef6d */
  (*(code *)PTR__ZN12uu_dircolors25get_colors_format_strings17h31238be5fa82f8cfE_001fe060)
            (&local_160,param_3);
  local_1c0 = CONCAT44(uStack_15c,local_160);
  local_1b8 = CONCAT44(uStack_154,local_158);
  local_1c8 = local_148;
  local_c8 = local_138;
                    /* try { // try from 0015e8cc to 0015e91f has its CatchHandler @ 0015efc3 */
  local_1b0 = local_140;
  _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h41789321aeb99812E
            (local_200,local_1b8,CONCAT44(uStack_14c,uStack_150) + local_1b8);
  _ZN3std3env3var17hd4d33a07491f9aeaE(&local_160,&DAT_0011a36c,4);
  if (local_160 == 1) {
    _ZN12uu_dircolors5parse28__u7b__u7b_closure_u7d__u7d_17h3c0c1a327880a39dE
              (&local_1a8,CONCAT44(uStack_154,local_158),CONCAT44(uStack_14c,uStack_150));
  }
  else {
    local_198 = local_148;
    local_1a8 = local_158;
    uStack_1a4 = uStack_154;
    uStack_1a0 = uStack_150;
    uStack_19c = uStack_14c;
  }
                    /* try { // try from 0015e941 to 0015e976 has its CatchHandler @ 0015ef56 */
  local_1d0 = param_1;
  local_188 = param_3;
  local_e0 = param_4;
  local_d8 = param_5;
  _ZN3std3env3var17hd4d33a07491f9aeaE(&local_160,"COLORTERM",9);
  _ZN4core6result19Result_LT_T_C_E_GT_17unwrap_or_default17h0a98fee9011ad073E(&local_c0,&local_160);
  _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h779c9daaa13168a7E
            (&local_128,param_2);
  _ZN4core4iter6traits8iterator8Iterator9enumerate17h54553eecb6857241E(&local_160,&local_128);
  puVar2 = 
  PTR__ZN46__LT_str_u20_as_u20_uu_dircolors__StrUtils_GT_6purify17hd71191958d806867E_001fe068;
  local_190 = local_b0;
  uVar1 = CONCAT44(uStack_19c,uStack_1a0);
  local_d0 = local_198;
  bVar12 = false;
  cVar13 = '\0';
LAB_0015ea10:
  do {
                    /* try { // try from 0015ea10 to 0015ea1a has its CatchHandler @ 0015efda */
    _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17haf4ef5462351ecf7E
              (&local_88,&local_160);
    uVar8 = local_78;
    lVar5 = local_80;
    if (local_80 == -0x8000000000000000) {
      _ZN4core3ptr282drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map_while__MapWhile_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__C_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT___ok_GT__GT__GT_17hefe10b90d18057c1E
                (&local_160);
      if (*local_188 == '\x02') {
        _ZN5alloc6string6String3pop17h86cb5b5bb86d0e70E(local_200);
      }
      lVar5 = local_1b0;
                    /* try { // try from 0015ed1a to 0015ed26 has its CatchHandler @ 0015ef4e */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h41789321aeb99812E
                (local_200,local_1b0,local_c8 + local_1b0);
      local_1d0[3] = local_1f0;
      *(undefined4 *)(local_1d0 + 1) = local_200._0_4_;
      *(undefined4 *)((long)local_1d0 + 0xc) = local_200._4_4_;
      *(undefined4 *)(local_1d0 + 2) = local_200._8_4_;
      *(undefined4 *)((long)local_1d0 + 0x14) = local_200._12_4_;
      *local_1d0 = 0;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                (local_c0,local_b8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                (CONCAT44(uStack_1a4,local_1a8),uVar1);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E(local_1c8,lVar5);
      auVar14._8_8_ = local_1b8;
      auVar14._0_8_ = local_1c0;
LAB_0015ed80:
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                (auVar14._0_8_,auVar14._8_8_);
      return;
    }
    local_a8 = local_88 + 1;
    auVar14 = _ZN5alloc3str83__LT_impl_u20_core__borrow__Borrow_LT_str_GT__u20_for_u20_alloc__string__String_GT_6borrow17ha1888a208b370400E
                        (local_78,local_70);
                    /* try { // try from 0015ea61 to 0015ea69 has its CatchHandler @ 0015efca */
    auVar14 = (*(code *)puVar2)(auVar14._0_8_,auVar14._8_8_);
    if (auVar14._8_8_ != 0) {
                    /* try { // try from 0015ea7c to 0015ea8c has its CatchHandler @ 0015ef4c */
      (*(code *)PTR__ZN12uu_dircolors6escape17h43afab8edf490a36E_001fe070)(&local_a0,auVar14._0_8_);
                    /* try { // try from 0015ea9d to 0015eb00 has its CatchHandler @ 0015efac */
      local_1d8 = local_98;
      (*(code *)
        PTR__ZN46__LT_str_u20_as_u20_uu_dircolors__StrUtils_GT_9split_two17h677a64120490298fE_001fe078
      )(&local_128,local_98,local_90);
      if (local_110 == 0) {
        local_180 = 0;
        local_178 = local_e0;
        local_170 = local_d8;
        local_168 = 0;
        local_68 = &local_180;
        local_60 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fe098
        ;
        local_58 = &local_a8;
        local_50 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_001fe0a0
        ;
        local_128 = &DAT_001f4f00;
        local_120 = 3;
        local_108 = 0;
        uStack_118 = &local_68;
        local_110 = 2;
                    /* try { // try from 0015ee4c to 0015ee60 has its CatchHandler @ 0015ef33 */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h53cf05d23a4dbe8cE(&local_48,&local_128);
        local_1d0[3] = local_38;
        *(undefined4 *)(local_1d0 + 1) = local_48;
        *(undefined4 *)((long)local_1d0 + 0xc) = uStack_44;
        *(undefined4 *)(local_1d0 + 2) = uStack_40;
        *(undefined4 *)((long)local_1d0 + 0x14) = uStack_3c;
        *local_1d0 = 1;
LAB_0015ee85:
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                  (local_a0,local_1d8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E(lVar5,uVar8);
        _ZN4core3ptr282drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_core__iter__adapters__map_while__MapWhile_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__C_core__result__Result_LT_alloc__string__String_C_std__io__error__Error_GT___ok_GT__GT__GT_17hefe10b90d18057c1E
                  (&local_160);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                  (local_c0,local_b8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                  (CONCAT44(uStack_1a4,local_1a8),uVar1);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                  (local_1c8,local_1b0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                  (local_1c0,local_1b8);
        auVar14 = local_200;
        goto LAB_0015ed80;
      }
      local_1e0 = local_110;
      local_1e8 = uStack_118;
      local_e8 = local_128;
      local_f0 = local_120;
      (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_001fe080)
                (&local_180);
      uVar7 = local_170;
      uVar6 = local_178;
      cVar10 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4bb8f6e1f67b4157E
                         (local_178,local_170,&DAT_0011a248,4);
      bVar9 = bVar12;
      if (cVar10 == '\0') {
        cVar10 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4bb8f6e1f67b4157E
                           (uVar6,uVar7,"colorterm",9);
        lVar4 = local_1e0;
        ppuVar3 = local_1e8;
        if (cVar10 == '\0') {
          if (cVar13 == '\x01') {
            cVar13 = '\x02';
          }
          if (cVar13 == '\x03') {
            cVar10 = '\x03';
          }
          else {
            (*(code *)PTR__ZN12uu_dircolors12append_entry17haa18374ab1d5b18dE_001fe090)
                      (&local_128,local_200,local_188,local_e8,local_f0,uVar6,uVar7,local_1e8,
                       local_1e0);
            cVar10 = cVar13;
            if (local_128 != (undefined *)0x8000000000000000) {
              *(undefined4 *)(local_1d0 + 2) = (undefined4)local_120;
              *(undefined4 *)((long)local_1d0 + 0x14) = local_120._4_4_;
              *(undefined4 *)(local_1d0 + 3) = (undefined4)uStack_118;
              *(undefined4 *)((long)local_1d0 + 0x1c) = uStack_118._4_4_;
              local_1d0[1] = local_128;
              *local_1d0 = 1;
              _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                        (local_180,uVar6);
              goto LAB_0015ee85;
            }
          }
        }
        else {
          cVar10 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4bb8f6e1f67b4157E
                             (local_1e8,local_1e0,"?*",2);
          if (cVar10 == '\0') {
            cVar11 = (*(code *)
                       PTR__ZN46__LT_str_u20_as_u20_uu_dircolors__StrUtils_GT_7fnmatch17hd0959e399c94f5daE_001fe088
                     )(local_b8,local_190,ppuVar3,lVar4);
            cVar10 = '\x01';
            bVar9 = true;
            if (cVar11 == '\0') goto LAB_0015ec1a;
          }
          else {
            cVar10 = '\x01';
            bVar9 = true;
            if (local_190 == 0) {
LAB_0015ec1a:
              cVar10 = '\x03';
              if (cVar13 != '\0') {
                cVar10 = cVar13;
              }
              bVar9 = bVar12;
              if (bVar12) {
                cVar10 = cVar13;
              }
            }
          }
        }
      }
      else {
                    /* try { // try from 0015eb31 to 0015ec79 has its CatchHandler @ 0015ef35 */
        cVar11 = (*(code *)
                   PTR__ZN46__LT_str_u20_as_u20_uu_dircolors__StrUtils_GT_7fnmatch17hd0959e399c94f5daE_001fe088
                 )(uVar1,local_d0,local_1e8,local_1e0);
        cVar10 = '\x01';
        if ((cVar11 == '\0') && (cVar10 = cVar13, cVar13 == '\0')) {
          cVar10 = '\x03';
        }
      }
      bVar12 = bVar9;
      cVar13 = cVar10;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E(local_180,uVar6);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E
                (local_a0,local_1d8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E(lVar5,uVar8);
      goto LAB_0015ea10;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h939af750951fcfd0E(lVar5,uVar8);
  } while( true );
}