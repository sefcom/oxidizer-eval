ulong * __rustcall
uu_dd::bufferedoutput::BufferedOutput::write_blocks
          (ulong *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x28) + 0x78);
  if (uVar1 != 0) {
    uVar3 = *(long *)(param_2 + 0x10) + param_4;
    if ((uVar3 | uVar1) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      uVar3 = uVar3 % uVar1;
    }
    lVar4 = 0;
    if (uVar3 <= param_4) {
      lVar4 = param_4 - uVar3;
    }
    core::slice::_<impl[T]>::split_at_unchecked(&local_98,param_3,param_4,lVar4);
    uVar5 = core::slice::iter::Iter<T>::make_slice(local_98,local_90 + local_98);
    ::alloc::vec::Vec<T,A>::append_elements(param_2,uVar5);
    Output::write_blocks
              (&local_58,param_2 + 0x18,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10)
              );
    if (local_58 == 0) {
      local_68 = local_38;
      uStack_64 = uStack_34;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      local_78 = local_48;
      uStack_74 = uStack_44;
      uStack_70 = uStack_40;
      uStack_6c = uStack_3c;
      *(undefined8 *)(param_2 + 0x10) = 0;
      uVar5 = core::slice::iter::Iter<T>::make_slice(local_88,local_80 + local_88);
      ::alloc::vec::Vec<T,A>::append_elements(param_2,uVar5);
      param_1[4] = CONCAT44(uStack_64,local_68);
      param_1[5] = CONCAT44(uStack_5c,uStack_60);
      param_1[2] = CONCAT44(uStack_74,local_78);
      param_1[3] = CONCAT44(uStack_6c,uStack_70);
    }
    else {
      param_1[1] = local_50;
    }
    *param_1 = (ulong)(local_58 != 0);
    return param_1;
  }
  core::panicking::panic_const::panic_const_rem_by_zero
            (&PTR_s_src_uu_dd_src_bufferedoutput_rs_00262200);
  pcVar2 = (code *)swi(3);
  puVar6 = (ulong *)(*pcVar2)();
  return puVar6;
}