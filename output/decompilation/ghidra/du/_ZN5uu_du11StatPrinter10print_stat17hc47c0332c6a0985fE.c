undefined8
_ZN5uu_du11StatPrinter10print_stat17hc47c0332c6a0985fE(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_e0;
  code *pcStack_d8;
  undefined8 *local_d0;
  code *pcStack_c8;
  undefined8 **local_c0;
  code *local_b8;
  undefined8 **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 **local_70;
  code *local_68;
  undefined8 *local_58 [3];
  undefined local_40 [16];
  
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    _ZN5uu_du11StatPrinter12convert_size17he529e362fc7c1e00E(&local_e0,param_1,param_3);
    local_68 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_c0 = (undefined8 **)&DAT_00284660;
    local_b8 = (code *)0x2;
    local_a0 = 0;
    local_b0 = &local_70;
    uStack_a8 = 1;
                    /* try { // try from 001f36da to 001f36e4 has its CatchHandler @ 001f38b6 */
    local_70 = &local_e0;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_c0);
    pppuVar2 = &local_e0;
  }
  else {
    _ZN5uu_du13get_time_secs17h1feb665887cb0159E(&local_e0,*(char *)(param_1 + 0x4c),param_2);
    if (local_e0 != (undefined8 **)&DAT_00000005) {
      local_c0 = local_e0;
      local_b8 = pcStack_d8;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h19aedf1648b3dc3bE(&local_c0);
      return uVar1;
    }
    uVar1 = _ZN91__LT_std__time__SystemTime_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17hf5ff61e43d92dd3eE
                      (0,0,pcStack_d8,0);
    _ZN131__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h8f61e1a3c0275b73E
              (local_40,uVar1);
    local_e0 = *(undefined8 ***)(param_1 + 0x38);
    pcStack_d8 = *(code **)(param_1 + 0x40);
    local_d0 = (undefined8 *)0x8;
    pcStack_c8 = (code *)0x0;
    _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h1f9d15a4e22c3131E
              (&local_c0,local_40,&local_e0);
                    /* try { // try from 001f3766 to 001f3778 has its CatchHandler @ 001f38a7 */
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17he1f38f7d4828621bE
              (local_58,&local_c0);
                    /* try { // try from 001f3779 to 001f3795 has its CatchHandler @ 001f38c5 */
    _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h095f0f1eaac5abb6E
              (&local_c0);
    _ZN5uu_du11StatPrinter12convert_size17he529e362fc7c1e00E(&local_70,param_1,param_3);
    pcStack_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    pcStack_c8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
    local_c0 = (undefined8 **)&DAT_00284630;
    local_b8 = (code *)0x3;
    local_a0 = 0;
    uStack_a8 = 2;
                    /* try { // try from 001f37dd to 001f37e7 has its CatchHandler @ 001f3898 */
    local_e0 = &local_70;
    local_d0 = local_58;
    local_b0 = &local_e0;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_c0);
                    /* try { // try from 001f37e8 to 001f37f1 has its CatchHandler @ 001f38c5 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(&local_70);
    pppuVar2 = (undefined8 ***)local_58;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5d86c71ca1632ad3E(pppuVar2);
  uVar1 = _ZN6uucore4mods7display14print_verbatim17h5a0f023c7a40e453E(param_2 + 0x40);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0c3ea2d92ca0fe71E(uVar1);
  local_e0 = (undefined8 **)(param_1 + 0x4d);
  pcStack_d8 = 
  _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
  ;
  local_c0 = (undefined8 **)&DAT_0010f000;
  local_b8 = (code *)0x1;
  local_a0 = 0;
  local_b0 = &local_e0;
  uStack_a8 = 1;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_c0);
  return 0;
}