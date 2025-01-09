undefined8 * __rustcall uu_dd::BlockWriter::flush(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*param_2 == -0x8000000000000000) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return (undefined8 *)0x8000000000000000;
  }
  Output::write_blocks(&lStack_78,param_2 + 3,param_2[1],param_2[2]);
  if (lStack_78 == 0) {
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (lStack_60 != 0) {
      core::result::Result<T,E>::unwrap(1);
      pcVar1 = (code *)swi(3);
      puVar2 = (undefined8 *)(*pcVar1)();
      return puVar2;
    }
    uVar3 = 0;
    core::result::Result<T,E>::unwrap(0);
    ::alloc::vec::Vec<T,A>::drain(&lStack_78,param_2,0,uStack_68);
    core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(&lStack_78);
    param_1[3] = 0;
    param_1[2] = uStack_68;
    param_1[4] = CONCAT44(uStack_44,uStack_48);
    param_1[5] = CONCAT44(uStack_3c,uStack_40);
  }
  else {
    param_1[1] = uStack_70;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}