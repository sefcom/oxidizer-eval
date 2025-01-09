void __rustcall uu_tail::chunks::LinesChunk::count_lines(long param_1)

{
  undefined uVar1;
  undefined auVar2 [16];
  undefined local_10 [8];
  
  uVar1 = *(undefined *)(param_1 + 0x2010);
  auVar2 = get_buffer();
  local_10[0] = uVar1;
  memchr::arch::generic::memchr::Iter::count(auVar2._0_8_,auVar2._8_8_ + auVar2._0_8_,local_10);
  return;
}