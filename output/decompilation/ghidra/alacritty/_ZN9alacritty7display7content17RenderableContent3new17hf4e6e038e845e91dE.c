void _ZN9alacritty7display7content17RenderableContent3new17hf4e6e038e845e91dE
               (undefined8 *param_1,long param_2,long param_3,long param_4,char *param_5)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  undefined auVar10 [16];
  char local_152;
  undefined8 local_150;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  char cStack_b0;
  undefined7 uStack_af;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78 [72];
  
  uVar6 = 0x8000000000000001;
  auVar10[0] = -(*param_5 == DAT_001e8640);
  auVar10[1] = -(param_5[1] == UNK_001e8641);
  auVar10[2] = -(param_5[2] == UNK_001e8642);
  auVar10[3] = -(param_5[3] == UNK_001e8643);
  auVar10[4] = -(param_5[4] == UNK_001e8644);
  auVar10[5] = -(param_5[5] == UNK_001e8645);
  auVar10[6] = -(param_5[6] == UNK_001e8646);
  auVar10[7] = -(param_5[7] == UNK_001e8647);
  auVar10[8] = -(param_5[8] == UNK_001e8648);
  auVar10[9] = -(param_5[9] == UNK_001e8649);
  auVar10[10] = -(param_5[10] == UNK_001e864a);
  auVar10[0xb] = -(param_5[0xb] == UNK_001e864b);
  auVar10[0xc] = -(param_5[0xc] == UNK_001e864c);
  auVar10[0xd] = -(param_5[0xd] == UNK_001e864d);
  auVar10[0xe] = -(param_5[0xe] == UNK_001e864e);
  auVar10[0xf] = -(param_5[0xf] == UNK_001e864f);
  if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf)
      != 0xffff) {
    _ZN9alacritty7display4hint24visible_regex_match_iter17h3b713c9c9910fb82E
              (local_78,param_4,param_5);
    _ZN4core4iter6traits8iterator8Iterator7collect17h1825dbe1f36682d5E(&local_110,local_78);
    local_150 = local_108;
    local_140 = local_100;
    uVar6 = local_110;
  }
  cVar1 = param_5[0x1160];
                    /* try { // try from 005461fd to 00546419 has its CatchHandler @ 0054641c */
  _ZN18alacritty_terminal4term17RenderableContent3new17hc5b72ca633d74e55E(&local_f8,param_4);
  cVar4 = cStack_b0;
  local_152 = '\x04';
  if ((((cStack_b0 != '\x04') && (*(char *)(param_3 + 0x836) == '\0')) &&
      (lVar5 = _ZN9alacritty5event11SearchState5regex17h987f2ff06a62c5a5E(param_5), lVar5 == 0)) &&
     ((*(long *)(param_3 + 0x2d0) == 2 &&
      ((*(char *)(param_4 + 0x6e2) != '\0' ||
       (local_152 = '\x03', *(char *)(param_2 + 0x3d9) == '\0')))))) {
    local_152 = cVar4;
  }
  uVar3 = uStack_c0;
  uVar8 = local_b8 + local_f8;
  if ((int)uVar8 < 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_009de108)
              (&PTR_s_alacritty_src_display_content_rs_009820f0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(long *)(param_3 + 0x478) == 0) {
    uVar7 = 0x8000000000000001;
  }
  else {
    _ZN9alacritty7display4hint9HintState14update_matches17h4cd609f91e40cc38E
              (param_3 + 0x418,param_4);
    local_130 = *(undefined8 *)(param_3 + 0x438);
    local_128 = *(undefined8 *)(param_3 + 0x440);
    local_138 = param_3 + 0x448;
    uVar7 = 0x8000000000000000;
  }
  pcVar9 = (char *)0x0;
  if (cVar1 != '\x02') {
    pcVar9 = param_5 + 0x1140;
  }
  _ZN9alacritty7display7content16RenderableCursor10new_hidden17h277801ded5827119E(param_1 + 0x19);
  param_1[0x17] = local_88;
  param_1[0x18] = uStack_80;
  param_1[0x15] = local_98;
  param_1[0x16] = uStack_90;
  param_1[0x13] = local_a8;
  param_1[0x14] = uStack_a0;
  param_1[0x11] = CONCAT44(uStack_b4,local_b8);
  param_1[0x12] = CONCAT71(uStack_af,cStack_b0);
  param_1[0xf] = local_c8;
  param_1[0x10] = uStack_c0;
  param_1[0xd] = local_d8;
  param_1[0xe] = uStack_d0;
  param_1[0xb] = local_e8;
  param_1[0xc] = uStack_e0;
  param_1[9] = CONCAT44(uStack_f4,local_f8);
  param_1[10] = uStack_f0;
  *(char *)(param_1 + 0x23) = local_152;
  param_1[0x20] = (ulong)uVar8;
  param_1[0x21] = uVar3;
  *param_1 = uVar6;
  param_1[1] = local_150;
  param_1[2] = local_140;
  param_1[3] = 0;
  param_1[4] = uVar7;
  param_1[5] = local_130;
  param_1[6] = local_128;
  param_1[7] = 0;
  param_1[8] = local_138;
  param_1[0x1d] = param_2;
  param_1[0x1e] = param_3 + 0x838;
  param_1[0x22] = pcVar9;
  param_1[0x1f] = param_3 + 0x798;
  return;
}