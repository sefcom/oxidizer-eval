undefined  [16] __rustcall
uu_tail::forwards_thru_file(undefined8 param_1,ulong param_2,undefined param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long lVar3;
  
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_60,0x2000,param_1);
  local_78 = 0;
  local_70 = 1;
  lVar4 = 0;
  uVar2 = 0;
  while( true ) {
    local_68 = 0;
    uVar2 = _<u64_as_core::iter::range::Step>::forward_unchecked(uVar2);
                    /* try { // try from 0021392b to 00213939 has its CatchHandler @ 00213996 */
    auVar5 = std::io::read_until(&local_60,param_3,&local_78);
    lVar3 = auVar5._8_8_;
    lVar1 = lVar3;
    if ((auVar5._0_8_ != 0) || (lVar1 = lVar4, lVar3 == 0)) break;
    lVar4 = lVar4 + lVar3;
    local_68 = 0;
    if (param_2 <= uVar2) {
                    /* try { // try from 00213958 to 0021396c has its CatchHandler @ 00213991 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_78);
LAB_0021396d:
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_std::fs::File>>
                (local_60,local_58);
      auVar5._8_8_ = lVar4;
      return auVar5;
    }
  }
  lVar4 = lVar1;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_78);
  goto LAB_0021396d;
}