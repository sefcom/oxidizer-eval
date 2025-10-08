long _ZN6uu_fmt9linebreak11break_lines17hc2099fd01901faf2E(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long *local_50;
  long local_48;
  long local_40;
  undefined local_38;
  
  lVar1 = *(long *)(param_1 + 0x58);
  _ZN6uu_fmt9parasplit9ParaWords3new17h604c573007ec43f4E(&local_90,param_2,param_1);
  if (local_80 == 0) {
    lVar1 = param_3[2];
    if ((ulong)(*param_3 - lVar1) < 2) {
      lVar5 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
              )(param_3,"\n",1);
    }
    else {
      *(undefined *)(param_3[1] + lVar1) = 10;
      param_3[2] = lVar1 + 1;
      lVar5 = 0;
    }
  }
  else {
    lVar2 = *(long *)(local_88 + 0x28);
    if ((*(char *)(param_2 + 0x48) == '\0') && (*(char *)(param_2 + 0x49) != '\x01')) {
      if (*(char *)(param_1 + 0x68) == '\0') {
        uVar3 = *(ulong *)(param_1 + 0x40);
        lVar5 = param_3[2];
        lVar4 = lVar1;
        if (uVar3 < (ulong)(*param_3 - lVar5)) {
          (*(code *)PTR_memcpy_001f6e90)(param_3[1] + lVar5,*(undefined8 *)(param_1 + 0x38),uVar3);
          param_3[2] = lVar5 + uVar3;
        }
        else {
          lVar5 = (*(code *)
                    PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
                  )(param_3,*(undefined8 *)(param_1 + 0x38),uVar3);
          if (lVar5 != 0) goto LAB_0016142a;
        }
      }
      else {
        lVar4 = 0;
      }
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x28);
      lVar5 = param_3[2];
      if (uVar3 < (ulong)(*param_3 - lVar5)) {
        (*(code *)PTR_memcpy_001f6e90)(param_3[1] + lVar5,*(undefined8 *)(param_1 + 0x20),uVar3);
        param_3[2] = lVar5 + uVar3;
      }
      else {
        lVar5 = (*(code *)
                  PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
                )(param_3,*(undefined8 *)(param_1 + 0x20),uVar3);
        if (lVar5 != 0) goto LAB_0016142a;
      }
      lVar4 = *(long *)(param_1 + 0x48);
    }
    uVar3 = *(ulong *)(local_88 + 0x18);
    lVar5 = param_3[2];
    if (uVar3 < (ulong)(*param_3 - lVar5)) {
      (*(code *)PTR_memcpy_001f6e90)(param_3[1] + lVar5,*(undefined8 *)(local_88 + 0x10),uVar3);
      param_3[2] = lVar5 + uVar3;
    }
    else {
                    /* try { // try from 00161492 to 001614f6 has its CatchHandler @ 0016150d */
      lVar5 = (*(code *)
                PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17hc701a8cfe4ea9e1eE_001f6f70
              )(param_3,*(undefined8 *)(local_88 + 0x10),uVar3);
      if (lVar5 != 0) goto LAB_0016142a;
    }
    lVar5 = local_80 * 0x40 + local_88;
    local_48 = lVar4 + lVar2;
    local_38 = 1;
    if (*(byte *)(param_1 + 0x68) == 0) {
      local_38 = *(undefined *)(param_2 + 0x4e);
    }
    local_60 = *(undefined4 *)(param_1 + 0x38);
    uStack_5c = *(undefined4 *)(param_1 + 0x3c);
    uStack_58 = *(undefined4 *)(param_1 + 0x40);
    uStack_54 = *(undefined4 *)(param_1 + 0x44);
    local_68 = param_2;
    local_50 = param_3;
    local_40 = lVar1;
    if (((*(byte *)(param_2 + 0x4f) | *(byte *)(param_1 + 0x68)) & 1) == 0) {
      lVar5 = _ZN6uu_fmt9linebreak17break_knuth_plass17hff9de5c7a48631b8E
                        (local_88 + 0x40,lVar5,&local_68);
    }
    else {
                    /* try { // try from 001613e4 to 00161426 has its CatchHandler @ 0016150d */
      lVar5 = _ZN6uu_fmt9linebreak12break_simple17h385151684df30ef9E
                        (local_88 + 0x40,lVar5,&local_68);
    }
  }
LAB_0016142a:
  _ZN4core3ptr49drop_in_place_LT_uu_fmt__parasplit__ParaWords_GT_17hed976bcb652c3a4aE
            (local_90,local_88);
  return lVar5;
}