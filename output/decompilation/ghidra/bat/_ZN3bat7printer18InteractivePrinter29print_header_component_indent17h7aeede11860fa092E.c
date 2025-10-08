void _ZN3bat7printer18InteractivePrinter29print_header_component_indent17h7aeede11860fa092E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined **local_e0;
  code *local_d8;
  undefined **local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_48 [3];
  
  cVar2 = (*(code *)PTR__ZN3bat5style15StyleComponents4grid17h47e585e5c9942068E_00807a40)
                    (*(long *)(param_2 + 0x200) + 0xc0);
  if (cVar2 == '\0') {
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
              (&local_78,&DAT_0019ff9f,1,*(undefined8 *)(param_2 + 0x210));
    local_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_c0 = &DAT_0017f780;
    local_b8 = (undefined *)0x1;
    local_a0 = 0;
    local_b0 = &local_e0;
    local_a8 = 1;
                    /* try { // try from 0053f6fc to 0053f70c has its CatchHandler @ 0053f729 */
    local_e0 = &local_78;
    (*(code *)PTR__ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E_00807b20)
              (param_1,param_3,&local_c0);
    ppuVar3 = &local_78;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x210);
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h069f359f14668369E
              (local_48,&DAT_0019ff9f,1,lVar1);
    local_90 = *(undefined4 *)(param_2 + 0x220);
    uStack_8c = *(undefined4 *)(param_2 + 0x224);
    uStack_88 = *(undefined4 *)(param_2 + 0x228);
    uStack_84 = *(undefined4 *)(param_2 + 0x22c);
    local_80 = *(undefined *)(param_2 + 0x230);
    local_b8 = &DAT_00180ea4;
    if (lVar1 == 0) {
      local_b8 = (undefined *)0x1;
    }
    local_b0 = (undefined8 **)((ulong)(lVar1 != 0) << 2);
    local_c0 = (undefined *)0x8000000000000000;
    local_a8 = 0x8000000000000002;
    local_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_d0 = &local_c0;
    local_c8 = 
    PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
    ;
    local_78 = &DAT_00185820;
    local_70 = 2;
    local_58 = 0;
    local_68 = &local_e0;
    local_60 = 2;
                    /* try { // try from 0053f674 to 0053f684 has its CatchHandler @ 0053f73c */
    local_e0 = local_48;
    (*(code *)PTR__ZN3bat6output12OutputHandle9write_fmt17hec1e6f03d02f41b4E_00807b20)
              (param_1,param_3,&local_78);
    _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
              (&local_c0);
    ppuVar3 = local_48;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(ppuVar3);
  return;
}