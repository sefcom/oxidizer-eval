ulong __rustcall
uu_ptx::trim_broken_word_right(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  assert_str_integrity(param_2,param_3,param_4);
  uVar5 = param_4;
  if ((param_3 != param_4) && (param_4 != param_2)) {
    uVar6 = param_4 - 1;
    if (param_2 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(uVar6,param_2,&DAT_003ee730);
    }
    uVar2 = *(uint *)(param_1 + -4 + param_4 * 4);
    if (((4 < uVar2 - 9) && (uVar2 != 0x20)) &&
       ((uVar2 < 0x80 || (cVar3 = core::unicode::unicode_data::white_space::lookup(), cVar3 == '\0')
        ))) {
      if (param_2 <= param_4) {
        puVar4 = &DAT_003ee748;
LAB_002b6ef4:
                    /* WARNING: Subroutine does not return */
        core::panicking::panic_bounds_check(param_4,param_2,puVar4);
      }
      uVar2 = *(uint *)(param_1 + param_4 * 4);
      if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
        if (uVar2 < 0x80) {
          if (param_4 <= param_3) {
            return param_4;
          }
        }
        else {
          cVar3 = core::unicode::unicode_data::white_space::lookup();
          if (param_4 <= param_3) {
            return param_4;
          }
          if (cVar3 != '\0') {
            return param_4;
          }
        }
        if (param_3 < uVar6) {
          uVar6 = param_3;
        }
        do {
          uVar1 = param_4 - 1;
          if (param_2 <= uVar1) {
            param_4 = param_4 - 1;
            puVar4 = &DAT_003ee760;
            goto LAB_002b6ef4;
          }
          uVar2 = *(uint *)(param_1 + uVar1 * 4);
          uVar5 = param_4;
        } while ((((0x20 < (ulong)uVar2) || ((0x100003e00U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) &&
                 ((uVar2 < 0x80 ||
                  (cVar3 = core::unicode::unicode_data::white_space::lookup(), cVar3 == '\0')))) &&
                (uVar5 = uVar6, param_4 = uVar1, param_3 < uVar1));
      }
    }
  }
  return uVar5;
}