void _ZN9alacritty5input22Processor_LT_T_C_A_GT_19normal_mouse_report17hbfc2b27746782bc2E
               (undefined8 param_1,long param_2,ulong param_3,int param_4,char param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (param_2);
  uVar1 = *(uint *)(param_2 + 0x6dc);
  uVar3 = 0xdf;
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = 0x7df;
  }
  if (param_3 < uVar3 && param_4 < (int)uVar3) {
    uStack_38 = (undefined2 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,4,0);
    if (uStack_38 == (undefined2 *)0x0) {
      uVar2 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_009de8b0)(1,4);
                    /* catch() { ... } // from try @ 00559892 with catch @ 00559903 */
                    /* catch() { ... } // from try @ 0055983d with catch @ 00559905 */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE(&local_58);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE(&local_40);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    bVar4 = (byte)(uVar1 >> 0xe) & 1;
    *uStack_38 = 0x5b1b;
    *(undefined *)(uStack_38 + 1) = 0x4d;
    *(char *)((long)uStack_38 + 3) = param_5 + ' ';
    local_40 = 4;
    local_30 = 4;
    if ((0x5e < param_3 & bVar4) == 0) {
                    /* try { // try from 0055985e to 00559887 has its CatchHandler @ 00559922 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (&local_40,(char)param_3 + '!',&PTR_DAT_00982d80);
    }
    else {
                    /* try { // try from 00559828 to 00559832 has its CatchHandler @ 00559922 */
      _ZN9alacritty5input22Processor_LT_T_C_A_GT_19normal_mouse_report28__u7b__u7b_closure_u7d__u7d_17h3419623e3f24a613E
                (&local_58,param_3);
                    /* try { // try from 0055983d to 00559846 has its CatchHandler @ 00559905 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h227b37816228bbe4E
                (&local_40,CONCAT44(uStack_4c,uStack_50),local_48);
      local_48 = 0;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE(&local_58);
    }
    if ((0x5e < param_4 & bVar4) == 0) {
                    /* try { // try from 005598b3 to 005598c7 has its CatchHandler @ 00559922 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd6373653790597aE
                (&local_40,(char)param_4 + '!',&PTR_DAT_00982d98);
    }
    else {
      _ZN9alacritty5input22Processor_LT_T_C_A_GT_19normal_mouse_report28__u7b__u7b_closure_u7d__u7d_17h3419623e3f24a613E
                (&local_58,param_4);
                    /* try { // try from 00559892 to 0055989b has its CatchHandler @ 00559903 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h227b37816228bbe4E
                (&local_40,CONCAT44(uStack_4c,uStack_50),local_48);
      local_48 = 0;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hf03622863648a7aaE(&local_58);
    }
    local_48 = local_30;
    local_58 = (undefined4)local_40;
    uStack_54 = local_40._4_4_;
    uStack_50 = (undefined4)uStack_38;
    uStack_4c = uStack_38._4_4_;
    _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12write_to_pty17h8c41aa14fceee80bE
              (param_1,&local_58);
  }
  return;
}