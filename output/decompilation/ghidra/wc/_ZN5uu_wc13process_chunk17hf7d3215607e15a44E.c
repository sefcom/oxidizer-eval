void _ZN5uu_wc13process_chunk17hf7d3215607e15a44E
               (long *param_1,long param_2,long param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar3;
  char cVar4;
  long lVar5;
  long local_50;
  long local_40;
  long local_38;
  
  local_38 = param_2 + param_3;
  cVar4 = *param_4;
  local_40 = param_2;
  iVar2 = _ZN4core3str11validations15next_code_point17hb01acf43b4359c77E(&local_40);
  if (iVar2 != 0) {
    lVar5 = param_1[2];
    local_50 = param_1[3];
    uVar3 = extraout_EDX;
    do {
      if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
LAB_001baea8:
        *param_4 = '\0';
        cVar4 = '\0';
      }
      else {
        if (0x7f < uVar3) {
          cVar1 = _ZN4core7unicode12unicode_data11white_space6lookup17hc2937f3d40e148abE(uVar3);
          if (cVar1 != '\0') goto LAB_001baea8;
        }
        if (cVar4 == '\0') {
          *param_4 = '\x01';
          local_50 = local_50 + 1;
          param_1[3] = local_50;
          cVar4 = '\x01';
        }
      }
      if (uVar3 == 10) {
        lVar5 = lVar5 + 1;
        param_1[2] = lVar5;
      }
      iVar2 = _ZN4core3str11validations15next_code_point17hb01acf43b4359c77E(&local_40);
      uVar3 = extraout_EDX_00;
    } while (iVar2 != 0);
  }
  *param_1 = *param_1 + param_3;
  lVar5 = _ZN4core3cmp6max_by17h29d87775ffd58160E(0,param_1[4]);
  param_1[4] = lVar5;
  return;
}