undefined8 *
_ZN7flealib10fileserver10FileServer16change_directory17h46ba8243e2a4185eE
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 *local_178;
  code *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 *local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  uint local_c0;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_168,param_3,param_4);
  puVar3 = local_158;
  uVar1 = CONCAT44(uStack_15c,uStack_160);
  local_148 = (undefined8 *)((ulong)local_148._4_4_ << 0x20);
  uVar5 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_148);
                    /* try { // try from 0047aedb to 0047aeea has its CatchHandler @ 0047b345 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_f8,uVar5);
  local_178 = local_e8;
  local_188 = local_f8;
  uStack_180 = (code *)uStack_f0;
                    /* try { // try from 0047af09 to 0047af13 has its CatchHandler @ 0047b31f */
  cVar4 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h57cc45937a75ced8E
                    (uStack_f0,local_e8,uVar1,puVar3);
  if (cVar4 == '\0') {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
    local_188 = "/";
    uStack_180 = (code *)
                 PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h1abb60216f8bb06dE_00827788
    ;
    local_170 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_f8 = "\x01";
    uStack_f0 = (undefined8 *)0x2;
    local_d8 = 0;
    local_e0 = 2;
    local_178 = &local_168;
    local_e8 = (undefined4 *)&local_188;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_110,&local_f8);
                    /* try { // try from 0047afa5 to 0047afae has its CatchHandler @ 0047b2e2 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_168);
    local_158 = local_100;
    local_168 = local_110;
    uStack_164 = uStack_10c;
    uStack_160 = uStack_108;
    uStack_15c = uStack_104;
  }
  else {
                    /* try { // try from 0047af18 to 0047afa4 has its CatchHandler @ 0047b345 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
  }
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  local_148 = (undefined8 *)((ulong)local_148 & 0xffffffff00000000);
  uVar6 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_148);
                    /* try { // try from 0047afe8 to 0047aff7 has its CatchHandler @ 0047b345 */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_f8,uVar6);
  local_178 = local_e8;
  local_188 = local_f8;
  uStack_180 = (code *)uStack_f0;
                    /* try { // try from 0047b016 to 0047b020 has its CatchHandler @ 0047b312 */
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h7ff1b9328b1378bcE
                    (uVar1,uVar5,uStack_f0);
  if (cVar4 == '\0') {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
  }
  else {
                    /* try { // try from 0047b029 to 0047b061 has its CatchHandler @ 0047b345 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
    puVar3 = local_158;
    uVar1 = CONCAT44(uStack_15c,uStack_160);
    local_148 = (undefined8 *)((ulong)local_148 & 0xffffffff00000000);
    uVar5 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_148);
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_f8,uVar5);
    local_178 = local_e8;
    local_188 = local_f8;
    uStack_180 = (code *)uStack_f0;
                    /* try { // try from 0047b080 to 0047b092 has its CatchHandler @ 0047b2d5 */
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hc91b576f7ea4e5c5E
              (&local_f8,uVar1,puVar3,uStack_f0);
                    /* try { // try from 0047b093 to 0047b09c has its CatchHandler @ 0047b2b6 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_168);
    local_158 = local_e8;
    local_168 = (int)local_f8;
    uStack_164 = local_f8._4_4_;
    uStack_160 = (undefined4)uStack_f0;
    uStack_15c = uStack_f0._4_4_;
                    /* try { // try from 0047b0b7 to 0047b141 has its CatchHandler @ 0047b345 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_188);
  }
  uStack_180 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49740bff2e11fb82E;
  local_170 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
  local_f8 = &DAT_00150610;
  uStack_f0 = (undefined8 *)0x2;
  local_d8 = 0;
  local_e0 = 2;
  local_188 = (char *)&local_148;
  local_178 = &local_168;
  local_148 = param_2;
  local_e8 = (undefined4 *)&local_188;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_48,&local_f8);
  local_128 = local_48;
  uStack_124 = uStack_44;
  uStack_120 = uStack_40;
  uStack_11c = uStack_3c;
  local_118 = local_38;
                    /* try { // try from 0047b161 to 0047b173 has its CatchHandler @ 0047b303 */
  _ZN3std2fs8metadata17h198ddbb2419bae71E(&local_f8,CONCAT44(uStack_3c,uStack_40),local_38);
  if ((int)local_f8 == 2) {
    local_148 = uStack_f0;
                    /* try { // try from 0047b18b to 0047b197 has its CatchHandler @ 0047b2a7 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
              (&local_188,&local_148);
    param_1[2] = local_178;
    *(int *)param_1 = (int)local_188;
    *(undefined4 *)((long)param_1 + 4) = local_188._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_180;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_180._4_4_;
                    /* try { // try from 0047b1a8 to 0047b1f4 has its CatchHandler @ 0047b32c */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_148);
  }
  else if ((local_c0 & 0xf000) == 0x4000) {
    (*(code *)
      PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
    )(&local_188,CONCAT44(uStack_3c,uStack_40),local_38);
    if ((int)local_188 == 1) {
                    /* try { // try from 0047b27e to 0047b28a has its CatchHandler @ 0047b32c */
      (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)
                (&PTR_s_flealib_src_fileserver_rs_00809928);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_188,uStack_180,local_178);
    local_138 = local_178;
    local_148 = (undefined8 *)local_188;
    uStack_140 = (undefined4)uStack_180;
    uStack_13c = uStack_180._4_4_;
                    /* try { // try from 0047b208 to 0047b20f has its CatchHandler @ 0047b28d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(param_2);
    param_2[2] = local_138;
    *(undefined4 *)param_2 = (undefined4)local_148;
    *(uint *)((long)param_2 + 4) = local_148._4_4_;
    *(undefined4 *)(param_2 + 1) = uStack_140;
    *(undefined4 *)((long)param_2 + 0xc) = uStack_13c;
    *param_1 = 0x8000000000000000;
  }
  else {
                    /* try { // try from 0047b231 to 0047b244 has its CatchHandler @ 0047b32c */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_188,"Not a directory",0xf);
    param_1[2] = local_178;
    *(int *)param_1 = (int)local_188;
    *(undefined4 *)((long)param_1 + 4) = local_188._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_180;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_180._4_4_;
  }
                    /* try { // try from 0047b255 to 0047b25e has its CatchHandler @ 0047b2fe */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_128);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_168);
  return param_1;
}