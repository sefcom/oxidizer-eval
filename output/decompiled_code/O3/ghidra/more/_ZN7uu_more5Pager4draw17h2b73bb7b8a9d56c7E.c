void __rustcall uu_more::Pager::draw(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  draw_lines();
  lVar2 = -1;
  if (!CARRY8((ulong)*(ushort *)(param_1 + 0x40),*(ulong *)(param_1 + 0x18))) {
    lVar2 = (ulong)*(ushort *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x18);
  }
  uVar1 = core::cmp::min_by(*(undefined8 *)(param_1 + 0x30),lVar2);
  draw_prompt(param_1,param_2,uVar1,param_3);
  uVar1 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(param_2);
  core::result::Result<T,E>::unwrap(uVar1,&PTR_DAT_00262a20);
  return;
}