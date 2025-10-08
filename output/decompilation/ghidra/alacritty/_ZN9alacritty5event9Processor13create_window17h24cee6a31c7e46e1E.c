undefined  [16]
_ZN9alacritty5event9Processor13create_window17h24cee6a31c7e46e1E
          (long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 local_5b38;
  undefined8 uStack_5b30;
  undefined8 local_5b28;
  undefined8 local_5b20;
  undefined8 local_5b18;
  undefined8 uStack_5b10;
  undefined8 local_5b08;
  undefined8 local_5af8;
  undefined8 uStack_5af0;
  undefined8 local_5ae8;
  char *pcStack_5ae0;
  undefined local_5ad8 [2728];
  undefined8 local_5030;
  undefined8 local_4030;
  char local_3cb8;
  char cStack_3cb7;
  char cStack_3cb6;
  char cStack_3cb5;
  char cStack_3cb4;
  char cStack_3cb3;
  char cStack_3cb2;
  char cStack_3cb1;
  char cStack_3cb0;
  char cStack_3caf;
  char cStack_3cae;
  char cStack_3cad;
  char cStack_3cac;
  char cStack_3cab;
  char cStack_3caa;
  char cStack_3ca9;
  undefined8 local_3ca8;
  char *local_3ca0;
  undefined local_3c98 [3176];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  if (*(int *)(param_1 + 0x60) != 2) {
                    /* try { // try from 005507a7 to 005507b0 has its CatchHandler @ 00550996 */
    _ZN9alacritty3cli13WindowOptions16config_overrides17h363042409a39fcc3E
              (&local_5b38,*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(param_3 + 0x48));
                    /* try { // try from 005507c3 to 005507d3 has its CatchHandler @ 00550981 */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_14extend_trusted17h5c4c742c6e08d753E
              (&local_5b38,*(long *)(param_1 + 0x3c0),
               *(long *)(param_1 + 0x3c8) * 0x38 + *(long *)(param_1 + 0x3c0),&PTR_DAT_009828a8);
    uVar2 = *(undefined8 *)(param_1 + 0x3d0);
    _ZN5alloc2rc10RcInnerPtr10inc_strong17h04231d05a40329cbE(uVar2);
                    /* try { // try from 005507e3 to 005507ef has its CatchHandler @ 0055097f */
    uVar2 = _ZN9alacritty3cli13ParsedOptions18override_config_rc17h35ab90cde0bbb7d9E
                      (&local_5b38,uVar2);
                    /* try { // try from 005507fc to 00550808 has its CatchHandler @ 00550970 */
    local_5b20 = uVar2;
    _ZN91__LT_winit__platform_impl__linux__EventLoopProxy_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf017a78d33b24d45E
              (&local_1e78,param_1 + 0x40);
    local_5af8 = local_1e78;
    uStack_5af0 = uStack_1e70;
    (*(code *)PTR_memcpy_009de0b0)(&local_1e78,param_3,0xb0);
    local_5b08 = local_5b28;
    local_5b18 = local_5b38;
    uStack_5b10 = uStack_5b30;
    _ZN9alacritty14window_context13WindowContext10additional17h967a45862e027146E
              (&local_3cb8,param_1 + 0x60,param_2,&local_5af8,uVar2,&local_1e78,&local_5b18);
    auVar3[0] = -(local_3cb8 == DAT_001e9660);
    auVar3[1] = -(cStack_3cb7 == UNK_001e9661);
    auVar3[2] = -(cStack_3cb6 == UNK_001e9662);
    auVar3[3] = -(cStack_3cb5 == UNK_001e9663);
    auVar3[4] = -(cStack_3cb4 == UNK_001e9664);
    auVar3[5] = -(cStack_3cb3 == UNK_001e9665);
    auVar3[6] = -(cStack_3cb2 == UNK_001e9666);
    auVar3[7] = -(cStack_3cb1 == UNK_001e9667);
    auVar3[8] = -(cStack_3cb0 == UNK_001e9668);
    auVar3[9] = -(cStack_3caf == UNK_001e9669);
    auVar3[10] = -(cStack_3cae == UNK_001e966a);
    auVar3[0xb] = -(cStack_3cad == UNK_001e966b);
    auVar3[0xc] = -(cStack_3cac == UNK_001e966c);
    auVar3[0xd] = -(cStack_3cab == UNK_001e966d);
    auVar3[0xe] = -(cStack_3caa == UNK_001e966e);
    auVar3[0xf] = -(cStack_3ca9 == UNK_001e966f);
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf)
        != 0xffff) {
      (*(code *)PTR_memcpy_009de0b0)(local_5ad8,local_3c98,0x1e20);
      local_5ae8 = local_3ca8;
      pcStack_5ae0 = local_3ca0;
                    /* try { // try from 005508e7 to 005508f0 has its CatchHandler @ 00550961 */
      uVar2 = _ZN9alacritty14window_context13WindowContext2id17h00e21fe3de0e9e60E(&local_5af8);
      local_3ca0 = &local_3cb8;
      (*(code *)PTR_memcpy_009de0b0)(local_3ca0,&local_5af8,0x1e40);
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h46ec14ebd8deddf3E
                (&local_1e78,param_1 + 0x330,uVar2,local_3ca0);
      _ZN4core3ptr89drop_in_place_LT_core__option__Option_LT_alacritty__window_context__WindowContext_GT__GT_17h05abba2cc3661483E
                (&local_1e78);
      local_3ca8 = 0;
    }
    auVar4._8_8_ = local_3ca0;
    auVar4._0_8_ = local_3ca8;
    return auVar4;
  }
                    /* try { // try from 00550952 to 0055095e has its CatchHandler @ 00550996 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)(&PTR_DAT_00982890);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}