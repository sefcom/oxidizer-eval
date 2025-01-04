long __rustcall uu_fmt::linebreak::break_lines(long param_1,long param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *local_78;
  long local_70;
  long local_68;
  undefined local_60;
  undefined local_58 [8];
  long local_50;
  long local_48;
  
  lVar1 = *(long *)(param_1 + 0x58);
  parasplit::ParaWords::new(local_58,param_2,param_1);
  local_a0 = local_48 * 0x40 + local_50;
  local_a8 = local_50;
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_a8);
  if (lVar3 == 0) {
    lVar1 = param_3[2];
    if ((ulong)(*param_3 - lVar1) < 2) {
                    /* try { // try from 001bb2aa to 001bb2cd has its CatchHandler @ 001bb42f */
      lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_3,"\n",1);
    }
    else {
      *(undefined *)(param_3[1] + lVar1) = 10;
      param_3[2] = lVar1 + 1;
      lVar4 = 0;
    }
  }
  else {
    local_98 = *(long *)(lVar3 + 0x28);
    if (*(char *)(param_2 + 0x48) == '\0' && *(char *)(param_2 + 0x49) == '\0') {
      if (*(char *)(param_1 + 0x68) == '\0') {
        uVar2 = *(ulong *)(param_1 + 0x40);
        lVar4 = param_3[2];
        lVar5 = lVar1;
        if (uVar2 < (ulong)(*param_3 - lVar4)) {
          (*(code *)PTR_memcpy_0022a4a8)(param_3[1] + lVar4,*(undefined8 *)(param_1 + 0x38),uVar2);
          param_3[2] = lVar4 + uVar2;
        }
        else {
                    /* try { // try from 001bb315 to 001bb31f has its CatchHandler @ 001bb42f */
          lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                            (param_3,*(undefined8 *)(param_1 + 0x38),uVar2);
          if (lVar4 != 0) goto LAB_001bb3fa;
        }
      }
      else {
        lVar5 = 0;
      }
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x28);
      lVar4 = param_3[2];
      if (uVar2 < (ulong)(*param_3 - lVar4)) {
        (*(code *)PTR_memcpy_0022a4a8)(param_3[1] + lVar4,*(undefined8 *)(param_1 + 0x20),uVar2);
        param_3[2] = lVar4 + uVar2;
      }
      else {
        lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                          (param_3,*(undefined8 *)(param_1 + 0x20),uVar2);
        if (lVar4 != 0) goto LAB_001bb3fa;
      }
      lVar5 = *(long *)(param_1 + 0x48);
    }
    uVar2 = *(ulong *)(lVar3 + 0x18);
    lVar4 = param_3[2];
    if (uVar2 < (ulong)(*param_3 - lVar4)) {
      (*(code *)PTR_memcpy_0022a4a8)(param_3[1] + lVar4,*(undefined8 *)(lVar3 + 0x10),uVar2);
      param_3[2] = lVar4 + uVar2;
    }
    else {
                    /* try { // try from 001bb363 to 001bb3f6 has its CatchHandler @ 001bb42f */
      lVar4 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                        (param_3,*(undefined8 *)(lVar3 + 0x10),uVar2);
      if (lVar4 != 0) goto LAB_001bb3fa;
    }
    local_70 = lVar5 + local_98;
    local_90 = param_2;
    local_78 = param_3;
    local_68 = lVar1;
    if (*(char *)(param_1 + 0x68) == '\0') {
      local_60 = *(undefined *)(param_2 + 0x4e);
      local_88 = *(undefined4 *)(param_1 + 0x38);
      uStack_84 = *(undefined4 *)(param_1 + 0x3c);
      uStack_80 = *(undefined4 *)(param_1 + 0x40);
      uStack_7c = *(undefined4 *)(param_1 + 0x44);
      if (*(char *)(param_2 + 0x4f) == '\0') {
                    /* try { // try from 001bb423 to 001bb42c has its CatchHandler @ 001bb42f */
        lVar4 = break_knuth_plass(local_a8,local_a0,&local_90);
        goto LAB_001bb3fa;
      }
    }
    else {
      local_88 = *(undefined4 *)(param_1 + 0x38);
      uStack_84 = *(undefined4 *)(param_1 + 0x3c);
      uStack_80 = *(undefined4 *)(param_1 + 0x40);
      uStack_7c = *(undefined4 *)(param_1 + 0x44);
      local_60 = 1;
    }
    lVar4 = break_simple(local_a8,local_a0,&local_90);
  }
LAB_001bb3fa:
  core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(local_58);
  return lVar4;
}