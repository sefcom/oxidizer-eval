undefined8 * __rustcall uu_dircolors::escape(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_58 = 0;
  uStack_50 = 1;
  local_48 = 0;
  local_38 = param_3 + param_2;
  local_40 = param_2;
  iVar1 = core::str::validations::next_code_point(&local_40);
  if (iVar1 != 0) {
    uVar3 = 0x20;
    uVar4 = extraout_RDX;
    do {
      if ((int)uVar4 == 0x27) {
        puVar6 = &DAT_00116d80;
        puVar5 = &anon_82c3ed8cdb07ba982e54791b0c97d0cf_178_llvm_541762227079851447;
LAB_001bcdd6:
        uVar2 = core::slice::iter::Iter<T>::make_slice(puVar6,puVar5);
        ::alloc::vec::Vec<T,A>::append_elements(&local_58,uVar2);
      }
      else {
        if (((int)uVar4 == 0x3a) && ((int)uVar3 != 0x5c)) {
          puVar6 = &DAT_00123625;
          puVar5 = (undefined4 *)&DAT_00123627;
          goto LAB_001bcdd6;
        }
                    /* try { // try from 001bcd90 to 001bcde5 has its CatchHandler @ 001bce0a */
        ::alloc::string::String::push(&local_58,uVar4 & 0xffffffff);
      }
      iVar1 = core::str::validations::next_code_point(&local_40);
      uVar3 = uVar4 & 0xffffffff;
      uVar4 = extraout_RDX_00;
    } while (iVar1 != 0);
  }
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = uStack_50;
  return param_1;
}