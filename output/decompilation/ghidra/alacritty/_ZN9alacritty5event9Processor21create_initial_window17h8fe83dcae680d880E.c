undefined  [16]
_ZN9alacritty5event9Processor21create_initial_window17h8fe83dcae680d880E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_5ae8;
  undefined8 uStack_5ae0;
  undefined8 local_5ad8;
  char *pcStack_5ad0;
  undefined local_5ac8 [2720];
  undefined8 local_5028;
  undefined local_46d0 [1704];
  undefined8 local_4028;
  char local_3ca8;
  char cStack_3ca7;
  char cStack_3ca6;
  char cStack_3ca5;
  char cStack_3ca4;
  char cStack_3ca3;
  char cStack_3ca2;
  char cStack_3ca1;
  char cStack_3ca0;
  char cStack_3c9f;
  char cStack_3c9e;
  char cStack_3c9d;
  char cStack_3c9c;
  char cStack_3c9b;
  char cStack_3c9a;
  char cStack_3c99;
  undefined8 local_3c98;
  char *local_3c90;
  undefined local_3c88 [3168];
  undefined8 local_3028;
  undefined8 local_2028;
  undefined8 local_1e68;
  undefined8 uStack_1e60;
  undefined8 local_1028;
  
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  local_4028 = 0;
  local_5028 = 0;
                    /* try { // try from 00550598 to 005505a4 has its CatchHandler @ 00550715 */
  _ZN91__LT_winit__platform_impl__linux__EventLoopProxy_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf017a78d33b24d45E
            (&local_1e68,param_1 + 0x40);
  local_5ae8 = local_1e68;
  uStack_5ae0 = uStack_1e60;
  uVar1 = *(undefined8 *)(param_1 + 0x3d0);
  _ZN5alloc2rc10RcInnerPtr10inc_strong17h04231d05a40329cbE(uVar1);
  (*(code *)PTR_memcpy_009de0b0)(&local_1e68,param_3,0xb0);
  _ZN9alacritty14window_context13WindowContext7initial17hf53962b78b6f5e18E
            (&local_3ca8,param_2,&local_5ae8,uVar1,&local_1e68);
  auVar2[0] = -(local_3ca8 == DAT_001e9660);
  auVar2[1] = -(cStack_3ca7 == UNK_001e9661);
  auVar2[2] = -(cStack_3ca6 == UNK_001e9662);
  auVar2[3] = -(cStack_3ca5 == UNK_001e9663);
  auVar2[4] = -(cStack_3ca4 == UNK_001e9664);
  auVar2[5] = -(cStack_3ca3 == UNK_001e9665);
  auVar2[6] = -(cStack_3ca2 == UNK_001e9666);
  auVar2[7] = -(cStack_3ca1 == UNK_001e9667);
  auVar2[8] = -(cStack_3ca0 == UNK_001e9668);
  auVar2[9] = -(cStack_3c9f == UNK_001e9669);
  auVar2[10] = -(cStack_3c9e == UNK_001e966a);
  auVar2[0xb] = -(cStack_3c9d == UNK_001e966b);
  auVar2[0xc] = -(cStack_3c9c == UNK_001e966c);
  auVar2[0xd] = -(cStack_3c9b == UNK_001e966d);
  auVar2[0xe] = -(cStack_3c9a == UNK_001e966e);
  auVar2[0xf] = -(cStack_3c99 == UNK_001e966f);
  if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf) !=
      0xffff) {
    (*(code *)PTR_memcpy_009de0b0)(local_5ac8,local_3c88,0x1e20);
    local_5ad8 = local_3c98;
    pcStack_5ad0 = local_3c90;
                    /* try { // try from 00550672 to 00550677 has its CatchHandler @ 00550702 */
    auVar2 = (*(code *)
               PTR__ZN82__LT_glutin__context__NotCurrentContext_u20_as_u20_glutin__config__GetGlConfig_GT_6config17hde59c67359acb4caE_009dfe78
             )(local_46d0);
                    /* try { // try from 00550682 to 00550686 has its CatchHandler @ 005506f5 */
    _ZN4core3ptr71drop_in_place_LT_core__option__Option_LT_glutin__config__Config_GT__GT_17h6dd549acf5270ad2E
              (param_1 + 0x60);
    *(undefined (*) [16])(param_1 + 0x60) = auVar2;
                    /* try { // try from 0055068f to 00550696 has its CatchHandler @ 00550702 */
    uVar1 = _ZN9alacritty14window_context13WindowContext2id17h00e21fe3de0e9e60E(&local_5ae8);
    local_3c90 = &local_3ca8;
    (*(code *)PTR_memcpy_009de0b0)(local_3c90,&local_5ae8,0x1e40);
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h46ec14ebd8deddf3E
              (&local_1e68,param_1 + 0x330,uVar1,local_3c90);
    _ZN4core3ptr89drop_in_place_LT_core__option__Option_LT_alacritty__window_context__WindowContext_GT__GT_17h05abba2cc3661483E
              (&local_1e68);
    local_3c98 = 0;
  }
  auVar3._8_8_ = local_3c90;
  auVar3._0_8_ = local_3c98;
  return auVar3;
}