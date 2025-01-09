undefined  [16] __rustcall uu_dd::Output::write_block(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined auVar4 [16];
  ulong local_38;
  
  uVar2 = 0;
  do {
    while( true ) {
      auVar4 = _<uu_dd::Dest_as_std::io::Write>::write(param_1,param_2 + uVar2,param_3 - uVar2);
      uVar3 = auVar4._8_8_;
      if (auVar4._0_8_ == 0) break;
      cVar1 = std::io::error::Error::kind(uVar3);
      if (cVar1 != '#') goto LAB_001d7cc9;
      local_38 = uVar3;
      core::ptr::drop_in_place<std::io::error::Error>(&local_38);
    }
    uVar3 = uVar2 + uVar3;
  } while ((uVar3 < param_3) && (uVar2 = uVar3, *(char *)(*(long *)(param_1 + 0x10) + 0x4d) != '\0')
          );
LAB_001d7cc9:
  auVar4._8_8_ = uVar3;
  return auVar4;
}